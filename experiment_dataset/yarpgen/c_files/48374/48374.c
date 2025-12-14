/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 ^= ((((arr_1 [i_0 - 1]) ? (arr_0 [12]) : (arr_0 [8]))));
        var_15 = (min(12375886441398823690, 1847065034769207109));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_6 [i_0] [10] [17] = 16599679038940344506;

                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_0] = (((arr_7 [6] [i_1] [i_2] [i_3] [i_3]) > 3400087326021526723));
                    var_16 = (arr_3 [i_0] [i_0]);
                    var_17 = (max(var_17, (((-434548989 ? (arr_5 [4] [14] [i_3 + 1]) : (arr_5 [i_3] [20] [i_3 + 3]))))));
                    var_18 = (min(var_18, ((((arr_4 [i_1 - 1] [i_2] [i_3 + 1]) * (arr_4 [i_1 - 1] [i_1] [i_3 + 3]))))));
                }
                arr_12 [i_2] [i_0] [1] = 4250166887655984010;

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_1] [i_2] [2] [i_4] = (arr_0 [i_0]);
                    arr_16 [i_0] [i_1] [i_2] [i_4] [i_0] = (arr_4 [i_1] [i_2] [i_4]);
                }
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    var_19 += (~(arr_3 [i_2] [10]));
                    arr_19 [i_0] [9] = -var_2;
                    arr_20 [8] [21] [i_0] = var_1;
                    arr_21 [i_0] [6] [i_1] [i_0] [i_5] = var_0;
                    arr_22 [i_0] [14] [i_1] [i_0] = ((15009793388244943432 ? 3400087326021526723 : -969206637));
                }
                var_20 = (max(var_20, 15046656747688024893));
            }
            var_21 = var_11;
            arr_23 [i_0 - 1] [23] [i_0] = (((arr_14 [i_1] [i_1 - 1] [0] [i_1] [i_1 - 1] [18]) || ((var_6 || (arr_5 [7] [i_0] [i_0])))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_22 = (arr_14 [0] [i_0] [i_0] [7] [i_6] [i_6]);
            var_23 = (arr_4 [i_0] [i_0] [19]);
            var_24 ^= (-17120 % var_9);
            var_25 ^= (max((((arr_27 [i_0] [i_0 + 1] [i_0 - 1]) + 14196577186053567606)), (((arr_27 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_27 [i_0] [i_0 + 1] [i_0 + 1])))));
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            arr_31 [i_0] = (((((arr_25 [i_0 - 1] [i_7 + 1] [i_7]) ? var_3 : (arr_29 [5] [6]))) + (arr_2 [i_7 - 1] [i_7] [i_7])));
            arr_32 [i_0] [i_0] = ((((3098109200 % (arr_18 [i_7]))) & ((min((min((arr_18 [7]), 1394770521)), (min((arr_18 [i_7]), -14526)))))));
            arr_33 [i_7] [i_0] = (max(((6832585035856342600 + (((var_9 ? 9659 : (arr_18 [9])))))), (arr_4 [i_7] [5] [i_0])));
            var_26 = ((((arr_5 [i_7] [i_0] [i_7]) ? (var_9 > 1394770527) : (arr_18 [i_0]))));
        }
        var_27 += ((((((arr_26 [i_0 + 1] [i_0 - 1] [i_0 + 1]) != ((((!(arr_7 [i_0] [10] [10] [0] [0])))))))) >= var_4));
        arr_34 [i_0] = (min(((-(min(var_10, (arr_5 [i_0] [i_0] [1]))))), (3140922213 != 14525)));
    }
    var_28 = (((2887 >= 4538503999249044027) * var_13));
    var_29 = var_10;
    var_30 = min(var_1, var_11);
    #pragma endscop
}
