/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((var_2 ? var_4 : var_10)), (1958 ^ var_11)))) % ((-4095302034449723714 ? (var_2 * var_4) : -4095302034449723738))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_11 [7] [i_3] [i_4] [i_3] = var_5;
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_2] = (arr_0 [i_2 + 1] [i_1 + 1]);
                                arr_13 [i_4] [i_4] [i_2] [i_2] [i_4 + 1] = arr_0 [i_3] [i_1];
                            }
                        }
                    }
                    var_17 = ((((min((arr_1 [i_0]), (arr_8 [i_1 - 2] [5] [5] [5])))) ? ((((~10049) ? var_6 : 6383))) : ((min(-2120986109255339767, var_14)))));
                }
            }
        }
    }
    var_18 = ((-(min(var_4, var_3))));
    var_19 &= var_15;
    #pragma endscop
}
