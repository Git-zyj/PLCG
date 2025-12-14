/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((((15407924131058379802 ? 719690346 : 15257388507123978162))) || ((min(var_8, var_10))))))) != (~15407924131058379802)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (3038819942651171830 > 15407924131058379802);
        var_15 = var_6;
        arr_3 [1] [i_0] = ((1 || (((2763159197113828359 ? 67 : -7257796187491438863)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_0 + 3] [i_0] [i_0] = (min((min((((-(arr_6 [i_0] [i_1] [9])))), ((-3002431320467144863 ? var_2 : var_8)))), ((max(((4746718440024374546 ? 1 : var_9)), -4294967295)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (!18446744073709551613);
                                var_17 = (min(var_17, var_13));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_18 = (max((((var_8 >= (arr_5 [i_0 + 1])))), ((~(arr_12 [i_0 - 1] [i_0 + 3])))));
                        arr_17 [i_1] [i_1] [i_0] [i_1 + 1] [i_1] = 9285104385081770206;
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        arr_20 [i_6 - 3] = var_0;
        var_19 *= (((3146406280929392607 & (arr_18 [i_6 - 2]))));
        arr_21 [i_6 - 3] = (((((~(max(15257388507123978162, var_8))))) ? (arr_1 [i_6 + 2]) : -1));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_25 [i_7] = (!(((var_7 ? ((1975088155 ? var_11 : 18446744073709551615)) : (((var_8 << (arr_13 [i_7]))))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_20 = (min(4050668361869477444, 3038819942651171813));
                        var_21 = ((max(16710642197547394226, 4294967295)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_22 = (((~-7257796187491438863) ? -669743910 : ((((arr_4 [i_7] [i_11]) == var_2)))));
            arr_38 [i_7] [i_7] = ((arr_1 [i_7]) ? 2125688780 : (arr_10 [i_11] [i_11] [i_11] [i_7] [i_7]));
        }
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 20;i_14 += 1)
                {
                    {
                        var_23 -= 2845323892514521015;
                        var_24 = var_1;
                        var_25 = (3932714016 > 2049997815578705250);
                    }
                }
            }
        }
        arr_48 [i_7] = ((1 >> (!123)));
    }
    #pragma endscop
}
