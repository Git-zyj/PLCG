/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 *= -7262785530594327209;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = (((max((max((arr_1 [i_1]), 7851341850323229229)), (min((arr_10 [6] [i_4] [11] [i_2] [i_1] [6]), 10595402223386322386)))) >> (((!((((arr_4 [i_0] [i_0]) % var_0))))))));
                                arr_16 [4] [4] [i_2] [7] [0] [i_2] [i_2] = var_15;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [7] = (((max((((arr_7 [1] [i_1] [0]) / 10595402223386322390)), (7851341850323229225 / -29397))) <= (arr_10 [4] [5] [1] [7] [0] [4])));
                    var_17 = arr_9 [i_2];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    var_18 = -1;
                    arr_26 [i_6] [12] [i_6] [i_7] = (max(var_8, 2029155907471922614));
                }
            }
        }
    }
    #pragma endscop
}
