/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-((((7 ? var_4 : var_1)) ^ var_9)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (((arr_1 [i_0]) ? ((249 - (arr_4 [i_1]))) : 0));
            var_22 = 1928915123;
            var_23 ^= (arr_3 [i_0] [6] [i_0]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_24 = (!0);
                var_25 = ((((min((!29), 0))) ? ((((arr_3 [i_0] [i_1] [i_2]) ? (min((arr_4 [1]), (arr_0 [i_1]))) : (arr_2 [1] [4] [i_2])))) : (min((arr_2 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_1] [i_2])))));
                var_26 = var_6;
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        var_27 = (max(var_27, 189));
                        var_28 = (arr_10 [i_0] [i_3] [i_4] [i_5]);
                        var_29 = (min(var_29, ((((arr_7 [i_5 + 2]) && (arr_7 [i_5 - 1]))))));
                    }
                }
            }
            arr_16 [i_0] [i_3] = var_3;
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_30 = (min(236, 0));

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_27 [i_7] [i_6] [i_7] [i_8] [9] = ((139051212 ^ (arr_8 [i_6 + 3])));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_31 = (((arr_5 [i_7] [i_8] [4]) ? 1 : 66));
                        arr_32 [i_0] [3] [i_7] [i_0] [i_9] = (arr_12 [i_0] [i_6] [i_7] [i_6]);
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_32 = (min((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]), (~32227)));
                        var_33 = var_3;
                    }
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        arr_38 [i_0] [i_8] [i_11] = (10091560310634084882 > 37975);
                        arr_39 [i_0] [1] [3] [i_8] [i_8] [i_8] [i_7] = (arr_13 [5] [i_6] [1]);
                        var_34 = (arr_3 [i_0] [i_6 + 2] [i_7]);
                    }
                    var_35 = 1866251165;
                    arr_40 [i_0] [i_0] [i_7] [i_8] = (arr_14 [i_6 - 2] [i_6 + 3]);

                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        var_36 = ((min((arr_10 [i_8] [i_8] [i_8] [i_8]), (arr_2 [i_12 + 1] [i_6 + 3] [i_0]))));
                        arr_43 [i_0] [i_7] [i_0] [i_8] [i_12 - 2] = ((((2109010864 ? (arr_33 [1] [1] [i_6 - 1] [i_6 + 2] [i_6]) : (arr_24 [i_6 - 2] [0] [i_6 - 1] [i_6 + 2])))) ? 3088 : (((var_14 >= ((((arr_6 [i_0] [i_6 - 2] [i_8] [i_12 - 3]) ? (arr_0 [i_6]) : -3241557232116231502)))))));
                    }
                }
                var_37 ^= ((arr_7 [i_6 + 3]) + (min(1, 4294967295)));
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
            {
                var_38 = (((((-(((arr_46 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 65013))))) ? (((((arr_29 [i_13]) >= 922293939)))) : (min((arr_28 [i_0] [i_0] [i_13] [i_13] [i_13] [i_6] [12]), (arr_23 [i_0] [i_0] [i_0])))));
                arr_47 [i_6] = (arr_14 [i_0] [i_6 - 2]);
                arr_48 [i_0] [i_0] [i_0] [i_0] = ((!(arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            var_39 = (arr_25 [i_6 - 1] [i_6 + 3] [i_6 + 3] [i_6 - 1]);
        }
        var_40 = (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [11] [i_0]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_41 = (arr_49 [i_14]);
        var_42 = (arr_49 [i_14]);
        var_43 = (((arr_50 [i_14]) / (arr_49 [i_14])));
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_44 ^= -2923769601649910418;
        arr_53 [i_15] [i_15] = ((-(arr_52 [i_15])));
        var_45 *= (min(((((min((arr_51 [i_15] [i_15]), 0))) ? ((~(arr_52 [1]))) : (arr_51 [i_15] [22]))), (arr_51 [i_15] [1])));
    }
    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        var_46 *= (min((arr_52 [i_16]), (((arr_52 [i_16 + 1]) ? (arr_52 [i_16]) : (arr_52 [i_16 + 1])))));
        var_47 = (arr_55 [i_16 + 1]);
        arr_56 [i_16] [i_16 + 1] = (arr_55 [i_16]);
        var_48 = 1;
        var_49 = (arr_54 [i_16 + 1]);
    }
    var_50 = ((!((min(var_0, var_5)))));
    #pragma endscop
}
