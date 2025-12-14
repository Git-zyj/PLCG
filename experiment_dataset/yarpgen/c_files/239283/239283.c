/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_11 / var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = 0;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_13 &= (((((arr_2 [i_0] [i_0]) ? (((arr_7 [i_1] [12] [i_1]) ? var_5 : 1576522128030106469)) : (arr_6 [i_0] [i_1]))) + (arr_6 [i_0] [19])));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (arr_6 [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 *= ((16870221945679445147 ? (~var_6) : 1576522128030106469));
                    arr_11 [i_3] [i_1] [i_0] [i_0] = (arr_1 [i_1] [i_3]);
                    arr_12 [i_0] [i_0] [i_3] [i_3] = 16870221945679445147;
                }
                var_15 = ((1 >> ((((arr_9 [i_1] [i_1] [i_1] [i_0]) >= 1576522128030106469)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] = 1576522128030106480;
                            arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = 0;
                            arr_20 [i_0] [19] [i_4] [i_0] [i_5] [i_4] = ((max(13530344791448091669, ((16870221945679445153 << (((arr_10 [1] [i_4] [i_4]) - 681658111)))))));
                        }
                    }
                }
                var_16 = (min(var_16, var_4));
            }
        }
    }
    #pragma endscop
}
