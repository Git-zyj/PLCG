/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = var_14;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_2 [i_0] [i_0] [i_0]) / (arr_1 [i_0])));

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                var_20 = (min(var_20, -8819706435067403239));
                var_21 = ((83 ? 39240 : 26295));
            }
        }
        arr_10 [i_0] = ((-20605 * (((arr_8 [i_0] [i_0 - 3]) | var_17))));
    }
    #pragma endscop
}
