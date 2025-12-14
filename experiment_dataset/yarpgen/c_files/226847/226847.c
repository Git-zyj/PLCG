/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, var_2));
        arr_2 [i_0] = (((arr_0 [i_0]) / (arr_1 [i_0])));
        var_15 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_1));
        var_16 |= (arr_1 [10]);
    }
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((1 > 1) & (((arr_5 [11]) ? 7055971650486349685 : 40))))) ? ((max((max(var_6, var_9)), var_5))) : ((((max((arr_4 [1] [i_1]), 11511100495221751311)) == ((((var_4 >= (arr_11 [i_1] [i_1 - 1] [6] [i_1])))))))))))));
                            arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = (((arr_1 [i_3]) ? (min((7055971650486349685 != 1619461168236620532), ((var_1 + (arr_11 [i_2] [i_3] [i_3] [i_1]))))) : ((+(((arr_8 [i_4 - 1] [i_3] [4] [4]) ? 63 : (arr_9 [i_3] [i_3] [i_3])))))));
                        }
                    }
                }
                arr_14 [i_1 - 1] [i_2 - 1] [i_1 - 1] = (((((arr_3 [i_1 - 1]) ? (arr_11 [i_1 - 1] [10] [4] [i_2 + 2]) : (arr_3 [i_1 - 1]))) ^ (((32256 - (arr_0 [16]))))));
            }
        }
    }
    #pragma endscop
}
