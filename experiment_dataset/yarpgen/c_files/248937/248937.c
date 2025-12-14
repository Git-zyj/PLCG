/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((-395953323 && -395953323), (min(var_0, -395953323)))) << ((((((min(9972, 46078))) ? var_4 : var_5)) - 4126307372))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_0] [i_0]) * -395953323));
                var_12 = -395953326;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_2] [i_0] [i_0] [i_1] [i_0 - 2] = ((-395953323 + 2147483647) >> (2147483647 - 2147483640));
                                var_13 = var_2;
                                var_14 = ((((((((var_3 << (-395953341 + 395953341)))) ? (((-(arr_9 [i_0] [i_0] [i_0])))) : (((arr_0 [i_2]) | 395953323))))) ? ((395953322 * (arr_13 [i_0] [i_1 + 1] [i_0]))) : ((-(((arr_10 [i_0] [i_0] [i_2] [i_3] [i_4]) / -395953323))))));
                            }
                        }
                    }
                }
                var_15 = (max((arr_8 [i_0] [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    var_16 = min(((~(-395953305 + -395953322))), var_4);
                    arr_24 [i_5] [i_7] = ((-395953341 ? var_1 : (((((var_0 ? 395953361 : 1876503596)) / (arr_18 [i_6 - 3] [i_6 + 1] [i_7 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
