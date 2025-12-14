/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210973
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
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [(_Bool)1] [3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_7))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_15 [6LL] [i_1] [i_1] [6U] [i_3] [6U] |= (+(arr_7 [i_0] [i_2 + 1] [6U]));
                        arr_16 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((long long int) (-(-5498907233627690171LL))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            arr_19 [i_1 - 1] [i_1] [1LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (744531812U)))) ? (((arr_9 [i_1]) ? (5498907233627690171LL) : (((/* implicit */long long int) var_5)))) : (arr_7 [i_1] [i_4 - 1] [i_1])));
                            arr_20 [i_1] [i_1 - 1] [i_1] [i_3] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2325466895U)) ? (arr_3 [i_4]) : (var_9)))) ? (((/* implicit */int) arr_14 [7U] [2] [i_1] [i_1] [i_1 - 1] [2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [3LL] [i_4])) || (((/* implicit */_Bool) 5498185271263152744LL)))))));
                            arr_21 [i_0] [i_1] [3U] [i_2] [i_3] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [6U] [6U] [7U])) ? (arr_2 [(_Bool)1]) : (arr_17 [i_0] [6LL] [6LL] [i_0] [i_0] [i_0] [i_1])))));
                            arr_22 [i_4] |= ((/* implicit */int) arr_0 [0]);
                            arr_23 [i_4] = ((/* implicit */unsigned int) ((int) var_8));
                        }
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_27 [6U] [i_1] [i_2] [i_1] [6U] = ((/* implicit */int) ((signed char) 8098251662090629137LL));
                            arr_28 [i_5] [i_1] [6U] [i_2 + 1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (var_9)));
                            arr_29 [i_5] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_24 [5] [i_2]) : (((/* implicit */long long int) 1172383438)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_33 [7LL] [i_1] [i_2] [i_1] [i_0] = 0U;
                            arr_34 [6U] [6U] = ((/* implicit */unsigned int) (signed char)-105);
                        }
                        for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            arr_37 [4LL] [4LL] [i_0] [0LL] [i_2] [i_1] [i_7 - 2] = ((/* implicit */_Bool) (+(8U)));
                            arr_38 [7] [7] [i_2 + 1] [i_1] [i_2] [9LL] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)15))));
                            arr_39 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [4U] [i_2] [i_2 - 1] [i_3] [4U] [i_1])) ? (arr_13 [1LL] [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)4] [i_3] [i_7 - 3]))))) ? (((759739808U) * (((/* implicit */unsigned int) var_3)))) : (((unsigned int) var_3))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        arr_42 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_30 [i_1 - 1]))))) ? (-8098251662090629123LL) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                        arr_43 [i_0] [6LL] [i_8] [i_1] [2LL] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1293322401))));
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) arr_0 [i_1 - 1]);
                        arr_48 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_30 [i_0])), ((+(67108863U)))));
                    }
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) ((long long int) (signed char)127));
}
