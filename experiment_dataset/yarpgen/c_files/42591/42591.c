/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-var_6 % -1) >= ((~(min(1, var_8))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((max(1, 0)) ? ((((((~(arr_0 [i_0] [i_0]))) > -268435200)))) : 0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = ((16256 / (((2147483647 != (1 ^ 1))))));
                            var_20 = 15;
                            var_21 = ((!((((arr_13 [i_4]) ^ 4)))));
                            var_22 -= 29874;
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5 + 1] [i_5] = (((9223372036854775807 ^ 9223372036854775807) ? 2185584610 : ((min(1, (0 % 41))))));
                            var_23 = (arr_2 [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_24 ^= (min((min(2185584610, 0)), (((((((arr_6 [i_0] [i_1] [i_1]) ? (arr_18 [i_0] [i_1] [i_1] [i_2] [1] [i_6] [i_6]) : (arr_6 [i_0] [i_0] [i_0])))) ? (arr_6 [i_3 - 1] [i_1] [i_0]) : 244)))));
                            var_25 = (min(var_25, 46101));
                        }
                        var_26 = (arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_3 + 1]);
                        var_27 = ((!(((-1136560736 ? 240 : 5682095018306980368)))));
                    }
                }
            }
        }
        var_28 += (((255 - 9223372036854775807) | ((((((arr_15 [i_0] [i_0] [i_0] [i_0] [7] [i_0] [i_0]) ^ 147)))))));
    }
    #pragma endscop
}
