/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((-var_3 - (var_7 - 15)))))));
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (min((max(var_7, var_8)), var_2));
                    var_13 = ((max(15, -9133974465580056547)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (min(var_14, (!1)));
                        var_15 *= 32767;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_4] [i_4] [4] [i_1] [i_4] [i_0] = ((((max((arr_8 [i_0] [1] [11] [11] [i_4] [i_2]), 32767))) ? var_10 : 96));
                        var_16 = ((!(!1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
