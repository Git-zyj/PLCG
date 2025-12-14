/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max((max(var_7, (min(3743728506, 18446744073709551615)))), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = ((((arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1 + 1]) || var_4)));
                                arr_12 [i_0] = (((arr_2 [i_4 - 1] [i_1 - 1] [i_1 - 2]) < (min((arr_2 [i_4 - 2] [i_1 + 1] [i_1 + 2]), var_3))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [8] |= ((~((((max(255, 255))) / (var_0 || var_5)))));
                                var_14 = ((var_3 | ((((max(var_11, var_0))) ? (max(var_0, var_7)) : 9770811313815030277))));
                            }
                        }
                    }
                    var_15 = ((~(((8540474648852309760 <= (arr_3 [i_1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
