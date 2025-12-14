/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 -= 0;
        var_15 &= -5909;
        arr_3 [i_0] = -5909;
        var_16 = (max(var_16, ((((-106 + 2147483647) >> (15367 - 15359))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (42369 + (35928 | 445962096));
            var_18 = (-26980 <= -5443371701348890035);
            var_19 *= (105 || 23166);
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_20 += 107;
            arr_10 [i_0] [i_2] = 8188;
            var_21 = (31 <= 27680);
            var_22 = (53239 == 4398046511103);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_23 = (max(var_23, 127));
            var_24 ^= 63;
            var_25 = (min(var_25, ((((57344 + 5928) & -5924)))));
        }
    }
    var_26 ^= ((-5931 >= ((99 >> (-127 + 157)))));
    #pragma endscop
}
