/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 > ((-(var_5 || var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [16] [i_0] = (!var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = (-var_7 ? ((min((arr_13 [i_1] [7] [7] [7] [i_4 - 2]), (arr_13 [i_0 - 2] [i_3] [i_3] [i_4] [i_4 + 2])))) : ((var_9 ? (arr_13 [i_2] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1]) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_4 - 1]))));
                                var_13 = (arr_0 [i_4]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_11;
    var_15 = (max(269231583, ((((((4025735713 ? 4025735712 : 4025735712))) ? (-127 - 1) : 4064)))));
    #pragma endscop
}
