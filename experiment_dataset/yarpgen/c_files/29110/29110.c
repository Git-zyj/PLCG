/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((3393637065 >> (((arr_2 [i_0]) ? 100 : 0))));
        var_11 = (max(var_11, (!34336)));
    }
    var_12 = (((((230 << (((9223372036854775807 | 14742766652559499049) - 18446744073709551607))))) ? ((var_2 & (((588369842 << (158 - 134)))))) : 0));
    var_13 = var_0;
    var_14 |= 25;
    var_15 = (min(var_15, ((max((max((((var_5 ? var_2 : 65513))), (min(var_2, var_6)))), ((3821651230 ? var_6 : var_0)))))));
    #pragma endscop
}
