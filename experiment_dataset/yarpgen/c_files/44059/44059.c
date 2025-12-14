/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? -34 : 53));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((7583 + 15889796828483448852) ? 18446744073709551604 : (((9223372036854775807 ? 2432894196648220060 : 0))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((20682 ? 13576648641807774113 : 14146));
                    }
                    var_10 = var_6;
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_4] = -112486332432040673;
                    arr_17 [i_0] [i_0] [i_0] = var_3;
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (((arr_15 [i_0 - 1] [i_5 - 1] [i_5 + 1]) | ((15997228189505727936 ? 1 : 4))));

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_25 [4] [i_0] [i_0] = 5775815916470278867;
                        var_11 -= (arr_2 [i_6] [i_6] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_12 = (-9223372036854775807 - 1);
                        var_13 = (min(var_13, (arr_20 [i_5] [i_5] [i_1] [i_5])));
                    }
                    var_14 -= var_8;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_32 [i_0] [i_1] [i_0] = (((arr_26 [i_0 + 2] [i_0]) ? var_4 : var_3));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = -106;
                    var_15 = (((arr_9 [i_0] [i_0] [i_0 + 3] [i_0] [0]) ? var_3 : 32767));
                    arr_34 [i_0] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_16 = 1040920778;
    #pragma endscop
}
