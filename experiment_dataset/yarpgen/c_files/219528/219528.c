/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = var_10;
                                arr_14 [i_0] [1] [i_4] [i_3] [i_2] [13] = (max(((-((1 ? 15060 : -7)))), ((((min(127, 2397636070))) ? var_9 : var_3))));
                            }
                        }
                    }
                    var_15 = (min(var_15, 31));
                    var_16 = (max(var_16, ((max((((var_5 ? 0 : (arr_12 [i_0] [i_1 - 1])))), (((arr_12 [i_0] [i_0]) + var_10)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_17 = (max(var_17, ((max(1119002681, (max(((1 ? -2079517726548812857 : var_6)), -4724)))))));
                    arr_21 [i_6] [i_5] = (max(197, -184453023));
                }
            }
        }
    }
    #pragma endscop
}
