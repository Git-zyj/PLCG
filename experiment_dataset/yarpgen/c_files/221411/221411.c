/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 31;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((var_8 >= ((max(((15415 ? var_9 : var_0)), (arr_3 [i_0]))))));
        var_17 -= ((((((((var_6 ? 65533 : (-32767 - 1)))) ? var_11 : -var_13))) ? 0 : (((var_10 ? var_7 : var_13)))));
        var_18 &= ((((arr_2 [22]) ? (max(var_14, var_9)) : (arr_3 [8]))));
        var_19 *= ((!(var_0 - -1)));
        var_20 = (min((((arr_0 [i_0]) | -1376778705)), (max(var_2, (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((~((var_4 ? var_13 : var_15))));
        var_22 = 65524;
        var_23 = (max(3105983816370963263, -9223372036854775806));
        var_24 = ((~(((((min(53, 55))) > 1)))));
    }
    #pragma endscop
}
