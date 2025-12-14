/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~-0);
    var_16 = ((((((((var_14 ? var_1 : 0))) ? (max(var_4, var_0)) : var_8))) ? var_1 : var_6));
    var_17 = (max(var_17, ((min(var_4, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max((arr_2 [i_1] [i_1]), ((8824403127962064709 ? var_1 : (arr_2 [i_0] [14]))))) == 1174354321211775132));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [3] [i_2] [i_3] = (arr_6 [i_2]);
                            arr_14 [11] [i_0] [i_1] [8] [i_3] = var_4;
                            var_18 = (max((((~(((!(arr_9 [i_2] [i_2] [i_2]))))))), (arr_2 [i_0] [i_0])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (arr_8 [1] [i_1] [1] [i_3 - 4]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
