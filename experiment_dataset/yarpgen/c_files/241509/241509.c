/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-65);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_2 + 3] = var_11;
                    arr_10 [i_1] [i_1] = ((~((536608768 ? 32735 : (((!(arr_0 [i_2]))))))));
                    var_20 = 32712;
                    arr_11 [i_2 + 1] [i_0] = var_13;
                }
            }
        }
    }
    var_21 = (((min(((var_18 ? 15 : var_18)), var_3)) >> var_16));
    var_22 = (min(var_22, ((4397645353438608652 ? 51 : 4040369766))));
    var_23 ^= (((((-((max(var_5, 88)))))) ? var_16 : (~-32738)));
    #pragma endscop
}
