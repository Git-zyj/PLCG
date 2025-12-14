/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, var_15));
            arr_7 [i_1] [i_0] = (arr_6 [i_1] [i_1]);
            arr_8 [i_1] = ((-4073959486695801297 ? (arr_0 [i_0]) : ((((max(var_3, 58))) ^ (arr_4 [i_1])))));
            var_20 = var_15;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] = ((!(((1 ? var_12 : var_10)))));
            arr_13 [i_0] [i_2] = var_11;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_21 = (-59 ^ var_16);
            arr_17 [i_0] [i_0] = (((arr_4 [i_0]) && (arr_4 [i_0])));
            var_22 *= 53849072709688827;
            arr_18 [i_0] [i_3] [24] = (((arr_14 [i_3]) >= (~-6616763704086632436)));
        }
        arr_19 [i_0] |= (min((var_2 & var_4), ((((arr_6 [11] [i_0]) == 21544)))));
        arr_20 [i_0] [i_0] = (((((-(arr_4 [i_0])))) ? var_5 : (((arr_4 [i_0]) ? -4073959486695801297 : (arr_4 [i_0])))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_28 [i_4] [12] [i_4] = var_9;
            arr_29 [i_4] = ((((((arr_1 [i_5 + 1]) && var_11))) < (arr_21 [i_4])));
        }
        arr_30 [i_4] = (!((((arr_11 [i_4] [i_4]) ? 1 : (arr_15 [i_4] [i_4])))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_34 [i_6] = (arr_11 [i_6] [i_6]);
        arr_35 [i_6] [i_6] = 1;

        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_38 [1] [i_6] [i_6] = ((var_17 >> ((((-(arr_0 [i_6]))) + 64))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_45 [i_6] [20] [i_9] = ((((((max(var_5, var_16)) || -14677)))));
                        arr_46 [i_6] [3] [3] [i_8] [i_6] = (min(53849072709688827, 53849072709688827));
                    }
                }
            }
            arr_47 [i_6] [i_6] [i_7] = (((((-(arr_41 [i_7 - 2] [i_7 - 2] [i_7])))) - (((((arr_36 [16] [i_6]) ? var_3 : var_16)) / var_1))));
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            arr_50 [i_6] = (((((var_8 ^ (min((arr_41 [i_6] [i_6] [i_6]), 53849072709688827))))) ? (max((((50 ? -835775809 : var_9))), var_3)) : ((1 ? 1 : (arr_44 [i_10] [i_10 + 1] [17] [17])))));
            var_23 &= -5259494752407943922;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_24 = ((((arr_24 [i_11]) ? (arr_24 [i_6]) : var_11)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        var_25 = (max(((var_8 ? var_11 : 18869)), 1));
                        var_26 = (max(var_26, (((((!((max(var_16, var_9))))) ? ((-(arr_43 [i_6]))) : (~1))))));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_27 = (max(var_27, var_2));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    {
                        var_28 = ((!(var_5 >= var_17)));
                        var_29 += (21544 / -53849072709688827);
                        arr_71 [22] [i_14] [i_16] [i_14] = var_0;
                        var_30 = (((((arr_67 [i_16] [i_17] [i_14] [1]) ? (arr_67 [0] [i_15] [i_14] [1]) : -6078193508618204738)) & ((((-819973798 != var_5) ? 2676130571 : 0)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
