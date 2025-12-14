/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((arr_6 [i_0 + 1] [i_1] [i_0] [i_2 - 3]) / (1201171981 | 6)));
                    arr_8 [i_0] [i_0] = (((((6 != (((6 < (arr_2 [i_1]))))))) & -10906));
                    arr_9 [i_2] [i_0] [i_0] [i_0 + 1] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3 + 1] [i_4] [i_4] = (max((((max(0, var_10)) * (arr_5 [i_0]))), ((max((arr_10 [i_0] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_4]), 65529)))));
                                var_20 = (max((((((min((arr_2 [i_0]), -21)) + 2147483647)) << 0)), (2869974555 || 0)));
                                var_21 = (min(var_21, ((((arr_11 [i_0 - 1] [i_3 - 4]) ? ((70 + (arr_14 [i_0] [i_1] [i_2 - 2] [4] [0]))) : (arr_7 [i_0] [i_0 + 1] [i_0 + 1]))))));
                                var_22 = ((((3981474908587358187 | (arr_1 [i_2 - 1]))) & 1295774598));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= var_0;
    #pragma endscop
}
