/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (min(0, 1));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_6 [5] [i_0] [i_2] = ((~(-32767 - 1)));
                arr_7 [i_2] [i_0] [i_0] [i_0] = 1;
                arr_8 [1] [i_0] = (arr_3 [i_0] [i_2]);
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = (arr_0 [11]);
                            arr_16 [1] [i_0] [i_3] [i_4] [i_1] [i_3] = 127;
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (((!var_12) || ((((!114) ? 1640958930 : (((1 ? -115 : (-2147483647 - 1)))))))));
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_1] = 236;
                            var_21 = (((((~((min(-125, 1)))))) ? ((-var_8 | ((min(-6113173126525872300, 117))))) : var_2));
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_0] [i_0] = ((~(((((0 ? (arr_14 [i_0] [7] [i_0] [i_3]) : 14733))) ? (arr_14 [i_3] [i_0] [i_0] [i_0]) : ((var_17 >> (var_3 - 234027850)))))));
                var_22 = 1;
                var_23 = (((arr_0 [i_3]) + (~1)));
            }
            arr_20 [i_0] [i_1] = ((~(arr_9 [i_0] [i_0] [i_0] [i_1])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                arr_27 [i_0] = (min(var_16, (~36067)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_33 [i_0] [i_8] [i_7] [i_6] [i_0] = ((((((arr_2 [i_0] [i_7 + 3] [14]) - (arr_2 [i_0] [i_7 + 3] [i_7 + 1])))) ? 0 : ((-((1 ? var_9 : var_17))))));
                            arr_34 [i_9] [i_0] [i_7] [i_0] [i_0] = (313667939 ? 236 : 102);
                            var_24 = arr_30 [i_0] [0] [i_7] [i_0] [0];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_25 = var_9;
                            var_26 = ((-90 ? 125 : 45892));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_45 [i_13] [i_12] [i_0] [i_7] [i_0] [i_0] [i_0] = ((((((arr_30 [i_7] [i_0] [i_7] [i_0] [i_6]) ? (1 - 127) : 920063680424022103))) ? ((1 - (var_0 - var_8))) : var_18));
                            arr_46 [i_0] [i_13] [i_12] [i_7] [i_6] [i_6] [i_0] = (65535 || 0);
                        }
                    }
                }
                arr_47 [i_0] = (arr_9 [i_7 + 4] [i_7 + 2] [i_0] [i_7 + 1]);
            }

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                arr_50 [i_0] [i_0] [i_14] = (-2147483647 - 1);
                arr_51 [i_0] [i_6] = (((arr_22 [i_0]) ? var_0 : (+-1)));
                arr_52 [i_0] [i_6] [i_0] = (((!(((var_18 ? (arr_44 [i_0] [i_0] [i_0] [i_0]) : var_11))))) ? (((28548 ? 0 : (arr_48 [i_0] [i_0])))) : (((arr_30 [i_0] [i_6] [i_6] [i_0] [i_14]) + (arr_38 [i_0] [i_6] [i_6] [i_6] [i_14] [i_14]))));
            }
            var_27 = ((+((((var_4 + var_9) || (arr_31 [i_0] [15] [i_0]))))));
            var_28 = (((arr_35 [i_0] [i_6] [i_0] [i_6]) ? ((((!(arr_44 [i_6] [i_6] [i_6] [i_0]))))) : var_1));
        }
        var_29 = var_18;
        arr_53 [i_0] = (min(-12, 1));
    }
    var_30 = (((((((var_12 ? 34710 : 1)) * (2147483647 % -11)))) ? var_5 : (((var_17 ? (var_1 != var_9) : 1)))));
    var_31 = (min(var_10, -var_13));
    #pragma endscop
}
