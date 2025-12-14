/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 50273;
    var_15 = (max(var_15, (50273 << 0)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = ((+(((arr_0 [i_0 - 1] [i_0 + 1]) / (arr_0 [i_0 + 1] [i_0])))));
        var_17 &= (~2187595186863817348);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((-(arr_7 [i_0 + 1]))) - (arr_7 [i_0 + 1]))))));
                    arr_10 [i_0] [8] = ((((max((arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]), var_10))) ? var_1 : ((((arr_5 [i_0 + 1] [i_0] [i_0 + 1]) ? 1 : (-2147483647 - 1))))));
                }
            }
        }
        var_19 = var_7;
    }
    var_20 = ((3093754680 ^ 2187595186863817348) ^ (~15246));
    var_21 = (max(26618, 28348));
    #pragma endscop
}
