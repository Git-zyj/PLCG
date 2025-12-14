/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = var_7;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_15 += (arr_7 [i_1]);
                    arr_8 [i_0] [i_1] [2] = var_6;
                    var_16 = ((!((((15333220232228640345 ? 47873 : (arr_6 [1] [1]))) > var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 -= (((((18446744073709551592 ? 11 : (arr_6 [i_1 - 1] [i_3 - 1])))) ? (((arr_6 [i_1 - 3] [i_3 + 3]) << var_2)) : ((~(arr_6 [i_1 - 1] [i_3 + 2])))));
                                var_18 = (min(var_18, ((((arr_7 [i_0]) >= -11)))));
                                var_19 ^= var_11;
                            }
                        }
                    }
                    var_20 = ((-(arr_4 [i_0])));
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_5] [i_0] [i_6] = ((4210843820002497333 ? (arr_0 [i_0] [i_0]) : (((arr_10 [i_5]) ? 65535 : 61))));
                            arr_18 [i_6] [i_6] [i_5 - 2] [i_5] = -1;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((var_7 ? var_5 : var_6)) + var_6));
    var_22 = (max(22, 69));
    var_23 = 47873;
    #pragma endscop
}
