/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((~((-1 ? 0 : 17)))) - (((max(var_1, 24455))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = 6086628314581656283;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 += var_4;
            var_22 = (arr_1 [i_1] [i_0]);
            arr_5 [i_0] = 0;
            arr_6 [i_0] [i_1] = 0;
        }
    }
    var_23 = ((-5 != (max(var_12, var_18))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_24 = (23 > 1720577206);
        arr_10 [i_2] [i_2] = (((((6086628314581656283 ? 6086628314581656283 : (arr_4 [i_2] [i_2])))) ? (((!(arr_1 [i_2] [i_2])))) : (((((max(11295, 16352))) >= 65525)))));
        var_25 = (((((max(-3360, (arr_7 [i_2]))))) >= (((arr_7 [i_2]) ? (arr_7 [i_2]) : 6086628314581656283))));
        var_26 = (arr_7 [i_2]);
    }
    var_27 += var_9;
    #pragma endscop
}
