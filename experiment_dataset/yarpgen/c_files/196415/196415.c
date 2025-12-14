/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1020;
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 -= (((((17919326091869640582 ? -var_12 : ((73 ? 62752 : var_7))))) ? ((((-32747 && 0) ? (((!(arr_4 [i_0] [i_0 - 2])))) : (!1020)))) : ((~(min(0, 3463396658))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [16] [i_4] [i_1] [i_4] [i_4] &= 2596321200;
                                arr_14 [i_4] [i_2] [i_4] [i_4] [i_1] [i_0 - 3] = (min(1047, 1310125093));
                                arr_15 [i_0] [i_1] [i_4] [i_2] [i_4] [i_1] [i_0] = var_10;
                                var_17 = (((min(2717912450, 62752))) ? (((((arr_10 [i_0] [i_4] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1]) != 3)) ? (min(1698646095, var_7)) : (arr_10 [i_0] [i_4] [i_0 - 3] [i_1] [i_2 + 2] [i_2 + 1]))) : ((max((((arr_1 [21]) ? 3 : var_9)), (var_6 || var_10)))));
                            }
                        }
                    }
                    var_18 *= (max(1698646115, (max((0 ^ var_6), (~var_0)))));
                    arr_16 [i_2] [i_1] [i_1] [i_0 - 3] &= var_0;
                    var_19 -= ((((((((65535 ? (arr_12 [i_0 - 4] [i_0 - 4] [i_2] [i_2] [i_2] [i_1] [i_0 - 3]) : 1139762366))) ? ((-29134 ? var_12 : (arr_5 [i_0 + 1] [i_0 + 1]))) : (arr_12 [i_2 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 4] [13] [13])))) ? 2596321200 : (((((67 ? 1 : 58538))) ^ 4294967295))));
                }
            }
        }
    }
    var_20 = ((((((1 && 1701341257) ? ((24584 ? 41316 : 19)) : var_6))) ? ((((max(6, 255))) ? 18446744073709551609 : (~1))) : (((((~21) || -0))))));
    #pragma endscop
}
