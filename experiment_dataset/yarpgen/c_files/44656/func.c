/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44656
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_5) : ((~(((/* implicit */int) (signed char)5))))))) ? (((/* implicit */int) var_16)) : (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [16LL] = (_Bool)1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (unsigned char)120)) * (((/* implicit */int) (unsigned char)165)))))));
                                arr_15 [17U] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)169))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_1] [i_2] [i_0] [(_Bool)1]))) ? ((+(arr_11 [i_6] [i_2] [i_2] [i_1] [i_0]))) : (((long long int) arr_2 [i_5]))))) ? (((((/* implicit */_Bool) ((int) arr_20 [i_1] [i_2 - 2] [i_2 - 2] [i_6]))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_18 [i_0] [3ULL] [i_0] [i_0] [(short)15])) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)13] [(short)13] [(unsigned char)11] [i_6]))))) : (((((/* implicit */_Bool) ((arr_6 [i_1] [23LL] [i_6]) >> (((((/* implicit */int) (unsigned char)183)) - (156)))))) ? (70368677068800LL) : (-70368677068777LL))))))));
                                arr_21 [(short)8] = ((/* implicit */short) arr_14 [i_0] [i_1] [i_2 - 1] [i_2] [i_5 - 2] [i_1]);
                                var_21 = ((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_1] [i_2 - 2] [i_5] [i_6]);
                                arr_22 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_17 [i_5 - 1] [i_2 - 2] [i_0] [i_0] [(short)12])) > (arr_6 [i_5 - 3] [i_2 - 2] [i_2 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
