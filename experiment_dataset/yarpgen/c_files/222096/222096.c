/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [9] = ((((((arr_1 [i_0]) ? var_13 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_20 = var_12;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((max(2228561375, 9800)) - (((min(1, (!474720912)))))));
            var_21 -= ((0 || ((min(-777137461, 2052241097)))));
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 = ((((3017 ? 6 : 44744))) ? (arr_8 [i_2]) : (arr_9 [i_2]));
        var_23 -= ((arr_8 [i_2]) ? ((~(arr_8 [i_2]))) : (arr_9 [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_4] = ((!(arr_11 [i_4])));
                    arr_16 [i_4] [i_3] [i_4] = -2052241082;
                    arr_17 [i_3] [3] [3] [i_4] = (arr_13 [i_2] [i_4]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_28 [i_5] = ((var_13 ? (!var_3) : (arr_22 [i_2] [i_5] [i_6] [i_5])));
                        var_24 = (arr_21 [i_2] [i_5] [14] [i_7]);
                        var_25 += (((arr_14 [i_6] [i_6 - 1] [i_6 - 3] [i_6 + 1]) ? -var_9 : (arr_23 [i_5] [i_2] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_40 [1] [1] [1] [i_11] &= (arr_33 [3]);
                        arr_41 [i_8] [i_9] = (arr_38 [15] [i_10] [i_9]);
                        arr_42 [i_8] [i_9] [i_10] [i_11] = (min((min((arr_37 [i_8] [i_9] [i_10] [i_11]), ((var_13 ^ (arr_34 [i_8] [i_9] [i_10] [17]))))), ((~((~(arr_34 [i_11] [i_11] [i_11] [i_11])))))));
                    }
                }
            }
        }
        arr_43 [i_8] = ((min(((max(1111, var_18)), -16787))));
        arr_44 [i_8] = (((((-((var_10 ? (arr_35 [16] [i_8] [i_8] [i_8]) : (arr_39 [i_8] [i_8] [i_8] [15] [17])))))) || ((!((((arr_39 [i_8] [i_8] [i_8] [i_8] [1]) ? (arr_37 [i_8] [i_8] [i_8] [i_8]) : (arr_36 [3] [16] [i_8] [0] [i_8] [i_8]))))))));

        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            arr_48 [i_12] &= ((+((-(min((arr_35 [i_8] [i_12] [i_8] [i_8]), -1458))))));
            var_26 -= var_17;
            var_27 = (((arr_45 [i_12]) ? (min((min((arr_39 [11] [i_8] [i_8] [i_8] [i_12]), var_0)), (~var_17))) : (((~(arr_45 [i_8]))))));
            arr_49 [17] [i_12] [11] = ((!((min((min(var_16, (arr_37 [17] [i_12] [1] [i_8]))), 1716444965)))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_28 = var_16;
                            var_29 = (max(var_29, (((-(arr_57 [i_8] [i_14 + 1] [i_8] [2]))))));
                        }
                    }
                }
                var_30 = (min(var_30, -474720910));
            }
            var_31 ^= var_14;
            arr_61 [i_13] [i_13] = ((((((arr_33 [i_8]) ? var_19 : (arr_31 [i_8] [i_13])))) ? (arr_33 [i_13]) : (arr_34 [i_8] [i_8] [i_8] [i_8])));
            var_32 -= ((!((((arr_60 [i_8] [i_8] [i_8] [3] [16] [i_13]) ? (arr_36 [i_8] [i_8] [i_13] [i_13] [i_13] [i_13]) : (arr_52 [i_8]))))));
        }
    }
    #pragma endscop
}
