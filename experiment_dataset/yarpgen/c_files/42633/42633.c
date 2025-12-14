/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = ((var_0 | ((((((var_7 << (4912 - 4892)))) > (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [6] [18] [i_2 - 2] [i_3] [5] [15] |= (arr_0 [i_2] [i_2 + 1]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_14 = ((var_0 ? 5462273732106288057 : (arr_12 [i_0 - 2] [i_2 + 1])));
                            arr_13 [12] [19] [i_2 + 1] [19] [22] = 13415789282180268862;
                            arr_14 [5] [15] [i_2 - 2] [20] [8] [10] = (arr_12 [i_0 + 1] [i_2 - 2]);
                        }
                        arr_15 [18] [i_2 + 1] [3] [i_0] = (max(8249408170955497659, (((~(arr_10 [i_0] [8] [8] [i_0 + 1] [i_2 - 1]))))));
                        arr_16 [1] = (max(30677, (arr_11 [18] [16] [21] [18])));
                        var_15 = ((((((0 ? 10 : 8249408170955497659)))) ? (-1 + 1) : (arr_10 [20] [21] [i_2 + 1] [17] [21])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_16 &= 16056764235915705271;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_24 [1] [i_6] [i_5] = var_1;
                    arr_25 [15] = -1379037024884617721;
                    var_17 = 9223372036854775807;
                }
            }
        }
    }
    var_18 = var_11;

    /* vectorizable */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_19 = (((!10) > ((2 ? 4 : 691024365))));
        var_20 = (min(var_20, ((((~1971595720) * -2389979837793846356)))));
        var_21 |= (~11758);
    }
    var_22 = (((((var_12 ^ var_2) ? (~-84) : var_11))) ? (!-1) : (max(245, -5758234980187585855)));
    #pragma endscop
}
