/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [18] [i_2] [i_2] [i_2] [18] = (((arr_4 [i_0] [6] [i_2]) ? var_7 : (arr_14 [i_4] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
                            var_19 = (((-3833774387299713578 + 4294967274) <= var_18));
                            var_20 = (min((((min((arr_0 [i_0] [4]), var_15)))), ((min(var_2, var_8)))));
                        }
                    }
                }
            }
            var_21 = (min(var_21, ((((min((arr_0 [1] [0]), var_18)) << (var_17 - 20968))))));
            var_22 ^= (min(((min((arr_9 [i_1] [16] [i_0] [i_0] [16] [0]), (arr_9 [i_0] [6] [i_1] [i_1] [1] [1])))), (min(((((arr_4 [i_0] [i_1] [8]) > var_14))), var_1))));
            var_23 -= (max((arr_0 [4] [4]), (((-(arr_11 [i_1] [6] [i_0] [8] [i_0] [6] [i_0]))))));
            arr_16 [18] [i_0] [i_1] = (((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 2]) ? ((((((~(arr_5 [i_1] [i_1] [i_0])))) ? var_4 : ((var_5 ? (arr_1 [i_0]) : var_12))))) : (arr_2 [i_0 - 1] [i_0 + 1])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_24 = var_4;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_25 = (arr_21 [i_0 - 1] [i_5] [15] [i_0] [i_7]);
                        var_26 = ((((((min(var_16, (arr_7 [i_0] [i_0])))) ? var_2 : ((((arr_7 [i_0] [16]) == (arr_17 [i_5] [i_0]))))))) ? ((max(var_12, (~var_16)))) : (4187014793 != 4187014785));
                        var_27 = (max(var_27, ((min((!var_7), ((((min(var_15, 4187014793))) ? (~var_10) : var_7)))))));
                        var_28 += (min((arr_5 [i_5] [i_5] [i_0]), ((((max(0, 2315434885))) ? (arr_6 [i_0] [i_6] [16] [i_7]) : (((min(var_18, var_12))))))));
                        var_29 = (((arr_2 [i_5] [i_5]) ? (arr_22 [i_0 - 2] [i_5] [i_5]) : (~162)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_30 = var_0;
                            var_31 = (max((arr_2 [2] [12]), (arr_28 [i_10] [i_10] [i_0] [i_8] [i_0] [i_0])));
                        }
                    }
                }
            }
            var_32 = (min(var_6, (arr_8 [i_0] [i_0] [i_0])));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_33 = ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2]) ? (arr_11 [i_0 + 1] [i_0] [i_11] [18] [13] [i_0] [i_14]) : (arr_11 [i_0] [i_0] [i_11] [i_11] [7] [i_0] [17]))));
                            var_34 = (~((4187014793 ? -35 : 107952494)));
                        }
                    }
                }
            }
            var_35 = (((arr_32 [i_0] [i_0 - 1]) << (var_11 - 2901408378)));
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
        {
            var_36 = (arr_8 [i_15] [i_0] [i_0]);
            var_37 -= (~var_1);
            var_38 = (arr_1 [i_0]);
            var_39 = var_3;
        }
        var_40 ^= (~41974);
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_41 = (arr_2 [i_16] [i_17]);
                var_42 = (min(var_42, ((((max(((min(var_12, var_4))), ((var_18 ? (arr_5 [i_16] [i_17] [1]) : var_8)))) < var_1)))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_43 = (((arr_48 [i_16] [i_17] [i_16]) ? (arr_39 [17] [17] [17] [17]) : ((max(var_11, ((min((arr_13 [i_16] [i_17] [i_18] [i_19] [i_18] [i_17] [i_16]), var_17))))))));
                            var_44 = (min(var_44, (((-var_13 != ((var_5 ? var_10 : ((2201698487 ^ (arr_2 [16] [i_16]))))))))));
                            var_45 = (max(((~(arr_35 [i_18] [i_18]))), (((!(arr_35 [i_16] [i_16]))))));
                        }
                    }
                }
            }
        }
    }
    var_46 = (min(var_46, var_11));
    #pragma endscop
}
