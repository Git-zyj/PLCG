/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223633
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
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((var_4) == (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)127))));
                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) var_2))) == ((-(((/* implicit */int) (signed char)127)))))))));
                var_21 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_12)))), ((+((+(((/* implicit */int) (_Bool)1))))))));
                var_22 = ((/* implicit */_Bool) (+(var_9)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 1) 
                            {
                                arr_12 [i_1 + 3] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_2] [(signed char)0]);
                                arr_13 [i_1] [i_1 + 2] [i_1] [i_3] [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_2] [i_3 - 2] [i_4 + 2] [i_3 - 2]), (((/* implicit */long long int) 4091608545U))))) ? (arr_7 [i_0] [i_3 - 1] [i_0] [(signed char)0] [(short)7] [i_3 + 1]) : (((arr_9 [i_1] [0U] [i_2] [i_1]) ? (((/* implicit */long long int) var_5)) : (arr_7 [i_0] [i_0] [(short)9] [(_Bool)1] [(_Bool)1] [i_3 - 2])))));
                            }
                            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
                            {
                                var_24 = min((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_3] [i_2])), (var_12)))) : (((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)8] [(_Bool)1] [i_5]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_11))))), (var_10))));
                                arr_17 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22718)) ? (var_13) : (((/* implicit */int) (_Bool)1))))))))));
                                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4091608545U)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (unsigned short)60957))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
