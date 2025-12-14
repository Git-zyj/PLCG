/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24674
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_19 = (((_Bool)1) ? (arr_0 [i_0] [i_0]) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_0] [i_1]))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_9))))));
            var_20 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_2 [i_0] [i_1]))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 &= (~(((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_2] [8ULL])) ? (arr_9 [(_Bool)1] [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                arr_11 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [(signed char)0] [i_2] [6ULL])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */_Bool) ((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_2] [i_2])))) : (((arr_13 [i_0] [i_2 - 1] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                arr_14 [i_4] [i_2] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) & (((/* implicit */int) (_Bool)0))))) ? (arr_7 [i_4] [i_2] [i_0]) : (arr_8 [i_4]))), (arr_8 [i_2 - 1]));
                var_24 += min(((~(arr_12 [(_Bool)1] [(_Bool)1]))), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_0])));
            }
            var_25 = var_15;
            var_26 = min(((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_9 [(_Bool)1] [i_2] [i_2]))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [(_Bool)1]))))), (((((_Bool) (_Bool)1)) && (((((/* implicit */_Bool) var_13)) && ((_Bool)1))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_9))));
                            var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-68))));
                            var_29 = ((/* implicit */_Bool) min(((+(((arr_22 [i_0] [i_2] [i_5] [(_Bool)1] [i_5] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(signed char)9] [i_5]))) : (var_8))))), (((unsigned long long int) (+(arr_9 [i_0] [i_2 - 1] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [2ULL] [i_2] [i_2] [i_2 - 1] [i_0] [9ULL] [i_0]))))) ? ((~(var_12))) : (arr_18 [i_0] [8ULL] [i_2]))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            arr_26 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_8]) ? (((/* implicit */int) arr_4 [i_8 - 1] [i_8 + 1])) : (((arr_23 [i_0] [i_8]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_8 + 2]))))));
            arr_27 [i_8] [i_8] = (_Bool)1;
            arr_28 [i_8] = arr_17 [i_0];
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((var_5) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_23 [i_0] [(_Bool)1])))) & (((/* implicit */int) (_Bool)0)))))));
        }
        arr_29 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0] [(signed char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_24 [8ULL] [8ULL] [8ULL]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (0ULL))))) ^ ((-(arr_9 [i_0] [i_0] [2ULL])))));
    }
    var_32 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-68)), (16742703546344005857ULL)));
    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) (signed char)68)) ? (1447337804004265431ULL) : (var_12)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))))) : (3783212730055299032ULL))))));
}
