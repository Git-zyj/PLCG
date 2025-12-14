/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_0] [i_0 - 1] [i_0 - 1] = (arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1]);
                            arr_14 [i_0] [i_1] [i_0] [i_0] = 5264384307851331262;
                            arr_15 [i_0] [i_1] [i_0] [i_0 - 1] [i_1] = (((~7270289947059357982) < 4611686018427387648));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_12 = 4086619348;
                                var_13 ^= -var_11;
                            }
                        }
                    }
                }
                var_14 = (5734648974928630852 ? -426782135675456572 : -5264384307851331262);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_15 = var_11;
                    var_16 = (arr_22 [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
