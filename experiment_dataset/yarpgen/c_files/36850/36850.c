/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min(-1, 4294967295));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = 0;
                                var_12 *= (min((arr_9 [i_1] [i_2] [i_3] [11]), var_5));
                                var_13 = ((((min(1317236705, 147) - (arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [i_4])))));
                            }
                        }
                    }
                }
                arr_16 [i_0 - 2] [8] [i_0 + 2] &= (~(min((((arr_5 [i_0] [16] [i_1]) & (arr_4 [i_0]))), (arr_7 [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_14 += (((min((min(6, 141), (var_8 == 255))))));
    var_15 = (max(var_15, ((min(((1 ? -1317236705 : (min(62, -6846532711872424808)))), (((134 * (1 == 1317236705)))))))));
    var_16 = (251 >= var_9);
    var_17 = ((~(var_7 / -1317236706)));
    #pragma endscop
}
