/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (16383 + -4909748062895608323);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -var_6;
        var_12 = (((((var_0 * 18277651867566425628) + var_0))) ? (((-255 >= ((var_2 ? var_4 : var_5))))) : 0);
        arr_3 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_13 *= var_1;
        var_14 = (max(var_14, (4909748062895608323 || -7491623874557981803)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_15 &= var_4;

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_16 ^= var_7;
            var_17 = var_7;
        }
    }
    #pragma endscop
}
