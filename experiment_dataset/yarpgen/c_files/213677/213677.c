/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((max((12448596188968507701 * 16318516312552146141), (arr_5 [i_1]))));
                        var_19 = (-39581 >= 4272912630089837129);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        var_20 ^= ((~(arr_2 [i_1 - 2])));
                        var_21 = 15;
                        var_22 = ((-1406707522 ? 65521 : 15));
                        var_23 = ((((2985574406105110923 ? 1 : (arr_8 [15] [i_2] [i_1] [9])))) - (arr_1 [i_0] [i_1]));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 += (max(((min(65521, (arr_22 [i_6] [i_5] [i_2] [i_1] [i_0])))), (min((max((arr_6 [i_0] [i_1] [i_2]), (arr_7 [i_0]))), ((min(13639, 103)))))));
                                var_25 = (arr_14 [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                                var_26 = ((-((((min(19, (arr_10 [i_1])))) % -32764))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_27 -= 14122222916526295894;
                                var_28 = ((((((min(19, 1))) ? 0 : (((min((-32767 - 1), 38134)))))) % (arr_27 [18] [i_0] [18] [18] [i_0] [i_0])));
                            }
                        }
                    }
                    var_29 += ((((max((arr_3 [i_0]), 1))) ? ((~(arr_23 [i_2] [i_2] [i_2] [i_0]))) : ((((arr_3 [i_0]) ? 1 : 1)))));
                    var_30 = (((arr_26 [i_2] [i_1] [i_2] [i_2] [i_2]) ? (((((1 + 15) == 65521)))) : (min((arr_9 [i_0] [i_1] [i_1]), ((-7183 ? (arr_27 [i_2] [i_2] [19] [23] [10] [10]) : 5129336799693411505))))));
                }
            }
        }
    }
    var_31 = var_18;
    var_32 += ((-(min(var_2, ((65506 ? -13652 : var_0))))));
    #pragma endscop
}
