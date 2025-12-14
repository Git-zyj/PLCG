/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 += (((0 / 18446744073709551612) * (arr_1 [i_0])));
        var_12 = (max(var_12, ((((arr_1 [i_0]) ? var_5 : ((0 ? 71987225293750272 : (-32767 - 1))))))));
        arr_4 [i_0] = -58;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_13 &= max((arr_7 [i_1] [20]), (((229 != (arr_5 [i_1])))));
        var_14 = (min(var_14, ((((((-119 ? -125 : 10007))) && 4662002)))));
        var_15 ^= 32767;
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_16 ^= (arr_8 [i_2 + 1]);
        var_17 ^= ((-(max(13542, -388063814))));
        var_18 = (arr_10 [i_2 + 1] [i_2 - 3]);
        arr_11 [i_2] = (!1);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_19 = (arr_7 [i_4] [i_3]);
                arr_17 [i_3] = (((max((min((arr_10 [i_3] [i_4]), var_3)), (((arr_9 [i_4] [i_3]) ? 10 : (arr_6 [i_3] [i_4]))))) + (((min(24, 12288))))));
                arr_18 [i_3] [i_3] [i_4] = (((var_1 ? (((arr_1 [i_3]) % (arr_14 [2] [2]))) : (((max(66, -32744)))))));
                var_20 = 0;
            }
        }
    }
    var_21 &= var_0;
    var_22 = 6342;
    #pragma endscop
}
