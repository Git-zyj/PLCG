/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223529
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */int) var_13)) << (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_12)))) ? (min((((/* implicit */int) var_5)), (var_16))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15234624932803473458ULL)) ? ((+(((/* implicit */int) var_7)))) : (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((_Bool) arr_2 [2] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23596))) : (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) var_12))))));
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) ^ (((/* implicit */int) arr_7 [i_0]))))), (var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_1] [(signed char)6] = ((min((((/* implicit */unsigned long long int) var_13)), (arr_2 [i_1 + 1] [i_2 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 2] [i_2 - 1])))))));
                                arr_19 [i_0] [4ULL] [i_0] [i_3] [i_4] [(short)17] = ((/* implicit */unsigned int) 178975562);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned long long int) (+(((var_10) + (((/* implicit */int) arr_7 [i_0]))))));
        arr_21 [i_0] [i_0] = arr_12 [i_0] [i_0] [(_Bool)1];
    }
    var_19 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) (unsigned char)255))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */_Bool) var_10);
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((var_0), (((/* implicit */unsigned long long int) (~((~(var_1)))))))))));
}
