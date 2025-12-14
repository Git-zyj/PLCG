/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246266
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((-(((var_5) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) ^ (((/* implicit */long long int) var_14)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) ^ (((((/* implicit */_Bool) var_3)) ? (((-9223372036854775807LL) | (9105471123454023024LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23)) << (((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) (((+(10796425669653782736ULL))) < (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_2])) ? (767612358U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)0)), (arr_3 [i_2])))))))));
                    var_18 = ((/* implicit */int) 5120726921109608942LL);
                    arr_9 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) >> (((arr_7 [i_1]) - (4047241905U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 9105471123454023024LL)))))) : ((~(var_12)))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 1536ULL)) && (((/* implicit */_Bool) (signed char)-119))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)8] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [8LL] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 - 2] [i_3])) ? (((/* implicit */int) var_0)) : (var_6)))) | (((((/* implicit */_Bool) arr_2 [i_4])) ? (var_3) : (((/* implicit */long long int) var_2))))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((min((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_5 [i_0])))), (((((/* implicit */int) var_4)) >> (((arr_11 [7LL] [i_1] [(signed char)5] [i_3] [(unsigned short)3] [i_4]) - (269395839))))))) == (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4]))))) + (((/* implicit */int) ((arr_10 [i_0] [i_3] [i_0] [i_0]) == (((/* implicit */unsigned int) -2050099964)))))))));
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_2 [i_1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
