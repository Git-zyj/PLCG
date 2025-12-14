/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205769
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [(signed char)15]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0 + 2] |= ((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)0]);
            arr_8 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)116)), (((((/* implicit */_Bool) -5173467173034069942LL)) ? (var_14) : (((/* implicit */int) (unsigned char)8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) / (arr_6 [10] [i_1 - 1])))) : (7014612919081715281ULL)));
            var_20 = ((/* implicit */unsigned char) var_18);
        }
    }
    for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2 + 2] |= ((int) ((signed char) arr_1 [i_2] [i_2]));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)110))));
    }
    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13010)) ? ((+(var_14))) : ((-(arr_5 [i_3 + 2] [i_3 + 1] [i_3 + 1]))))))));
        var_22 = (+(((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (((/* implicit */long long int) var_2)) : (9223372036854775807LL))));
    }
    var_23 = ((/* implicit */unsigned char) 16132797824006690540ULL);
}
