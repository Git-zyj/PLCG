/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_3 & var_3) - var_4)) >> var_10));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_12 -= (max(-109, 167));
        var_13 = (min((((0 ? 0 : -109))), ((((max(35022, var_0))) ? (var_9 * 0) : var_9))));
        var_14 = ((((((arr_2 [i_0]) ? -5863 : (((min((-127 - 1), 127))))))) ? ((((((1 ? 0 : 0))) || 1))) : var_6));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] [3] [i_1] = (~5863);
            var_15 = ((15821560301294343505 ? (arr_7 [i_1 + 4]) : 0));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = (-32767 - 1);
                            arr_18 [1] [1] [i_3] [i_4] [i_5] = (((-4336875396631227524 - 1) ? (arr_6 [i_2] [i_3]) : var_2));
                        }
                    }
                }
            }
        }
        arr_19 [i_1] = (min((((~(arr_16 [i_1 - 3] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1 - 3])))), (((arr_5 [i_1 + 1]) ? -var_2 : -var_7))));
        arr_20 [i_1] [i_1] = (((!var_3) ? ((min(1, (!1)))) : ((~(((arr_11 [9] [i_1] [1] [12]) ? var_1 : var_0))))));
    }
    #pragma endscop
}
