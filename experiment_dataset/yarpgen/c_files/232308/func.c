/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232308
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
    var_15 = ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) && (((/* implicit */_Bool) var_12))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) 402571817));
                        arr_12 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0]))));
                        arr_13 [i_2] [(short)12] [(short)12] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (var_8)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 402571814)) ? (8934608034319174280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0 + 1])))));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2974838163576312755LL)) ? (((/* implicit */int) arr_7 [i_1] [i_0 - 2] [(unsigned char)6] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_0 - 1] [i_0] [i_1]))));
                        arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((680514527) / (((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_0] [8ULL] [i_0 + 3] [i_0 - 2]))))) % (var_14)));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (unsigned char)239);
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_22 [(signed char)23] [i_5] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_14)))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [(signed char)22] [i_5] [i_5] [8ULL]))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_6] [i_5 + 1])) : (((/* implicit */int) (signed char)59))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (signed char)127))));
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), ((unsigned char)1)));
            var_22 = ((/* implicit */signed char) arr_19 [1ULL]);
            arr_29 [4ULL] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -402571814)) || (((/* implicit */_Bool) arr_10 [i_5 + 3]))));
        }
    }
    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = arr_0 [i_8 - 1];
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 402571814)) && (((/* implicit */_Bool) (unsigned char)20))));
    }
}
