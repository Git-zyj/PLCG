/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((max((max(var_6, (arr_4 [i_0] [i_1]))), (arr_3 [i_1] [i_0])))) ? ((((max((arr_1 [i_1]), var_12))) & (((arr_1 [i_0]) ? var_2 : 18446744073709551615)))) : (((((min(18446744073709551615, var_7))) ? (arr_3 [i_0] [i_0]) : (((arr_0 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0])))))));
                var_14 = (-711885260 * 1);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_0, 1978062034));
                            var_16 = (arr_1 [i_1]);
                            arr_9 [i_1] [i_3] [i_0] [i_1] [i_0] [i_1] = (min((((arr_8 [i_3 + 2] [i_2 + 2] [i_3 - 2] [i_2 + 2] [i_2 + 2]) ? ((536870656 ? 536870667 : (arr_5 [i_3] [i_2 + 1] [i_0] [i_0]))) : (((arr_5 [i_1] [i_1] [i_2 - 2] [i_3 + 1]) ? 8353815951235267093 : var_12)))), (((((var_10 ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0]))) & (((arr_0 [i_0]) ? var_1 : 2458926876)))))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((536870670 ? (arr_8 [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_2 + 2] [i_2 - 2]) : (arr_3 [i_3 + 3] [i_3 - 2])))) ? 3150843208 : (arr_8 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_2 - 1] [i_2 - 2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_17 = (max(((536870640 ? 44 : -4456358640370324963)), ((1836040406 ? (((255 ? 38596 : 179))) : (min(711885260, 53778674924724766))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_18 = (var_8 & var_12);
                    var_19 = 17;
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_20 = ((min((arr_20 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 - 3]), (arr_20 [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 - 3]))));
                                var_21 = (max(((((1099658125 * 536870656) ? (max(var_8, -536870656)) : (arr_0 [i_8 + 2])))), 18446744073709551597));
                                var_22 = (!var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-(min(4294967266, 9223372036854775807))));
    var_24 = 1879048192;
    #pragma endscop
}
