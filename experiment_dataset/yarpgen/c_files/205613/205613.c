/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (+-8654);
    var_12 = (max(var_12, ((((((max(-8654, 18446744073709551615))) ? ((var_10 ? var_6 : var_0)) : (((var_9 ? var_4 : var_2)))))))));
    var_13 = (((((var_6 ? (max(8653, -6839309759254324135)) : (((max(var_5, var_5))))))) ? var_3 : var_9));
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((var_3 > (arr_2 [1] [i_1])))) > ((min(8653, 1)))));
                arr_6 [17] [i_1] = var_7;
            }
        }
    }
    #pragma endscop
}
