/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212541
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]);
        arr_4 [i_0] [i_0 + 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_19 ^= ((int) ((6513357709212389666LL) >> (((arr_1 [i_1] [19LL]) - (1100836587717068137LL)))));
        arr_8 [5U] [i_1 + 1] |= ((/* implicit */int) (short)12705);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] [i_1] = arr_9 [(unsigned short)4];
            var_20 = arr_1 [i_1 + 1] [i_2];
            arr_12 [i_1 + 1] [i_2] = ((/* implicit */signed char) arr_1 [i_1 - 1] [i_2]);
        }
        arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 + 1]))));
    }
    var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9516))))) : (((((/* implicit */_Bool) var_2)) ? (1943108304) : (((/* implicit */int) var_17)))))) & (((/* implicit */int) (unsigned short)35770))))));
}
