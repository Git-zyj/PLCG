/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = (!4035225266123964416);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (max((max(-8192, ((-(arr_1 [i_0 - 2] [i_1]))))), -1));
                    var_21 = (min((3808881606201647709 + var_1), 3663239630));
                }
            }
        }
        var_22 = (!var_9);
        var_23 = -32451;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_24 = (max(-19796, ((-4 ? var_17 : ((var_6 % (arr_1 [i_0 - 2] [i_3])))))));
                    arr_13 [i_3] &= ((((min(122, 19808))) + 1));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5 + 2] = var_3;
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [1] [i_7] [i_6] = (((!(arr_7 [i_8] [i_8] [i_8]))) && ((((((min(140, 15)))) + (((arr_19 [i_6]) ? (arr_6 [i_5] [i_5 - 2] [i_5 - 2]) : (arr_9 [i_5])))))));
                        arr_26 [i_5] [i_6] [i_6] [i_8] = (min(((~(((arr_14 [i_5]) ^ 909561219)))), (max(((-(arr_10 [i_5]))), ((29 - (arr_0 [i_8])))))));
                        var_25 = (max(var_25, ((-(((arr_9 [i_5]) | ((((arr_5 [i_5] [3] [i_7] [i_8]) ? (arr_0 [i_8]) : (arr_0 [i_8]))))))))));
                    }
                }
            }
        }
        var_26 *= ((((((((-(arr_7 [i_5] [i_5] [i_5 - 1])))) ? ((min(var_6, var_8))) : (((arr_0 [i_5]) + (arr_18 [3] [3] [1])))))) ? var_12 : (min((var_3 < 33), ((-80 ? var_2 : (arr_22 [i_5 - 1])))))));
        var_27 = -21270;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 = (max(var_28, (((1 << (-1089909004050515218 + 1089909004050515241))))));
                            arr_41 [i_9] [i_10] [i_11] [i_12] [i_13] = var_12;
                        }
                        arr_42 [1] |= (arr_31 [i_9] [i_10] [2]);
                        var_29 = arr_28 [i_9];
                    }
                }
            }
        }
        arr_43 [i_9] = (((31 >= 124) ? ((((arr_31 [i_9] [i_9] [i_9]) >= 7965404529604491447))) : (!33)));
        arr_44 [i_9] = ((1 ? -var_4 : (((131 ? 909561219 : (arr_32 [7] [i_9] [i_9] [i_9]))))));
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_30 = ((!((((!var_16) ? (var_1 + var_1) : (arr_45 [i_14] [i_14 - 1]))))));
        arr_47 [i_14] [i_14] = (!8848);
    }
    var_31 = ((((min(var_11, var_1)) >= var_16)));
    #pragma endscop
}
