/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = ((~(max(((16875112834375287317 | (arr_8 [i_0] [i_0] [15] [12]))), ((192 ? var_7 : (arr_6 [i_0] [i_3] [i_4])))))));
                                var_13 = max((63 ^ 1290446055), (((!6) + -42)));
                            }
                        }
                    }
                    var_14 = (arr_5 [i_0] [1] [i_0] [i_0]);
                }
            }
        }
    }
    var_15 = max(8304, (((!(65532 | 31)))));
    var_16 = 579211692963684806;
    #pragma endscop
}
