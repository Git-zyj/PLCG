/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (~12);
        var_14 = (0 % 2110471927197294619);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 ^= (-237110659 || -237110659);
        var_16 += (min(12, 101));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_17 = (min(var_17, 1));
            arr_9 [i_2] [2] = ((6895206985546512035 ? 933375124 : 1));
            arr_10 [3] [i_3] |= ((1918721269 ? 1066918908354549264 : 1918721269));
            arr_11 [i_2] = 127;
        }
        arr_12 [i_2] [i_2] |= ((-13 ? 4293918720 : 236));
        var_18 += (1 ? -1005437582 : 4399760149183407757);
    }
    var_19 = var_4;
    #pragma endscop
}
