/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((-(min(var_2, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_0] [0] [i_2 - 1] [i_1] [i_0] [i_0] = (max((((~(arr_6 [i_0])))), (((arr_8 [i_0] [i_1 - 3] [i_0]) & ((~(arr_13 [i_3] [1] [i_0])))))));
                                var_15 = var_5;
                                var_16 = (max(((~(arr_10 [i_0] [i_0 - 1] [i_0]))), (((-100 + ((max(22444, (arr_4 [i_0] [i_3] [i_0])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = (arr_0 [i_0]);
                                var_18 = 100;
                                var_19 = (((((((~(arr_7 [i_1] [i_1] [6])))) ? -1035823443 : (arr_5 [i_5 + 1]))) < 4294967281));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_20 = 99;
                        var_21 = (65535 || 0);
                        var_22 *= 1;
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_23 = ((65507 ? -6067167722381009017 : -159425735));
                        arr_26 [i_0] [i_2 + 2] [13] [i_0] = (((((((arr_25 [i_8] [i_0] [i_1] [i_0] [i_0 - 1]) ? var_5 : var_13))) || (arr_3 [i_8] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_24 = (min(var_24, var_2));
                        var_25 = (max(var_25, (arr_27 [i_9] [i_9])));
                        var_26 = ((6067167722381009020 ? 562949953404928 : 0));
                    }
                }
            }
        }
    }
    var_27 = (max(var_10, ((((((99 ? var_9 : 37))) ? 6446500815078567113 : (((max(var_12, 30860)))))))));
    #pragma endscop
}
