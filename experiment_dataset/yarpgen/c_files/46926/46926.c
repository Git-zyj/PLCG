/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [17] = (min((arr_2 [i_0]), -1931762891));
        arr_4 [i_0] = ((-((((var_4 && var_10) < ((-5 ? var_3 : -12651)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = (((var_2 && (var_4 < var_9))));
        var_16 = (((+-2640883605617732036) < var_8));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_17 = max(((var_0 ? (((~(arr_12 [i_3] [i_3] [i_2])))) : (arr_9 [i_2]))), ((((arr_12 [i_2] [i_5] [i_4]) == (~var_13)))));
                        arr_21 [i_5] [i_3] [i_3] [i_5] [i_5] = ((-6577 ? 16066699797428702279 : -1123220714));
                        var_18 = (min(var_18, (!9)));
                    }
                }
            }
        }
        var_19 = 1;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_20 += (((var_2 ? (9346004612958839231 / 68) : ((((arr_18 [i_2] [i_6] [i_7]) / (arr_7 [i_7])))))) == ((var_12 ? (((arr_22 [i_7] [i_7]) - var_7)) : (((var_0 ? (arr_0 [i_2] [i_2]) : (arr_12 [i_2] [i_2] [10])))))));
                    arr_28 [i_7] [i_6] = ((((((max((arr_26 [i_6] [i_2]), var_12)) << (((((arr_17 [i_2] [i_6] [i_6] [i_7]) ? var_13 : 1)) - 6749204621446221824))))) ? ((max((((arr_13 [i_2] [i_7] [i_7]) / var_14)), ((max(40049, var_6)))))) : ((-10 ? (((1931762886 ? 127 : 40052))) : ((var_5 ? 5306406705560886148 : 1))))));
                    arr_29 [i_2] [i_6] [i_7] [i_6] = ((!(((((max(var_13, var_14))) ? (arr_10 [i_2]) : (max(var_14, (arr_0 [i_2] [i_2]))))))));
                }
            }
        }
        var_21 = (((((arr_1 [i_2]) / var_9)) * (((max(26950, (arr_6 [i_2])))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_22 = ((var_4 ? (min(((25078 ? var_8 : 173)), (((var_14 == (arr_40 [i_8] [i_9] [i_10] [1] [i_12])))))) : var_8));
                            var_23 = (min(var_23, ((((max((!var_14), ((var_6 && (arr_41 [i_8] [i_9] [i_11]))))) || (!10))))));
                        }
                    }
                }
            }
            var_24 = (((((arr_36 [i_8] [i_8] [i_8] [3]) ? (arr_36 [i_8] [i_9] [i_8] [i_8]) : (arr_36 [i_8] [i_8] [i_9] [i_9])))) ? ((var_5 ? (min(1, var_13)) : (var_10 / 28165))) : (arr_0 [i_9] [i_9]));
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_45 [i_8] &= (4193 - 50);
            arr_46 [i_13] = ((((((min(1, var_14)) * -82))) ? ((((6892550600795832938 || (arr_32 [i_13]))) ? (!87) : var_13)) : var_5));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_25 = (((((arr_30 [i_14]) ? (arr_7 [i_8]) : (arr_43 [i_15] [i_15] [i_15])))) ? (arr_51 [i_8] [i_14] [i_15]) : ((-6584 ? 3497150290 : -17844)));
                var_26 = ((!(arr_47 [i_8] [i_8])));
                arr_52 [2] [2] [i_15] [i_14] |= ((((((arr_0 [i_8] [i_14]) ? -87 : (arr_33 [i_15] [i_8])))) ? (6031 + 0) : ((61339 ? 797817030 : (arr_48 [i_8] [i_8])))));
            }
            var_27 = max(17705152800379060089, 819115558);
            arr_53 [i_8] = (((1346873271 - 12551) ? ((9711996255139586561 ? (32572 % 3497150308) : 3789708774)) : ((max(((1 ? var_1 : 238)), 168)))));
        }
        arr_54 [i_8] = (arr_7 [i_8]);
        arr_55 [i_8] = -74;
    }
    var_28 = (max(var_28, var_9));
    var_29 = var_14;
    #pragma endscop
}
