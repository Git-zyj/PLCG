/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240634
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 -= ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_19 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1])) != (((/* implicit */int) var_11))))), (min((((/* implicit */unsigned long long int) var_16)), (var_1))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((var_2) > (((/* implicit */unsigned int) (~(((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_11);
                            }
                            arr_15 [i_0] [i_0] [i_0] [1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (min((arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) 536870912U))))));
                            var_21 = ((/* implicit */signed char) (~(((((/* implicit */int) (short)32762)) * (((/* implicit */int) (unsigned char)243))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1] [i_1 - 2]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((signed char) var_16));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((min((var_0), (var_14))) || (((/* implicit */_Bool) ((int) arr_11 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                var_24 = ((/* implicit */short) ((((_Bool) (~(((/* implicit */int) arr_1 [5U]))))) ? (((var_6) ? (arr_10 [i_6 + 1] [i_6 + 2] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 + 2] [i_6 - 3] [i_6] [i_6]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_0] [i_0]), (arr_18 [i_0]))))) - (min((var_5), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6 + 2])) | (((/* implicit */int) arr_3 [i_6 + 3]))))) < (max((((/* implicit */unsigned long long int) arr_3 [i_6 + 3])), (var_7)))));
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(var_7))) / (((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */long long int) 4294967295U)))))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_1))))));
    var_28 = ((/* implicit */_Bool) max(((short)276), (((/* implicit */short) (signed char)43))));
}
