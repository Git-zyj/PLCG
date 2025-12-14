/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!62237);
    var_20 = max(((~((32511 ? var_13 : 9210594113681550091)))), var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = ((var_15 ? ((((!(arr_2 [i_0 - 1] [i_1 + 1] [i_1 - 1]))))) : (max(683683522, 9210594113681550091))));
                arr_6 [i_0 - 2] [i_0 - 2] = 1970;
            }
        }
    }
    var_21 = ((((~var_2) != var_11)));
    var_22 ^= var_13;
    #pragma endscop
}
