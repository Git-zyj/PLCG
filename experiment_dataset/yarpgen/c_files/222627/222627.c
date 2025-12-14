/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(var_15, 58764))) % var_16))) ? (((var_10 ? 1071644672 : var_13))) : (max(((min(6772, 1))), (min(var_9, 58764))))));
    var_20 = 4999601128031171353;
    var_21 = min(0, 916753042);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_3 - 1] [i_1] [i_1] [i_0] = (((((~(((arr_4 [i_0] [i_1] [i_2]) % 1))))) != 1010703715));
                        arr_13 [i_1] [i_2] [7] [i_1] = (((max(var_11, (((arr_1 [i_0] [i_0 + 1]) ? var_13 : (arr_5 [i_1] [i_1] [i_0 - 1]))))) != ((((((((!(arr_8 [i_0 - 1] [i_0 - 1]))))) != (~3284263580)))))));
                        var_22 = ((((((((-4999601128031171344 ? 1879052994673564858 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))) ? (arr_4 [15] [i_1] [i_2]) : 3486336797110437639))) ? var_15 : (!var_5)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] = 3684810175;

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_23 = 0;
            arr_20 [i_4] [i_4] = (((0 % (-5944426564157291472 - -99))));
            arr_21 [i_5] [i_4] [i_4] = (!var_16);
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_25 [i_4] [5] [i_4] = ((max((arr_24 [i_4] [i_4] [i_4]), (((var_8 >> (5944426564157291479 - 5944426564157291463)))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_32 [i_6] [i_6] [i_4] [i_6] = ((((((((max((arr_28 [i_4] [i_7] [i_6] [i_4]), var_11))) > (arr_28 [i_4] [i_8 + 2] [i_4] [i_4]))))) ^ (min(1341970944, (arr_22 [i_8 + 1])))));
                        arr_33 [i_4] [i_4] [i_7] = (min((((arr_28 [i_4] [i_8 + 1] [i_8] [i_8 + 1]) ? -0 : var_5)), (((((min(32761, var_2))) == 10)))));
                        arr_34 [i_4] [i_6] [8] [i_8 + 2] = -4999601128031171354;
                        arr_35 [i_7] [i_4] [1] = (min(var_12, ((((993493062969814196 / (arr_17 [i_7] [i_6]))) >> ((((~(arr_17 [i_8 + 3] [i_8 + 3]))) + 199))))));
                    }
                }
            }
            arr_36 [i_4] [i_6] = (((((((-99 ? 3967222636 : var_13))) ? 2271876787 : (arr_19 [i_4] [i_4] [i_6]))) - (((~(max(-3212769378349113560, var_1)))))));
            var_24 ^= var_0;
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
    {
        arr_39 [i_9] = (arr_17 [i_9 + 1] [i_9 + 1]);
        var_25 *= (0 && var_6);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] = ((1 ? (arr_14 [i_10 + 1] [1]) : (arr_40 [i_10])));
        arr_45 [i_10 + 1] = ((+(((arr_14 [14] [14]) + var_14))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                {
                    arr_50 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11] = 310198413;
                    arr_51 [i_10] = ((-((((arr_48 [i_10] [i_10] [i_11 + 1] [i_12]) >= 15768)))));
                }
            }
        }
        var_26 ^= var_13;
    }
    var_27 = var_15;
    #pragma endscop
}
