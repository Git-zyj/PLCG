/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193461
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
    var_15 = var_13;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((max((min((arr_1 [i_2]), (arr_3 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)35769))))))) / (min((min((arr_2 [i_0]), (arr_4 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_2] [2LL] [i_4] [i_4])) ? (arr_5 [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))) >> (((arr_0 [i_1]) + (2198461059755645284LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_0 [i_1]) : (arr_5 [i_0] [i_0])))) ? (((arr_1 [i_0]) | (arr_5 [i_0] [i_0]))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [10LL] [i_4])), (arr_5 [i_0] [i_1])))))));
                                arr_14 [i_0] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((-25LL) <= (-8726844580542396902LL))))) * (arr_5 [i_0] [i_3])));
                            }
                        } 
                    } 
                    var_16 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)13] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [3LL] [i_0] [i_0]))) : (arr_6 [i_2] [1LL]))) + (9223372036854775807LL))) >> (((min((((/* implicit */long long int) (short)-6484)), (-8726844580542396890LL))) + (8726844580542396938LL)))))) ? (min((43LL), (5364049991810798857LL))) : (min((((/* implicit */long long int) (+(((/* implicit */int) (short)-7109))))), (arr_4 [i_0] [i_0] [4LL]))));
                    arr_15 [i_0] [i_0] [4LL] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)53528)), (min((((/* implicit */long long int) arr_12 [i_0] [12LL] [i_1] [i_1] [i_2] [i_1] [(short)8])), (arr_4 [i_0] [i_1] [(unsigned short)8])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) << ((((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_13))))) + (30360LL)))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)7094))))))))))));
}
