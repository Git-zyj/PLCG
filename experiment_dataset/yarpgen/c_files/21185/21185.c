/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((((((arr_0 [i_0]) < 106)))) ? (min(var_13, 149)) : ((min((arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] [i_1]), (arr_9 [1] [4] [i_2] [i_2] [i_4] [i_4] [i_2])))));
                                var_19 = ((-61 ? 60 : (((arr_5 [i_0 + 2] [i_0] [i_0] [i_0 - 3]) ? 61 : 60))));
                            }
                        }
                    }
                    var_20 -= ((((max(((((arr_10 [2] [i_1] [i_1] [i_1] [6]) ? 60 : var_9))), (arr_5 [4] [i_1] [i_1] [i_2])))) ? ((((((arr_0 [i_0 + 2]) ? var_7 : (arr_2 [i_0] [i_1] [i_1]))) != -50095))) : ((255 ? (~59) : (((arr_11 [i_0 + 1] [16] [1] [i_1] [i_2] [i_2] [14]) ? 60 : 65535))))));
                    var_21 = ((!((((arr_1 [i_0] [i_2]) ? ((min((arr_4 [1] [i_1] [i_2]), (arr_6 [i_2] [i_0] [3])))) : ((61 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0]) : (arr_12 [i_1] [i_1] [i_2] [i_0] [i_1] [1] [i_1]))))))));
                }
            }
        }
    }
    var_22 = var_10;
    var_23 -= ((var_0 << (var_14 - 1682423236)));
    #pragma endscop
}
