/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((~(arr_2 [0] [i_1 - 2] [i_1 + 1])));

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] [i_2] = (((min((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_3))) ? ((max(565366414, var_5))) : ((((565366413 || (arr_7 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_2 + 1]))))));
                        arr_10 [i_3] [i_1 - 1] = var_8;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_16 = (((((((((arr_14 [19] [i_1] [i_2] [i_3] [i_4]) || var_5))) + (min(-2020584609, var_13))))) * (min(((3729600871 % (arr_11 [i_4] [i_0] [i_3] [8] [10] [10] [i_0]))), (((-256 ? var_7 : -20199)))))));
                            var_17 = var_11;
                            arr_15 [i_4] [4] |= ((+(((arr_13 [i_0] [i_1] [i_1] [0] [i_1]) << (((arr_13 [1] [i_1] [1] [i_3 - 2] [i_3 - 4]) - 1860294787442966648))))));
                            var_18 = (max((arr_6 [i_0] [i_0] [i_3]), (arr_14 [i_4] [i_3] [i_2 - 1] [i_3] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] [i_2 - 2] [11] [i_1] [i_3] = ((-((((max(3729600871, (arr_5 [i_2 + 3] [12])))) ? var_7 : (max(var_14, var_4))))));
                            var_19 |= (((2 ? (arr_18 [i_3 + 1] [i_5] [i_3 - 3] [i_3 + 1] [13] [i_0]) : (arr_18 [1] [i_3] [i_3] [i_3 - 2] [i_2 + 2] [i_2]))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_20 = ((min((arr_2 [i_1 - 1] [i_3 - 1] [i_6]), 3729600861)) == (((arr_2 [i_1 - 2] [i_3 - 1] [i_3]) ? 4187926573 : (arr_2 [i_1 - 1] [i_3 - 2] [i_6]))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_6] = (min((((((-30686 ? 1529914887 : 7))) ? ((var_10 - (arr_6 [i_0] [i_0] [i_6]))) : var_3)), ((min(((var_5 ? var_7 : var_7)), (arr_21 [i_0] [i_1] [i_2] [i_3] [i_0]))))));
                            var_21 = 14662641208595847839;
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_25 [12] [i_3] [1] [1] = (max(var_0, 1));
                            arr_26 [i_7] [13] [i_3] [i_3] [13] [i_0] = (((!var_6) > (max((arr_12 [i_0] [i_1] [i_2]), (arr_12 [i_1] [i_2 - 2] [i_3])))));
                            arr_27 [i_0] [i_1] [i_1] [i_3] [i_7] |= (max(((((var_5 ^ var_8) ? ((max(var_14, (arr_11 [i_0] [i_0] [i_0] [8] [i_2] [i_0] [i_7])))) : var_3))), (max((arr_18 [i_7] [5] [i_2] [5] [i_0] [i_0]), ((1 ? 107040725 : (arr_16 [i_0] [i_1] [i_0])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_22 = 9223372036854775793;
                        arr_30 [9] [i_8] = ((-var_11 & (arr_2 [i_1] [i_1 - 1] [i_8])));
                        var_23 = (3156320283 << 7);
                        var_24 = 4187926558;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [i_9] [i_9] = ((-(((arr_14 [i_0] [i_1 + 1] [i_2 - 1] [i_9] [i_2 - 1]) ? (arr_7 [i_0] [i_1 - 2] [i_2 + 3] [i_1] [i_1] [9]) : (arr_7 [i_0] [i_1 + 1] [i_2 - 2] [i_9] [i_1 + 1] [i_1 + 1])))));
                        var_25 |= 262080;
                        var_26 = (((((!((3107654746 > (arr_18 [i_0] [1] [i_0] [i_1 - 1] [i_2] [i_9])))))) > (((arr_7 [i_0] [i_0] [i_1 + 1] [i_1 - 2] [15] [i_1 - 2]) - var_10))));
                        arr_34 [i_0] [3] [i_0] [i_9] = (((((-(((!(arr_17 [19] [i_1 + 1] [i_2] [i_2] [19] [i_9]))))))) ? var_6 : var_3));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_27 = 14662641208595847810;
                                var_28 = (arr_13 [i_11 + 1] [i_10] [i_2] [i_10] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (!var_11);
    var_30 = (min(var_11, (((!(var_7 <= var_11))))));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    var_31 = (((!var_8) ? ((((arr_47 [i_12] [i_13] [i_14]) || (arr_47 [i_12] [i_13] [i_14])))) : (((!(((1138646986 ? var_11 : 12063411738627822309))))))));
                    var_32 = (arr_41 [i_12]);
                    arr_51 [i_14] = (max((max(((max(var_1, (arr_45 [i_14])))), var_12)), ((((arr_43 [i_12]) ? var_7 : (arr_41 [i_12]))))));
                }
            }
        }
    }
    var_33 = var_4;
    #pragma endscop
}
