/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = (min((min((arr_5 [i_0] [i_2]), var_11)), ((min((4088 || 286333657), (((arr_2 [13]) <= var_5)))))));
                    arr_10 [10] [i_0] [i_0] [10] = (min((min((((-(arr_3 [i_1] [i_0])))), ((-3404342306638198833 ? (arr_0 [21]) : (arr_1 [i_2]))))), (max(-var_10, ((var_13 / (arr_2 [i_2])))))));
                    arr_11 [i_2] = (arr_6 [i_2] [12] [i_0]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_17 [i_0] [i_3] |= (min(((((min(3404342306638198833, var_6))) ^ (arr_12 [i_3]))), ((min((arr_14 [i_4]), (arr_14 [i_0]))))));
                    arr_18 [i_0] [i_3] [i_4] [i_4] = (arr_16 [i_3] [i_4] [i_3] [i_0]);
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_27 [i_5] [i_6] = (!var_2);

                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    arr_30 [i_0] [i_5] [i_0] [i_5] = (var_1 + (arr_21 [i_7 - 1] [i_7 - 1] [i_7]));
                    arr_31 [i_6] [i_6] [i_0] [i_0] = ((!(arr_8 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2])));
                }
                arr_32 [i_0] [17] [i_5] [i_6] = (((((arr_26 [i_0] [i_5] [i_5]) > -3404342306638198833)) ? 191 : 759234730590979591));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_36 [i_8] [i_0] [i_0] = (((arr_34 [1] [i_5] [i_0]) / (arr_15 [i_8])));
                arr_37 [i_0] = (((arr_8 [i_0] [i_0] [i_5] [i_0]) ? var_13 : (arr_34 [i_8] [i_5] [i_0])));
            }
            arr_38 [i_5] [14] [i_0] = 0;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_46 [9] [i_9] [i_10] = (min(-3404342306638198833, ((min(117, ((~(arr_16 [i_10] [i_10] [i_9] [i_0]))))))));
                arr_47 [16] [i_9] [i_0] [i_0] = ((~(~496)));
                arr_48 [i_0] [i_9] [i_0] = (min(((min((min(8128, 1695311557)), var_5))), var_1));
            }
            arr_49 [i_0] [i_0] [12] = (min((((!(arr_1 [i_0])))), (max(166948602, -13))));
            arr_50 [i_0] = (((((~(arr_8 [i_0] [i_0] [i_0] [i_9])))) ? (min((arr_8 [9] [0] [5] [i_0]), var_3)) : (47216 < var_4)));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    arr_56 [i_0] [i_11] = 5319121633947475493;
                    arr_57 [5] [i_11] [11] = ((((min(var_12, var_13))) < (min((arr_24 [i_0] [i_11] [i_12]), var_5))));
                    arr_58 [i_12] = ((min(var_12, var_3)));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        arr_62 [i_13] = (max(-3404342306638198830, 127));
        arr_63 [i_13] = (((((!var_0) ? var_2 : ((24 ? 1611260000 : 1695311568)))) < 136));
        arr_64 [i_13] [i_13] = (arr_20 [i_13] [i_13]);
    }
    var_14 = var_9;
    var_15 = (max(var_0, (min((min(var_12, 152)), (min(var_5, var_6))))));
    var_16 = (!var_10);
    var_17 = (min(4294967295, 104));
    #pragma endscop
}
