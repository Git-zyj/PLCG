/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42789
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
    var_14 *= ((/* implicit */unsigned int) (signed char)120);
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((arr_0 [i_0 + 4]) & (arr_0 [i_0 + 4]));
        arr_2 [i_0 + 4] = ((/* implicit */short) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_1 [i_0 + 4])) - (29176)))));
        var_17 = ((/* implicit */short) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) 549755813880LL))))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3328897236U))));
        var_20 *= ((/* implicit */unsigned long long int) ((long long int) ((signed char) ((((/* implicit */int) (signed char)-80)) != (((/* implicit */int) arr_1 [i_1]))))));
        var_21 ^= min((max((((/* implicit */unsigned long long int) var_6)), (var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 3]))) ^ (274341036032ULL))));
    }
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((var_6), (((/* implicit */long long int) var_10)))))) ? ((-(6ULL))) : (((unsigned long long int) 2995807056U))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_23 = ((/* implicit */signed char) ((arr_7 [i_2]) / (((/* implicit */unsigned long long int) var_7))));
            var_24 += ((((/* implicit */_Bool) ((arr_5 [i_2 + 3]) & (4611686018158952448ULL)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (966070059U)))) : (((/* implicit */unsigned long long int) max((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))));
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */_Bool) 4611686018423193600ULL)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [6U])) : (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_4 [i_2]))))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_13 [i_2 + 3] [i_4] = ((/* implicit */unsigned char) (~(arr_5 [i_2 + 2])));
            arr_14 [i_4] = ((/* implicit */short) ((unsigned long long int) (-(arr_5 [i_2 - 1]))));
            arr_15 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) 67108800U);
        }
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_1 [15U]))));
        var_27 &= ((/* implicit */unsigned long long int) (unsigned char)102);
        arr_20 [(short)2] &= ((/* implicit */unsigned int) arr_19 [i_5]);
    }
}
