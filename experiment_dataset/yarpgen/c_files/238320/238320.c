/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_3, (var_16 ^ 207))));
    var_18 = (min(var_13, 3843436639001621442));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [0] [i_2] [5] = (((~(max((arr_2 [i_0]), (arr_0 [i_0] [i_1]))))));
                    var_19 = (((arr_5 [i_2] [i_2] [i_2]) != (arr_4 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
