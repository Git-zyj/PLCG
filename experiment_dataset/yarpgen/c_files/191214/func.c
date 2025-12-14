/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191214
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
    var_15 ^= ((((/* implicit */_Bool) var_8)) ? (min((((var_2) << (((var_8) - (3703876540502053345LL))))), (max((1040187392U), (3254779904U))))) : (var_3));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = var_8;
                    arr_8 [i_0] = ((unsigned int) ((long long int) min((arr_0 [i_0]), (((/* implicit */long long int) 2779979752U)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2227357653U)), (-2002346044423070988LL)))) ? (max((arr_6 [i_0] [i_1] [i_2] [i_0]), (var_7))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1] [i_2 - 4])) ? (((/* implicit */long long int) arr_4 [i_0] [i_1 + 2] [i_2 - 3])) : (arr_6 [i_0] [i_1] [i_0] [i_3 - 1])))));
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_0])))) ? (((/* implicit */long long int) ((arr_4 [i_3 + 1] [i_1 + 2] [4U]) % (var_6)))) : (((((/* implicit */_Bool) -3941729884252752656LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((2779979769U) == (var_4))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_6)) : (arr_1 [i_3])))))));
                        var_18 *= ((/* implicit */unsigned int) max((((long long int) arr_1 [i_1 + 2])), (((/* implicit */long long int) max((((arr_4 [i_0] [i_2] [i_2]) + (var_1))), (max((var_6), (var_6))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_19 ^= min((((((3254779904U) >= (2779979752U))) ? (5695611994732474640LL) : (((/* implicit */long long int) (~(var_0)))))), (max((((/* implicit */long long int) ((arr_14 [i_4] [i_2] [i_1] [i_0]) >= (var_9)))), (min((((/* implicit */long long int) arr_15 [i_5] [i_4] [i_2] [i_1 + 1] [0LL])), (var_13))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((var_4), (max((var_2), (148165379U))))) : ((~(max((1040187386U), (var_1)))))));
                                arr_19 [i_0] [i_0] [i_0] [1LL] [i_0] = min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 2])) ? (3254779906U) : (arr_4 [i_0] [i_1 + 2] [i_1 - 1]))), (max((arr_4 [i_2] [i_1] [i_1 - 1]), (var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
