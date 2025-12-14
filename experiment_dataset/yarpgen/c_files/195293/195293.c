/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0 + 2] = 232;
        var_12 = (-(arr_3 [i_0 + 1]));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 ^= (arr_6 [i_0 + 1]);
            arr_7 [8] = 44;
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = (min(var_14, 85));
        arr_10 [i_2] [i_2] = ((~(min(-85, (arr_8 [i_2])))));
        var_15 = (max(var_15, ((max((((-(arr_8 [i_2])))), (((((arr_9 [i_2]) + 9223372036854775807)) << (((~-85) - 84)))))))));
        var_16 = (arr_8 [i_2]);
        var_17 *= ((!((((3544940284 >> (((arr_9 [i_2]) + 1165273463287067609)))) <= (-25057 / -467493731)))));
    }
    #pragma endscop
}
