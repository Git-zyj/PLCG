/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (((var_4 / var_2) ? (var_0 <= -18346) : (var_0 < var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 ^= (((((arr_5 [i_0] [i_0 - 1] [6]) % (arr_5 [i_0] [i_0 - 1] [6]))) < (arr_3 [12])));
                    var_21 ^= (((((arr_5 [i_0] [i_1] [2]) + 2147483647)) << (((((arr_5 [i_1] [i_1] [2]) ? (arr_5 [i_0 + 1] [i_1] [0]) : 2203268022)) - 4294963562))));
                    var_22 = 14374140989142624652;

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0 - 1] = arr_8 [i_1];
                        var_23 ^= (((arr_7 [4] [i_2] [i_3]) ^ 983));
                    }
                }
            }
        }
    }
    #pragma endscop
}
