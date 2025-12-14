/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (((((0 & (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) <= (max((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_15 = (!var_3);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((-104 > ((-(var_10 != 0)))));
                }
            }
        }
    }
    var_16 = (min(-17684, (max(0, var_2))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_17 = (3500141297 + 14);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_4] [i_4] [i_4] [13] |= -19456;
                            var_18 = (188 & 2428054688716375088);
                            arr_20 [i_6] [8] [i_4] [14] = ((-(1 == 31)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_19 = ((-(arr_22 [i_3] [i_3] [i_3] [i_3])));
                            var_20 = (min((max((min(var_2, 1331751330)), (79 + var_10))), ((min(11, 0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
