/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (((max(((2147483647 ? var_5 : var_6)), var_5))) ? ((max((max(var_0, 379606577)), 1404110290))) : ((var_13 ? (!1075947549740387858) : var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 *= ((((arr_2 [i_2 - 3]) ^ (arr_2 [i_2 + 1]))));
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_3] = (((-(arr_5 [i_2 - 4] [i_2 - 2] [i_2 - 2]))));
                        }
                    }
                }
                var_19 = (min(var_19, (((((max(((((arr_7 [i_0] [i_0] [i_1]) >= var_10))), ((~(arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (min((arr_3 [i_0]), (arr_1 [i_1]))) : (arr_1 [i_0]))))));

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_20 &= ((((~(((arr_9 [i_0] [i_0] [i_0] [i_0]) / (arr_2 [i_4]))))) - ((((41890 > (var_14 % var_7)))))));
                    arr_13 [i_4] [i_4] [i_4] [i_4 - 1] = (min(var_14, (((!(arr_11 [i_0]))))));
                    var_21 *= ((((((-32767 - 1) ? (arr_9 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1]) : ((-1775782822 ? -1775782826 : 1775782803))))) ? ((((-1775782822 & 1775782821) & 1775782832))) : (((((var_11 ? -7877530667237418122 : -1775782830))) ? ((((arr_4 [i_0]) ? 65 : (arr_11 [i_1])))) : var_13))));
                    arr_14 [i_0] [i_4] [i_4 + 1] = (((arr_4 [i_4 - 2]) | ((((arr_5 [i_4 - 1] [i_4 + 1] [i_4 - 2]) > (arr_5 [i_4 - 1] [i_4 - 2] [i_4 - 2]))))));
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [20] [i_5] = ((((((arr_11 [i_5]) ? (arr_4 [i_5]) : var_1))) ? (((((109 / (-2147483647 - 1)))))) : (max(5541416071110187816, (((var_13 ? 1 : (arr_9 [i_0] [i_1] [i_0] [i_1]))))))));
                    arr_19 [i_5] [i_1] = arr_16 [i_0] [i_0] [i_5];
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_5 - 2] [i_6] [i_7] [i_5] = ((((((arr_9 [i_6] [i_6] [i_6 + 1] [i_6 - 1]) ? (((arr_17 [i_5] [i_1] [i_5] [2]) & (arr_24 [i_0] [i_1] [i_0] [i_5] [i_7]))) : ((((var_13 || (arr_7 [i_6] [i_6] [i_0])))))))) ? (max(((((arr_0 [i_0]) ? -1775782830 : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_2 [i_7]))) : ((((var_3 ^ 1775782832) & (arr_24 [i_7] [i_5] [i_5 - 2] [i_5] [i_0]))))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_7] = ((~(arr_6 [i_0] [18] [i_5 - 1] [i_6 + 1])));
                                arr_29 [i_5] = (max((~-1775782805), (min(((7 ? (arr_0 [i_6]) : -1775782822)), (arr_3 [i_6 + 1])))));
                                var_22 = (min(var_22, (arr_0 [i_0])));
                            }
                        }
                    }
                    var_23 -= (((arr_2 [i_1]) != ((((((~(-2147483647 - 1))) == 0))))));
                }
            }
        }
    }
    #pragma endscop
}
