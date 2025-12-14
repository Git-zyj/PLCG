/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_13 ? 1904171907 : 2147483647))) || var_8));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((+(min(var_13, (((-20239 + 2147483647) << (((arr_1 [i_0]) - 3280271363))))))));
        var_17 = var_13;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (((max(-1238591751, (max(1238591774, (arr_3 [i_0] [i_1] [i_0]))))) - ((((((max(var_2, 98118559))) && (((var_2 ? var_1 : var_1)))))))));
            arr_4 [6] [i_1] = 1904171911;
            var_19 = (max(var_19, ((((min((min(var_0, (arr_1 [i_0]))), var_0))) ? (max((max(-1729173182, (arr_3 [i_0] [i_0] [11]))), ((min(-1178107073, 56))))) : (((((max(var_5, (arr_0 [i_0] [i_1]))) != (arr_2 [i_0] [i_0] [i_0])))))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = ((!153) ? (min((((arr_5 [i_0] [i_2]) ? var_8 : 222)), (var_14 != 112))) : (((min(163, 137)))));
            var_20 = ((!(((25 ? ((min(var_7, var_9))) : (max((arr_5 [i_0] [i_2]), (arr_0 [i_0] [i_0]))))))));
        }
        var_21 ^= (max((((!(((-(arr_2 [2] [i_0] [i_0]))))))), ((~(arr_3 [i_0] [i_0] [i_0])))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_22 = (((arr_12 [9] [i_3] [i_3] [i_3]) ? -27671 : var_4));
                var_23 = ((-(arr_3 [i_4 - 2] [i_4 - 2] [i_4 + 1])));
            }
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_24 = (min(var_24, -34));
                arr_17 [i_0] [i_3] [i_0] [i_5 - 1] = ((~(arr_11 [i_5 + 2])));
                arr_18 [i_0] [i_3] [9] [6] = 255;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_25 = (((arr_14 [i_0] [i_3] [i_3] [4]) && var_8));
                var_26 = ((24380504 * (var_12 == var_6)));
                var_27 = (min(var_27, (!12)));
            }
            arr_22 [i_0] [i_0] [12] = ((467867671 == (!48)));
        }
    }
    for (int i_7 = 4; i_7 < 17;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_28 += 1904171926;

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_31 [i_7] = ((-(~-742601141)));
                var_29 = (((((arr_7 [i_7] [i_9]) ? var_9 : -1263092311))) ? -742601171 : ((var_2 ? 5403 : var_0)));
            }
            var_30 = (min(var_30, -2695));
            var_31 = (min(var_31, (((~((249 ? 211 : -1904171892)))))));
            arr_32 [i_7] [i_8] [i_8] = ((~(arr_6 [i_7 - 3] [i_7 - 1])));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {
            arr_35 [i_7] [10] [i_7] = (max((arr_15 [i_7] [0]), (((var_2 ? (arr_13 [i_7] [i_10]) : var_3)))));
            var_32 = (((((min(var_1, (328264318 || 661967009))))) ^ (arr_11 [9])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_33 = (-((216 ? 90 : (arr_34 [i_11]))));

            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                var_34 -= ((-(arr_10 [i_7 - 3] [i_7 + 1] [i_7 - 3])));
                var_35 = (min(var_35, ((((((arr_13 [i_11] [15]) & (arr_20 [i_12] [11] [7] [14])))) ? (((((arr_9 [i_11]) + 2147483647)) >> (((arr_38 [i_11] [6]) + 32367)))) : var_12))));
                var_36 = (((var_10 | var_1) && (((var_14 ? 1904171918 : 1460250856)))));

                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_37 = ((!(arr_42 [13] [i_11] [i_7] [i_11])));
                        var_38 |= (arr_27 [16]);
                        var_39 = (min(var_39, 67));
                    }
                    var_40 = (((-1 ? 238 : 68)));
                    var_41 = ((-(((arr_6 [i_11] [i_7]) ? var_10 : (arr_1 [5])))));
                    var_42 = (var_0 ^ ((var_0 ? var_0 : var_13)));
                    var_43 = -231;
                }
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    var_44 = (((arr_44 [i_7 - 2] [i_7 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1] [i_15 - 1]) ? (arr_44 [i_7 - 3] [i_7 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1]) : (arr_28 [i_7] [i_7] [i_7])));
                    var_45 = (-var_6 / -1864007089);
                    var_46 = (((arr_34 [i_7 - 3]) ? 75 : (((!(arr_36 [i_7] [i_11] [i_15]))))));
                }
            }
            var_47 = (~3060639479);
        }
        var_48 = (((var_10 * (95 / 174))));
        arr_47 [i_7] = (max((((!((min(-21559, 4294967272)))))), ((var_10 | (arr_2 [i_7] [i_7] [i_7 - 3])))));
        var_49 = (min(var_49, (arr_25 [4] [i_7])));
        arr_48 [i_7] [i_7] = ((((13 ? 156 : 0))));
    }
    #pragma endscop
}
