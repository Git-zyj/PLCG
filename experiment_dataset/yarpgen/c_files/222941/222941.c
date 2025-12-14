/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_6;
    var_14 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 *= ((((((511 + 8580172574720361821) ? (((var_12 ? var_8 : var_11))) : ((var_8 ? var_5 : var_8))))) ? (var_9 % var_11) : (var_6 - var_4)));
                arr_5 [i_0] = ((var_8 ? (((var_3 ? var_1 : var_12))) : var_12));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_16 = (max(var_16, (min((((var_2 << (var_5 - 6059871571174494779)))), var_4))));
                var_17 += ((-(((max(var_5, var_3))))));
                var_18 = var_5;
                var_19 = (max(((511 ? var_4 : var_7)), ((-var_6 ? (((var_4 ? var_5 : var_8))) : (var_9 * var_3)))));
            }
        }
    }
    #pragma endscop
}
