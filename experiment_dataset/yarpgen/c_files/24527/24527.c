/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = 15345;
    var_22 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((max(127, var_4))) ? (var_14 | -739772924) : (arr_0 [i_0]))) << (((((arr_4 [i_0] [i_0] [i_1]) ? var_12 : (arr_4 [i_0 + 2] [i_0] [i_1]))) + 5089202956325850660)));
                var_23 ^= ((-var_3 ? 787803068 : -var_14));
                arr_6 [i_0] [i_1] = ((((max(var_19, -63))) ? ((((((-(arr_2 [i_0] [i_0])))) ? var_13 : (((arr_4 [i_0] [i_0] [i_0]) + var_18))))) : (arr_3 [i_0] [i_1] [i_0])));
                var_24 = (min(var_24, 8683999362905194883));
                var_25 += (((((arr_2 [1] [i_0 - 1]) ? ((25939 ? var_7 : 3703890152)) : var_0)) > 9108351805795838497));
            }
        }
    }
    #pragma endscop
}
