/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (((((((arr_5 [i_0]) % 6)))) * ((max(6, 250)))));
                    var_15 = ((~(min((~6), (arr_6 [i_0] [i_0] [i_0])))));
                }
            }
        }
        arr_9 [i_0] = ((65520 ? ((~(arr_0 [i_0]))) : -1));
        var_16 *= (4 >= var_12);
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_12 [9] = ((~(((((0 ? 15 : 65529))) ? ((165 ? 1485386306 : -8190282163235392754)) : (65535 | 0)))));
        var_17 = ((~(max((arr_10 [i_3 + 2]), (arr_10 [i_3 + 4])))));
    }
    var_18 = var_1;
    var_19 = (((8190282163235392753 << 0) ? (max(var_13, 3653097884843164001)) : 65491));
    #pragma endscop
}
