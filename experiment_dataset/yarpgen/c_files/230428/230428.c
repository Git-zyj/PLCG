/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        var_21 ^= (((arr_2 [i_0]) < (arr_2 [i_0])));
    }
    var_22 = var_4;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_23 = 7936;
        var_24 = (((arr_3 [i_1]) / (arr_0 [i_1])));
        var_25 = -1719668709;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_26 = 0;
        arr_9 [18] &= ((((((-8681515479757643860 ? -15577 : 4168488607603383200)))) ? 85 : ((((var_15 <= (arr_8 [i_2])))))));
        var_27 = (arr_8 [i_2]);
        arr_10 [i_2] [i_2] = (-2128074106 <= 8681515479757643860);
        var_28 = (-85 & 0);
    }
    #pragma endscop
}
