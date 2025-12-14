/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((((((0 || 56) ? (((var_14 ? var_2 : var_9))) : var_15))) ? var_16 : var_5));
                    var_18 = ((((var_15 <= (9 / -56))) ? (((((((var_3 ? var_13 : var_9))) && (((var_7 ? var_11 : var_14))))))) : (((((-56 ? 13453956503531797803 : 13453956503531797803))) ? (((var_0 ? var_6 : var_4))) : var_1))));
                }
            }
        }
    }
    var_19 = (((((((var_13 ? var_16 : var_12))) ? 648033240 : var_0))) ? (((56 != -56) ? (var_13 < var_9) : (var_16 == var_11))) : var_7);
    #pragma endscop
}
