/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_8 - (min(((-18 ? 536870784 : var_2)), var_5)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = ((max(-14, 0)));
        var_21 = 0;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 = ((~((max((arr_5 [i_1]), (arr_5 [i_1]))))));
        var_23 = 9223372036854775807;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_24 = (min((min((-9223372036854775807 - 1), 88)), (((max((arr_7 [14]), 18)) ^ (var_4 >= var_4)))));
        var_25 = -31123;
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_26 = (((max(((~(arr_8 [i_3]))), (!-38))) >> (((min(0, (((var_1 ? -23249 : var_6))))) + 23276))));
        var_27 = ((13 ? 706363548107189678 : 3));
        arr_11 [i_3] [i_3] = ((((((9223372036854775792 << (129 - 129))) & (min(-4, -7)))) << (30064771072 - 30064771072)));

        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_4] [i_3] = ((-(((min(128, 5302016393173285306)) - (arr_8 [i_3])))));
            var_28 = (arr_9 [i_4]);
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_29 = var_13;
                arr_22 [i_3] [i_6] = (max((arr_5 [i_5]), (min(-13271, -18))));
            }
            var_30 = ((max((min((arr_2 [i_3] [i_5 - 1]), var_9)), var_18)));
            var_31 = ((arr_20 [i_3] [i_5 + 2]) / (((var_6 ? 2305772640469516288 : 18))));
            arr_23 [i_3] [i_3] [i_3] = (arr_4 [i_3]);
        }
    }

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_32 = (max((((!((max(var_10, (arr_16 [5] [i_7] [i_7]))))))), (max((arr_2 [4] [i_7]), (arr_2 [i_7] [i_7])))));
        arr_26 [i_7] [i_7] = (min(126, ((12954004262074815874 ? -80 : 2298))));
        arr_27 [1] = -1028454621;
        var_33 = (((3 ? var_16 : (arr_17 [i_7] [i_7] [i_7]))) / 38);
        var_34 = 46;
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = -127;
        arr_33 [i_8] = (arr_31 [i_8]);
        arr_34 [i_8] = ((+(((8070450532247928832 + var_15) ? var_17 : -var_4))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = ((var_0 <= (arr_21 [i_9 + 2] [i_9] [i_9 - 2] [i_9])));
        var_35 = (~(arr_36 [i_9 + 2] [i_9 + 2]));
        var_36 = (!274877906880);
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_37 = (arr_20 [i_11 + 1] [i_10 - 2]);
                        arr_47 [i_9 + 4] = 1347796050;
                        var_38 = ((var_4 >> (((arr_8 [i_9 + 3]) - 178))));
                    }
                }
            }
        }
        arr_48 [i_9] = -9223372036854775791;
    }
    for (int i_13 = 1; i_13 < 23;i_13 += 1)
    {
        arr_52 [i_13] = var_2;
        arr_53 [i_13] [i_13] = 67;

        for (int i_14 = 3; i_14 < 21;i_14 += 1)
        {
            arr_56 [i_14] [i_13] [i_13] = (arr_55 [i_13]);
            arr_57 [i_13] [i_13] = (((((((min(124, var_11))) % ((((arr_49 [20] [i_13]) > (arr_50 [i_13 + 1]))))))) ? 121 : ((((arr_51 [i_13 + 1] [i_13 + 1]) && (arr_51 [i_13 - 1] [i_13 - 1]))))));
        }
        for (int i_15 = 4; i_15 < 22;i_15 += 1)
        {
            arr_60 [i_13] [i_15] [i_13] = ((~((min(132, 105)))));
            var_39 = (8070450532247928859 && -2298);
        }
        arr_61 [i_13] [i_13] = (min((arr_59 [i_13]), (min(5, (arr_50 [i_13])))));
        arr_62 [i_13] [i_13] = (arr_51 [i_13] [i_13]);
    }
    var_40 = var_9;
    #pragma endscop
}
