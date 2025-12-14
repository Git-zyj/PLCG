/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_17));
    var_21 = (max((((!((min(var_9, var_5)))))), var_13));
    var_22 ^= (min(((min(15, 17))), ((-var_8 * ((var_15 ? var_9 : 11431923927512399180))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 + 1] [i_1 + 1] [5] = ((((+((min((arr_4 [i_0] [i_2]), 169)))))) - (min(6798490122974621649, 94)));
                    arr_8 [i_1] [i_1] [i_1] = -109;
                }
            }
        }
    }
    var_23 *= -var_18;
    #pragma endscop
}
