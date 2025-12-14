/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += -1;
    var_14 = 0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 *= 1;
            arr_4 [i_1] = 63;
            var_16 -= -1;

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_17 = (max(-8121597134299244214, -24));
                var_18 = -20082;
                var_19 = (max(-15, -20082));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_9 [i_0] [i_0] [i_1] [i_0] = -20082;
                var_20 = (min(1, 1));
            }
            var_21 = 1615405943;
        }
        var_22 = (max(var_22, 53));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_23 += 127;
        var_24 = 1;
    }
    var_25 = 160;
    #pragma endscop
}
