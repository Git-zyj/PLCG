/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = ((((((max(var_12, var_5)) << ((((var_1 ? var_0 : var_4)) - 4251285674))))) ? 18446744073709551612 : (var_0 - var_0)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] = (((var_14 & var_7) ? var_17 : ((var_2 >> (var_6 - 15105)))));
                        arr_12 [i_0] [i_1] [i_0] = var_1;
                        arr_13 [i_0] [i_0] [i_2] [i_3] = 18446744073709551615;
                        arr_14 [i_3] [i_1] |= var_6;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_18 [1] [i_0] [i_2] [1] [i_2] = (((((~(max(var_9, var_11))))) ? (var_4 - var_11) : var_2));
                        arr_19 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [1] = ((((var_6 >> (!var_15)))) <= 15);
                        arr_20 [1] [i_1] [1] [i_0] [i_1] = ((var_10 ^ ((min((var_16 || var_9), var_10)))));
                        arr_21 [i_0] = ((var_12 << (131071 - 131052)));
                    }
                }
            }
        }
    }
    var_18 = (((((var_9 ^ var_16) ? (var_14 ^ var_2) : (var_9 & var_2))) >> (var_0 + 98)));
    #pragma endscop
}
