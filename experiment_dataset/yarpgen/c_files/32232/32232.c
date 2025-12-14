/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [8] [8] [i_3] = ((min((~2520245286237239610), (arr_1 [i_3]))));
                            var_14 = (arr_4 [i_0] [i_0] [i_2]);
                            var_15 = (max(var_15, ((min(2269679434, (((min(2520245286237239626, var_9)))))))));
                        }
                    }
                }
                var_16 = (max((((-8988563326115873864 - var_9) - (min(-2520245286237239602, -2520245286237239610)))), (((arr_5 [7] [i_1]) / (min(-2520245286237239612, (arr_5 [i_0] [2])))))));
                arr_11 [4] [i_1] [i_1] = 2655818118;
                var_17 = ((var_9 ? var_5 : (arr_7 [i_0 - 2] [i_1] [i_1] [8])));
                arr_12 [1] = (((-2520245286237239623 - 24) - var_7));
            }
        }
    }
    var_18 = 16384;
    var_19 += -var_10;
    var_20 &= ((1778272607 ? ((((!((min(288229826395897856, var_11))))))) : (max((var_10 - 4398046511103), 7428))));
    var_21 = var_11;
    #pragma endscop
}
