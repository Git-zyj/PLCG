/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-((max(-1, -25449)))));
    var_21 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((~(((arr_3 [i_0] [i_1] [i_1 + 2]) ? var_13 : (arr_1 [i_0]))))) * (~18446744073709551615));
                arr_6 [i_0] [i_0] = ((((arr_3 [i_0] [i_1] [i_1 + 1]) > (arr_3 [3] [i_0] [i_1 - 1]))) ? (max(18446744073709551605, -14)) : (max((255 ^ var_4), (max(103079215104, var_6)))));
                var_22 += ((arr_1 [i_0]) ? (min(2306211142966317905, var_18)) : ((var_15 ? (var_19 % var_1) : 25449)));
            }
        }
    }
    var_23 *= (16511573347890266440 | 255);
    #pragma endscop
}
