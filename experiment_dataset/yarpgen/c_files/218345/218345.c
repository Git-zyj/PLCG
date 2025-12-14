/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_9;

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_13 &= (arr_6 [i_0] [i_0] [i_2] [i_3]);
                        var_14 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_13 [i_2] [i_1] [i_0] = (!(arr_9 [i_0] [i_0] [i_0] [i_0]));
                        arr_14 [i_0] [i_0] [i_4] = 355683514;
                    }
                }
            }
        }
    }
    var_15 = (min(((min(var_8, var_5))), var_9));
    var_16 = max((!var_10), (max((!var_11), var_2)));
    #pragma endscop
}
