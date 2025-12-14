/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_3 & (!var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4 - 3] [i_0] = (max(((min((arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1]), (arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1])))), (((arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1]) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1]) : (-32767 - 1)))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((~((-939369369 & (arr_5 [i_0] [i_2 + 1] [i_2 - 1])))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = (max(((-(((arr_4 [0]) ? -15313 : 17602637631718823884)))), ((((arr_5 [i_0] [i_2 + 2] [i_2]) & (arr_8 [1] [i_2 + 2] [i_0]))))));
                    arr_16 [i_0] [i_0] [i_2] = ((15035 ? ((min(15308, 33443))) : 1645166370));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_22 [i_5] = 58886;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [i_5] [1] [i_5] [1] [i_5] = -74;
                            arr_28 [i_8 - 2] [10] [i_6] [i_5] = (!-1645166369);
                        }
                    }
                }
            }
        }
    }
    var_12 = 15313;
    #pragma endscop
}
