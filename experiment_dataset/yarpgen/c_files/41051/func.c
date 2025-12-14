/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41051
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((_Bool) (signed char)37)) ? ((+(-1438169861))) : ((-(((/* implicit */int) var_14))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((short) ((long long int) arr_2 [i_0 - 2]))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)122)) : (1800427670)));
            arr_10 [i_2] = ((/* implicit */unsigned int) (unsigned char)125);
            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_7 [(_Bool)1]))))) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (((((/* implicit */int) (unsigned char)79)) << (((((/* implicit */int) (unsigned char)87)) - (72)))))));
            arr_11 [i_2] [i_0] [i_2] = ((/* implicit */int) var_18);
            arr_12 [4U] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_0 - 1] [i_0 - 1] [i_2]);
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_24 -= ((/* implicit */long long int) var_1);
                    var_25 = ((/* implicit */int) (short)-24427);
                    arr_17 [i_4] [i_4] = ((/* implicit */signed char) min((((arr_15 [i_3] [i_3] [i_3 + 2] [i_3]) / (arr_15 [(signed char)4] [i_3] [i_3 + 2] [i_3]))), (((/* implicit */int) ((unsigned char) arr_15 [i_3] [i_3] [i_3 + 2] [i_3 + 2])))));
                    var_26 = ((/* implicit */signed char) ((unsigned int) arr_14 [i_0 + 1] [i_0 + 1]));
                    var_27 = ((/* implicit */int) min((9223372036854775807LL), (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)122)) != (((/* implicit */int) var_18)))), (var_5))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */short) arr_16 [i_5] [23U] [i_5 - 1] [i_5]);
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (((/* implicit */int) (unsigned char)4))))));
        var_28 -= ((/* implicit */int) ((signed char) arr_15 [i_5 - 1] [i_5] [i_5 - 1] [i_5]));
        arr_22 [i_5] = ((/* implicit */unsigned int) var_6);
        var_29 = ((/* implicit */unsigned char) var_4);
    }
}
