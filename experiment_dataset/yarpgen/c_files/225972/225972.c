/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [0] [i_3] [i_1] = (((max(2428965469693222903, 61746)) - 1860379134));
                                arr_14 [i_0] [i_1 + 1] [i_2] [4] [i_2] [i_4] &= ((-((-(max(-21, -222882650))))));
                            }
                        }
                    }
                }
                var_11 = (((+-222882629) < -15379));
            }
        }
    }
    var_12 |= (((((-(45542 >= 93)))) > var_4));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    var_13 = 168997776;
                    var_14 = ((min(-15388, 4294967281)));
                    var_15 = 39;
                    var_16 -= (!7145514257870292542);
                    var_17 = ((min(222882649, -82)));
                }
            }
        }
    }
    var_18 -= 222882650;
    var_19 = 15379;
    #pragma endscop
}
