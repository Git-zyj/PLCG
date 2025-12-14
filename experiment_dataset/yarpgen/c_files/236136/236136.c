/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = 6737912532623776539;
                    arr_7 [i_2] = var_3;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = (4398046511103 ^ 1073741823);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_17 = (-6045148666077115586 % (arr_14 [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 + 1]));
                                arr_15 [i_0] [3] [4] [14] = (((((arr_12 [i_5] [i_3] [i_3] [i_5] [i_3] [i_1]) / -6737912532623776534))) ? (arr_5 [i_3] [i_5]) : (~var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [9] [i_3] [i_6] [i_7] = -6737912532623776540;
                                var_18 = (555625730478877631 % (arr_17 [i_0] [i_0] [i_0] [3]));
                            }
                        }
                    }
                }
                arr_22 [i_0] = ((!var_5) ? (arr_8 [i_1] [12] [i_0] [i_0]) : var_8);
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
