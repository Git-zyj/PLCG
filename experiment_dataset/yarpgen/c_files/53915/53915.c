/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1];
                                var_15 -= 255;
                                var_16 = (max((((var_12 >= (arr_4 [i_1 + 1])))), (min(var_1, var_5))));
                                arr_13 [i_4] [i_4] [i_0] [i_3] [i_1] [i_0] [i_0] = ((-(arr_2 [i_2] [i_4])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (max((arr_0 [i_1 - 2]), var_9));
                    var_17 *= 0;
                    var_18 = (max(var_18, ((((max((var_12 || 1977850880), (max((arr_9 [i_2 + 1] [i_2] [i_2] [i_0] [i_0] [i_0 - 3]), (arr_6 [i_0] [i_1 + 2]))))) <= (max(-12800, (arr_7 [i_2] [i_1] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((((max(8880, 1977850880))) > (max(-12787, var_5)))))));
    #pragma endscop
}
