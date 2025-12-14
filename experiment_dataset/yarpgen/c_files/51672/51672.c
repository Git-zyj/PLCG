/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((((((((arr_1 [i_0]) ? var_2 : var_0))) ? ((max(var_0, 248))) : (((18446744073709551598 > (arr_3 [i_2] [i_2])))))) | (((!((max(7, (arr_1 [i_1])))))))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_10 |= var_9;
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((arr_0 [i_0] [i_0]) % (10161 ^ 90));
                        arr_12 [i_1] [i_0] [i_1] [i_1] [i_2 - 3] [i_1] = ((~(((var_9 & (arr_2 [i_0] [i_0] [i_0]))))));
                        var_11 &= (((((arr_0 [i_2 + 1] [i_2 - 3]) ? (max(48816, 1253379084)) : (17328719823783840529 >= -1590480393))) <= ((((var_7 ? var_8 : 60)) * (arr_7 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    var_12 &= var_6;
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_4] = (max(10010862068193603370, 18446744073709551600));
                    arr_25 [i_4] [i_4] [i_4] |= (((136 >= 18446744073709551613) >= (((2731627069 != (13211973350515989559 & var_1))))));
                    arr_26 [i_4] [i_4] [i_4] [i_4] = 3130338283;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_13 += (var_4 > -1);
                                var_14 = ((((((arr_19 [i_4 - 1]) | (arr_19 [i_4 + 4])))) && var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
