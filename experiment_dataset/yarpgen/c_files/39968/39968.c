/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (arr_4 [2] [5] [11]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] = 2230456506354330676;
                                var_22 = (((((arr_7 [i_3 - 1] [i_2] [i_2] [i_2] [i_1]) <= (arr_7 [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3]))) ? 22075 : ((~(arr_7 [i_0] [i_2] [i_2] [i_3] [i_4])))));
                                arr_12 [i_4] [i_1] [i_2] [i_4] [i_3] [i_2] [i_4] = 1;
                                var_23 = (((-506417020047279671 + 9223372036854775807) << ((((arr_1 [0]) ? (arr_6 [i_0] [i_4]) : (arr_3 [i_0]))))));
                            }
                        }
                    }
                    var_24 = (((-506417020047279673 ? (arr_0 [i_0]) : 1)));
                }
            }
        }
    }
    var_25 = var_4;
    var_26 = (var_6 ^ var_12);
    #pragma endscop
}
