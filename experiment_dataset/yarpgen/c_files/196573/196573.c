/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 &= (((((((max(0, var_15))) ? (arr_2 [i_1]) : var_4))) ? ((((var_6 || (((~(arr_2 [i_2])))))))) : (min(((var_13 ? var_10 : (arr_6 [i_2] [i_0]))), (var_11 <= 183)))));
                            var_19 += (~var_11);
                            arr_12 [i_3 - 1] [i_0] [i_1] [i_0] [1] = 7921401119337330089;
                        }
                    }
                }
                arr_13 [i_0] [i_0 - 1] = (arr_7 [i_0]);
                var_20 = (max(var_20, ((min(-1683908365724857118, 4294967295)))));
                var_21 = (max(var_21, ((((arr_7 [i_1]) ? (min(-var_11, 1897341787)) : (1 & 4294967295))))));
                var_22 = ((10827 ? (arr_10 [i_0] [i_0] [i_0]) : (arr_7 [i_0])));
            }
        }
    }
    var_23 = ((-(((max(var_7, 56970)) % 2397625508))));
    var_24 &= var_13;
    var_25 &= 12;
    var_26 = (min(var_26, ((((-2027184858273054286 / 171) && var_1)))));
    #pragma endscop
}
