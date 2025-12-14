/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 ^= var_5;
                    var_13 = (((((6536327616519767174 ? (arr_7 [i_2] [i_2 - 2] [i_2]) : (arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2])))) ? (arr_1 [i_2]) : (((arr_1 [i_2 - 1]) ? (var_11 && 3941342191) : ((var_7 ? (arr_5 [i_0] [i_0] [i_2]) : -22736))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_14 = (max(var_14, (var_10 - 65530)));
                        var_15 = ((1 ? (arr_2 [i_1]) : (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1])));
                    }
                    arr_12 [i_0] [i_0] [i_2] [i_1] = ((-1719755150 - (--785125290)));
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
