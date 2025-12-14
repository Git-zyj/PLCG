/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max((((~var_13) / (max(var_3, var_5)))), (var_4 > -var_7)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_1 [i_0 + 3] [i_0 + 3]);
        arr_2 [i_0] [2] = (0 < 1951);
        var_22 = 280515831181075361;
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 2] [i_1 - 4] = (max((arr_4 [i_1 - 2]), (((((((arr_1 [i_1 + 3] [i_1 - 2]) ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1])))) ? ((((arr_3 [i_1 + 1]) <= (arr_1 [i_1] [i_1])))) : (max(var_2, (arr_0 [i_1]))))))));
        arr_6 [i_1] = (max((-21598 && 0), ((((max(var_16, (arr_0 [i_1])))) ? ((((var_14 == (arr_3 [i_1]))))) : (((arr_0 [i_1]) ? var_6 : (arr_4 [i_1 - 4])))))));
        var_23 += 99;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1] = var_19;
            var_24 = (arr_1 [6] [i_1]);
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_25 = (((var_14 ^ (min(var_2, var_9)))));
            arr_14 [8] [8] [10] = (((((156 == (max((arr_8 [i_1] [0] [i_1]), 132))))) == (132 && -286)));
            var_26 = ((max((((var_13 == (arr_4 [i_1])))), (min(var_9, 81)))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_27 ^= ((112 ? 0 : 771510917));
            var_28 = (((((((max(247, 3654))) == 100))) >> (!1708160418)));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_29 = -58;
                arr_22 [i_1] [i_1] [i_1] [i_1] = ((((((((arr_21 [i_1 - 3] [i_1 - 3] [i_1] [i_1]) == (arr_15 [i_1])))) > ((max(var_2, (arr_21 [i_5] [i_4] [i_4] [i_1])))))) ? (((247 | (arr_20 [i_1 + 1] [i_4] [i_5])))) : ((-102 ? (arr_12 [i_1] [i_4]) : 110))));
                var_30 = (((((max(var_15, 175)) != 72)) ? -280515831181075362 : (((min((min(74, 28382)), 163))))));
                arr_23 [i_5] = (max(((var_7 ? (arr_21 [8] [i_1 + 2] [11] [i_1 - 2]) : 225)), ((((arr_21 [i_1 + 3] [11] [i_1 + 2] [i_1 + 1]) == -64)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_31 = (((arr_12 [i_4] [i_6]) ? ((-(arr_24 [i_1 + 1]))) : (1708160399 - var_5)));
                arr_26 [6] = (var_7 ^ (((arr_21 [i_1] [i_1] [11] [i_1]) ? -5267254001193980097 : 4049823253)));
                var_32 ^= ((-12 ? -6923860606286240541 : 48));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_36 [i_1] [i_8] [i_8] [i_8] [i_1] = (min(99, 245144042));
                            arr_37 [i_1] [i_4] [i_8] [i_7] [i_8] [i_8] [i_1] = (arr_12 [15] [i_1]);
                        }
                    }
                }
                var_33 *= (-((((max(var_8, var_14))) * (4049823253 * -46))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_43 [3] [i_4] [14] [i_10] [i_10] [5] = ((78 && (!12434)));
                            var_34 += min(((-48 ? (arr_4 [i_1 + 2]) : var_12)), ((((arr_4 [i_1 + 3]) >= var_14))));
                            var_35 = (min(var_35, var_0));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_36 ^= 99;
                arr_47 [i_1] [i_4] [i_12] = (max((~4049823253), ((min((max(var_10, (arr_16 [13] [i_1] [i_4]))), (arr_39 [4] [i_1] [1] [1] [2] [i_12]))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            arr_52 [i_14] [i_13 + 1] [i_12] [1] [i_1] [i_1] = (max(var_11, 81));
                            var_37 = (min(-var_19, (min(((var_15 - (arr_35 [i_1]))), -var_14))));
                            arr_53 [13] [10] [i_13] [i_12] [i_4] [i_1] = (arr_45 [i_4] [i_4] [i_13] [i_14]);
                        }
                    }
                }

                for (int i_15 = 3; i_15 < 14;i_15 += 1)
                {
                    var_38 = ((!(((99 ? (arr_0 [i_1 - 2]) : var_15)))));
                    var_39 = (arr_16 [i_1] [13] [i_4]);
                    var_40 = var_6;
                }
                var_41 ^= var_15;
            }
        }
        arr_57 [i_1 - 1] = ((((var_6 & (arr_28 [11] [i_1 - 4] [i_1 - 4]))) >= ((((((max(50, -12435))) == 81))))));
    }
    for (int i_16 = 4; i_16 < 13;i_16 += 1) /* same iter space */
    {

        for (int i_17 = 2; i_17 < 13;i_17 += 1)
        {
            arr_63 [i_17] [8] = arr_31 [i_17] [i_17] [i_16] [i_16 - 1];
            var_42 ^= var_7;
            var_43 = (max(((((arr_46 [i_16 + 1] [i_17] [i_17 - 2]) && var_19))), (max(var_12, var_15))));
        }
        arr_64 [i_16 - 1] = var_17;
    }
    var_44 = var_8;
    #pragma endscop
}
