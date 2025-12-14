/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_3, ((max(var_2, var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((max(((min((arr_6 [i_0] [i_0] [15]), 1186700905))), ((var_2 ? 55778026799537715 : (arr_5 [13] [1] [i_0])))))) ? var_8 : (((arr_3 [i_0] [i_0]) << (((var_2 + 68) - 4))))));
                    arr_10 [17] [i_1] [11] [i_0] = var_5;
                    var_15 = 10244701571198566535;
                    var_16 = (min(var_16, ((max(((((max(var_7, (arr_6 [17] [i_1] [i_1]))) <= 216))), var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
