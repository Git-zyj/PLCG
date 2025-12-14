/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (max(var_19, ((((var_4 ? var_3 : ((var_6 ? var_13 : var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_12;
                var_20 = var_0;
                arr_8 [i_1] |= ((-(((arr_6 [i_0]) ? ((65101 ? -4418942088801319783 : var_12)) : (99 >= -1962299502)))));
            }
        }
    }
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_22 *= (((~14221345152627390584) ? (max((arr_16 [i_2] [i_2] [i_2]), (1 | 0))) : var_2));
                var_23 = (min(var_23, var_17));
            }
        }
    }
    #pragma endscop
}
