/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = ((((min((arr_1 [i_0]), (arr_3 [i_1] [i_1] [i_1])))) ? ((-((132 ? 0 : (arr_3 [1] [i_0] [i_1]))))) : ((var_3 ? var_4 : (arr_3 [i_0] [i_1 - 1] [i_1 - 1])))));
                var_11 = (i_0 % 2 == 0) ? ((min(0, ((0 >> (((arr_2 [i_0] [i_0]) - 378262856))))))) : ((min(0, ((0 >> (((((arr_2 [i_0] [i_0]) - 378262856)) - 3884102843)))))));
                var_12 = ((max(((-1044559938 / (arr_1 [i_0])), ((max(0, 49)))))));
                var_13 += (((~-var_4) ? (1 < 4190538248) : (29 != var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (-68 - -50);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] [i_4] = ((max(-30, 798102816)) >> (min(var_8, (max(3703803247, var_8)))));
                                var_15 = 2075451567;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((min(var_2, 231991242)) >> (60 - 37)))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((-(min((arr_8 [i_1] [i_1] [i_2]), (((arr_6 [i_0] [i_0] [i_2]) ? var_8 : (arr_2 [i_3] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((max(1, -17)), 754396728));
    #pragma endscop
}
