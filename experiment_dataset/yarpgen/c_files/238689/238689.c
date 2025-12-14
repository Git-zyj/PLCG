/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 += ((((36 ? (min(var_7, (arr_4 [i_0] [i_1]))) : 243)) - ((((arr_0 [i_1]) & var_10)))));
                arr_5 [i_1] [0] [i_0] = ((~(((arr_2 [i_0]) / -6121234292836526105))));
            }
        }
    }
    var_14 = (max(((((((var_0 ? var_3 : var_11))) ? var_0 : (var_2 != var_6)))), (min((var_7 | var_11), (~var_7)))));
    var_15 = (max(((var_5 ? (var_9 <= var_5) : (var_4 > var_7))), 1011923931));
    #pragma endscop
}
