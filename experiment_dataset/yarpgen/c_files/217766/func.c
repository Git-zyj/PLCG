/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217766
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((6658454284005657704ULL) - (max((((/* implicit */unsigned long long int) var_12)), (arr_2 [i_2]))))) != (12200045819908003364ULL)));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_2] [i_2] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) != (arr_1 [i_0 + 1]))))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2]), (1116892707587883008ULL)))) || (((((/* implicit */_Bool) -232687774)) && (arr_7 [i_2] [i_1])))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), ((-(max((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_3]))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 2] [5ULL]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
                        var_17 = ((/* implicit */_Bool) (~(-232687774)));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0] [7ULL] [i_2] [i_2])), (arr_6 [i_0] [(_Bool)1] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (arr_5 [7ULL]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 1])) ? (arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (-1065339743580219407LL))), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0]) : (arr_0 [i_5])))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(10205971295735600769ULL)))) ? (((/* implicit */int) ((_Bool) (unsigned char)229))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) || (((/* implicit */_Bool) arr_5 [i_0 + 1]))))))))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_15 [i_6] [i_0] [3LL] [i_2] [(_Bool)1] [i_0]))))));
                        arr_19 [i_0 + 1] [(short)0] [(short)0] [i_6] [3LL] [i_0] = ((/* implicit */int) (-(0ULL)));
                        arr_20 [i_2] = arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6];
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_10);
    var_22 = ((/* implicit */long long int) ((1919982210568378717ULL) / (((/* implicit */unsigned long long int) var_2))));
}
