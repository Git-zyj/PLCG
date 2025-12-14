/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = min((((-((min((arr_2 [i_0]), (arr_0 [i_0]))))))), (min(3210252329, 1)));
        arr_5 [i_0] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) | (1 | 187)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = arr_1 [i_1];
        var_16 = (((arr_2 [i_1]) == 1));
        arr_9 [i_1] [i_1] = (((((max(8614, (arr_2 [i_1]))))) / (((arr_0 [8]) ? (min(var_10, var_9)) : var_0))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (~17030005836566158642);
        arr_13 [i_2] [19] = (6137802718768681441 && 12308941354940870175);
        arr_14 [i_2] [i_2] = (((arr_6 [i_2] [4]) | (((((1 ? 1 : 2873198282267770897))) ? (~7) : ((var_10 & (arr_1 [i_2])))))));
        var_17 = (~1207874937);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_18 &= ((~(arr_19 [i_3] [i_4])));
            arr_20 [i_3] [i_3] [i_4] = ((!(arr_19 [i_3] [i_3])));
            arr_21 [i_3] [i_3] [i_3] = ((~(arr_3 [i_4] [i_3])));
            var_19 = (arr_11 [i_3] [i_3]);
            arr_22 [14] [i_3] [i_4] = var_13;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_25 [i_5] [i_3] = 1918145470;
            arr_26 [i_3] [i_5] = ((((7 ? 12308941354940870175 : var_0)) | (arr_24 [i_3] [i_3] [i_5 + 1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_20 = (arr_17 [i_3]);
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_21 = var_12;
                            var_22 = (9517 | 0);
                            arr_41 [i_3] [i_6] [i_7 + 3] [i_8] [i_9] = ((~(arr_38 [i_8 - 4] [i_8 - 3] [i_8] [i_8 - 4])));
                            var_23 = var_13;
                            arr_42 [i_8] [14] [i_7] [i_8] = -1445821536;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            var_24 = -4005422823272173438;
            var_25 = (arr_34 [i_3] [i_3] [i_3] [i_10] [i_10] [i_10 + 1]);
        }
        arr_45 [i_3] [i_3] = 1;
        arr_46 [i_3] [i_3] = (min((!var_2), (((arr_32 [i_3] [i_3] [i_3]) ? (arr_32 [i_3] [i_3] [i_3]) : (arr_32 [i_3] [i_3] [i_3])))));

        /* vectorizable */
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_26 = (arr_1 [i_11 + 4]);
            var_27 = 50;
            arr_49 [i_11] [i_11] = -2873198282267770897;
            arr_50 [i_11] = ((3 ? -2030 : -22));
        }
        arr_51 [i_3] = var_6;
    }
    var_28 = (min(var_28, ((min((var_2 >= var_11), var_1)))));
    #pragma endscop
}
