/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(7874310368960604009, var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((~var_13) != 10572433704748947622));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 += (arr_1 [15] [i_1]);
            var_18 = var_1;
            var_19 = (max(var_19, (var_6 | -7065375433624617736)));
        }
        var_20 = 3513682212155852363;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = ((((((!(arr_1 [i_2] [i_2]))))) <= 11321822921421422928));
        arr_9 [i_2] [i_2] = ((~(~1)));
    }
    #pragma endscop
}
