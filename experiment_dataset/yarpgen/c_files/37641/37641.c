/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-var_5 | (((var_7 ? -31185 : var_9)))))) ? var_1 : (var_7 * var_3)));
    var_11 = ((1 ? (min(4019268044751674888, (((var_4 ? var_7 : var_4))))) : ((((((var_5 ? var_4 : var_7))) ? -1 : ((18446744073709551607 ? 45 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (max(1, 1));
                arr_6 [i_0] = 1;
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
