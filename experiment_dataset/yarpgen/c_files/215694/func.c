/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215694
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
    var_17 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_12)))) && (((/* implicit */_Bool) (+(var_10))))))), (var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_13 [(unsigned short)14] [i_3] [i_2] [i_1] [(unsigned short)14] |= arr_4 [i_0];
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) min((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) min((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_5 - 1] [i_1] [i_4] [i_5] [i_4 - 1]);
                                arr_22 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_4 - 3] [i_4] [i_4 - 1] [i_4] [i_4]))));
                            }
                        } 
                    } 
                    var_19 = ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (arr_14 [i_1] [i_4] [i_4] [i_4]));
                }
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (arr_14 [i_1] [i_1] [i_0] [i_1]))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))))))))))));
            }
        } 
    } 
}
