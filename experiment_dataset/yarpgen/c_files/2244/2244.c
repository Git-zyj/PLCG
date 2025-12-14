/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+(min((var_2 + var_1), (~var_0)))));
    var_13 += 17086351319898077651;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 ^= var_3;
                            arr_11 [22] [i_0] [i_1] [i_2] [i_1] [i_4] = (var_5 >= var_3);
                        }
                        var_15 |= ((3850947881 ? 1475895069 : 0));
                        var_16 = ((-(116 * 10821679309292406377)));
                        var_17 = var_6;
                    }
                }
            }
        }
        var_18 = (+(((arr_6 [i_0]) - (arr_10 [i_0] [i_0] [11] [i_0] [i_0]))));
    }
    #pragma endscop
}
