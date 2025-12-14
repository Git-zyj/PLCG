/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_11 = 12288;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 ^= (arr_1 [i_0]);
                        arr_10 [7] [i_1] [i_2] [i_3] = (((arr_4 [i_1 + 1] [i_1] [i_2] [8]) & (arr_4 [i_1 - 1] [i_0] [5] [1])));
                        var_13 = var_7;
                        var_14 = (max(var_14, var_1));
                        var_15 = ((-(arr_4 [2] [i_2] [6] [i_0])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_16 = ((((max((arr_3 [i_0] [i_4] [i_4]), (arr_3 [i_4] [i_4] [i_4])))) || ((max((arr_3 [i_4] [i_4] [i_4]), var_0)))));
            var_17 = (max(var_17, (arr_1 [i_0])));
        }
        var_18 += (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
