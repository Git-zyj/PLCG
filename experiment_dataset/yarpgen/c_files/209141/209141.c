/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_17 += ((arr_6 [i_0 + 3] [i_1] [i_1] [i_1] [i_2 + 1] [i_3]) != (min(8191, -1961929045)));
                        var_18 += (1925260331 >= var_16);
                        arr_8 [i_3] [i_2] [i_0] = (min((((arr_0 [i_0 - 1]) < 1)), (((max((arr_3 [i_0] [i_1]), (arr_7 [i_3] [i_2] [i_1] [i_0]))) <= (~33553920)))));
                        arr_9 [i_0 - 1] = 1;
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((((((-1961929045 % (arr_2 [i_3] [i_1]))) / (arr_6 [i_0] [i_0] [i_2] [i_1] [i_0] [i_1]))) < (min(1, 1961929045))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] = (((1 * 1) / (var_6 || var_14)));
                            arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] |= (min((min(6169353926081003859, (1007867327 ^ var_10))), (((-1689353932 ? 1689353955 : -1689353932)))));
                        }
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] = 43955;
                        arr_20 [i_4] = min(9045, -9223372036854775790);
                    }
                    arr_21 [i_0 + 3] [i_0 + 3] = (-2147483647 - 1);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_29 [i_6] [i_6] [i_2] [i_1] [i_6] = (min((arr_6 [i_7] [i_6] [i_6] [i_2] [i_1] [i_0]), (min(1, 4082163788))));
                                var_19 = (((((arr_2 [i_2 + 1] [i_2 - 1]) % 1)) != var_5));
                                arr_30 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] |= var_11;
                                var_20 = (min(var_20, (((((1 || (var_15 && 1))) ? (2147483647 + -68) : ((((4092 & 1) < (-40 || var_10)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = ((2452430464047093772 == (-2147483647 - 1)));
    #pragma endscop
}
