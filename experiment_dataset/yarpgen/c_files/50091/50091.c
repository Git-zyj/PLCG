/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_9 || var_0);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = ((max(((511 + (arr_1 [i_0] [i_0]))), (max(var_16, (arr_0 [i_0]))))));
        var_21 = ((-(min((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0 + 1]))), (arr_1 [i_0] [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = (var_7 - (((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3]) + (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 = (max(var_23, ((((!511) ? (max((min(-860149708, 0)), (1 + 13018867814798834109))) : (~1665267070))))));
                            var_24 = (~(max(1, (max(-860149708, (arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_3]))))));
                            var_25 = 1;
                            var_26 = 1913153812;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_27 = (max(var_27, ((~((1 ? -156988601 : 1))))));
                            var_28 = ((!(((~(arr_10 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_5]))))));
                            var_29 &= 5427876258910717511;
                            var_30 = (min(((((max(1, 1665267070))) ? (arr_1 [i_2 + 2] [i_5]) : 1)), (arr_12 [i_0] [i_1] [0] [i_3] [i_5])));
                        }
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            var_31 = ((((0 > (arr_7 [i_2 + 2] [i_3] [6])))) << (arr_5 [i_0] [i_3]));
                            var_32 = (min((((arr_7 [i_0 + 1] [i_2] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_3] [i_6]) : (arr_7 [i_1] [i_2 + 1] [i_3]))), (((arr_17 [i_0 + 1] [i_2] [i_6 - 3] [i_6 - 4] [i_6]) % (arr_17 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_6])))));
                        }
                        var_33 = max((((((arr_7 [i_1] [i_1] [i_3]) ? (arr_0 [i_2]) : -522)))), (((((44 ? 1 : 9104124))) ? (((!(arr_2 [i_0] [i_3])))) : 511)));
                        var_34 = ((((~(arr_1 [i_2 + 1] [i_2]))) == ((((arr_17 [i_0] [i_0] [i_0 + 1] [i_2 - 1] [i_2]) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_2 + 3] [i_0]) : (arr_10 [i_0 - 1] [i_2 + 2] [i_2] [i_0 - 1] [i_2 - 2]))))));
                        var_35 = (min(var_35, 32697));
                    }
                }
            }
        }
        var_36 += (max((((arr_17 [i_0] [i_0 - 1] [11] [i_0] [i_0 + 1]) ? (arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) : 1)), (!32859)));
    }
    #pragma endscop
}
