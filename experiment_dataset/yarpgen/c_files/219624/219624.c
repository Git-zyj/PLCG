/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(1405149688, (!286519669)))) ? (1 != -1) : (((arr_0 [i_0]) ? 30424 : (arr_0 [i_0])))));
        var_13 = ((!((max(((((arr_1 [i_0]) == 4))), ((1839975851 ? (arr_1 [i_0]) : 1113369182)))))));
        var_14 = arr_1 [i_0];
        var_15 = -30311;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 ^= ((max(var_10, 30424)));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 = (min(255, (max(var_12, 0))));
                            var_18 = (var_10 ^ (min(1551018666, -1551018667)));
                        }
                        arr_18 [i_1] [i_1] [i_1] [16] [i_1] = (!-159);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 &= 1573949854;
                        var_20 = var_6;
                        var_21 = (((((var_6 + 2147483647) >> (195 - 175))) > 32758));
                    }
                    arr_21 [i_1] [i_1] [i_2 - 1] [i_3] = (!1704790667);
                }
            }
        }
        var_22 = (max((max(1911619420649390587, (((-32762 ? 8 : -62))))), (((2147483637 & (((arr_7 [i_1] [i_1] [i_1]) ^ var_5)))))));
        arr_22 [4] = 3196685830;
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_23 = (max((var_5 <= 3), (~64734)));

                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            arr_37 [i_10] [i_9] [7] [i_1] [i_1] [i_1] = (max((((15449 >> (((min(20323, -286519689)) + 286519706))))), var_1));
                            arr_38 [3] [3] [i_8] [19] [i_10] [19] [i_7] = 8104489934513185363;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_24 = (17267504032024004551 ^ var_4);
                            var_25 = -1;
                            var_26 ^= ((31753 ? var_11 : var_8));
                        }
                        var_27 = 8234976676880569351;
                        var_28 ^= 1;
                    }
                }
            }
        }
        arr_41 [i_1] |= ((((max(-191, (((arr_7 [1] [1] [i_1]) << (5118870216465805996 - 5118870216465805972)))))) && (arr_4 [i_1] [i_1])));
    }
    var_29 = (min(((-(min(17267504032024004541, var_0)))), var_1));
    #pragma endscop
}
