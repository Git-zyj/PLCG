/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 - 3] = ((((1827406304262704476 ? -89147584 : 31314)) < (21 < 1335332211)));

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    arr_7 [i_0 + 2] [i_2] = var_9;
                    var_10 = (max(var_10, var_4));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_3 - 1] [i_2] [i_2] [i_0] = 39084;
                        var_11 = ((var_7 ? (arr_10 [i_2 + 1] [i_2 + 2] [i_2] [0] [i_2] [i_2 - 1]) : ((11156809753719184179 ? 0 : 63))));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = (var_9 & (arr_2 [i_0] [i_1] [i_2]));
                    }
                    var_12 = (max((~var_5), ((~((7289934319990367437 ? -62 : 15085873043450146282))))));
                }
            }
        }
    }
    var_13 = (((var_7 ? var_6 : var_8)));
    var_14 = var_2;
    var_15 = (min(11045130652996337828, var_4));
    var_16 = ((!((max((24 || var_3), var_1)))));
    #pragma endscop
}
