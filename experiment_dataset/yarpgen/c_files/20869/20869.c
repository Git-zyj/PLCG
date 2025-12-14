/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((1 ? 16856525127292869976 : var_9));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        var_14 = (max(var_14, (((18446744073709551599 ? -25572 : 62560)))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_15 = var_7;
        arr_9 [i_1] = ((-1301915877 / ((((var_6 ? -1 : (arr_5 [i_1])))))));
        var_16 ^= (min(((-8304 | (~101))), (arr_8 [i_1] [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_17 -= (((~21) ? ((var_0 ? 15 : 219)) : 0));
        var_18 &= (((min(3989601974, 1351678315))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] &= (~60157);
        var_19 = (max(var_19, ((((3170796904 & var_10) ? (arr_12 [i_3]) : (arr_13 [i_3] [i_3]))))));
    }
    #pragma endscop
}
