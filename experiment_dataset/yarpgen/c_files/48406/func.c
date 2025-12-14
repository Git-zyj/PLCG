/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48406
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (min((((/* implicit */unsigned long long int) min((var_12), (0U)))), ((+(18446744073709551609ULL)))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1])) < (((/* implicit */int) arr_3 [i_0 - 3]))))), (((((/* implicit */int) var_15)) + (((/* implicit */int) arr_3 [i_0 - 2]))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(arr_4 [i_4] [i_2]))))));
                                var_22 = ((/* implicit */long long int) arr_7 [i_1] [i_2] [i_3] [i_4]);
                                arr_14 [i_3] = ((/* implicit */long long int) ((max((17ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_3 + 4])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((int) (-(18446744073709551612ULL))))));
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) ((int) min((arr_8 [i_0] [i_1] [i_2] [i_5]), (arr_8 [i_2] [i_2] [i_2] [i_2]))));
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] &= ((/* implicit */unsigned char) ((long long int) ((arr_2 [i_0 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (var_5))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0])))))), ((~(max((7ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned char) min((arr_2 [i_0]), (arr_2 [i_0])))), (((unsigned char) arr_2 [i_0]))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_26 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_4 [i_0 - 3] [i_0 + 1]) > (arr_4 [i_0 - 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 1])) ? (arr_4 [i_0 + 2] [i_0 - 1]) : (arr_4 [i_0 - 3] [i_0 + 2])))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~((((-(262143ULL))) / (7ULL))))))));
                        var_28 = ((/* implicit */unsigned short) max(((-(((long long int) arr_20 [i_0] [i_1] [i_1] [i_7] [i_1] [i_0])))), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_0 - 2] [i_0]))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) 6ULL))));
                        arr_24 [i_0] [i_1] [i_2] [i_7] = ((((/* implicit */_Bool) ((long long int) arr_3 [i_0 - 1]))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1])))));
                    }
                    arr_25 [i_1] [i_1] = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
}
