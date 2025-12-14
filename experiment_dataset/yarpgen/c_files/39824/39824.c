/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((((var_2 ? 16919 : (arr_0 [i_0])))), (((!(~4611686017890516992))))));
        var_11 += var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((var_7 ? (min((arr_1 [i_0]), (arr_1 [i_1]))) : (min((((arr_4 [i_0]) ? (arr_3 [i_1]) : var_9)), (arr_4 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] &= (!var_10);
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] &= (+(min((arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 3] [i_4 + 1]), (arr_4 [i_3 - 2]))));
                            }
                        }
                    }
                    var_12 = (min((min(((var_3 ? (arr_14 [i_2] [i_1] [i_0]) : var_6)), (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? 12996274016720635173 : -4429757968861287639)))), (~18446744073709551586)));
                }
            }
        }
        var_13 ^= ((!1998973781) ? (min((arr_7 [i_0]), (arr_7 [i_0]))) : var_7);
        arr_17 [i_0] = ((((min(var_4, (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? -1126345343 : var_10))))) ? (min((((arr_14 [i_0] [i_0] [i_0]) ? var_1 : 13868974156885084761)), var_3)) : ((min((max(var_8, (arr_8 [i_0] [i_0]))), (arr_8 [i_0] [i_0]))))));
    }
    var_14 *= (~-1998973790);
    var_15 = (var_2 ? var_9 : var_4);
    var_16 = ((min(((var_5 ? var_7 : var_10)), (((var_10 ? 32767 : var_9))))));
    #pragma endscop
}
