/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191532
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (-(var_19)));
        arr_4 [i_0] = ((/* implicit */long long int) (((~(584240684))) < (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = (~(((/* implicit */int) (short)32767)));
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_1])))) & ((~(((/* implicit */int) arr_7 [i_1]))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) || ((!(((/* implicit */_Bool) (unsigned char)192))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        arr_16 [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) 7921553485959798849ULL)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_3]))));
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(signed char)5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_5))));
        arr_18 [i_3] = ((/* implicit */long long int) arr_15 [i_3]);
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((short) (short)32767)))));
}
