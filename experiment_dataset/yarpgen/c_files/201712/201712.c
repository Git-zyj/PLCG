/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_14 = (1 >> 1);
        var_15 = ((15303786942526454234 / (-32252 - 4571974645133783926)));
        var_16 = var_8;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_17 = (max(var_17, (((((0 != (max(1, -829813005520120703)))) && (-25605 - -3995412937675253698))))));
        arr_6 [i_1] = (max(((((!1) <= var_13))), ((1 >> (min(0, var_4))))));
        var_18 -= (max(829813005520120703, (max((19358 < 27), (max(239, -3995412937675253698))))));
    }
    var_19 = 829813005520120702;
    var_20 = (max((((var_5 ? -1046709593 : var_6))), (max(4061565074461919857, (50391 - 127)))));
    var_21 = (max(var_3, ((-5576024629216447162 ? (((var_6 ? 1 : var_3))) : ((var_8 ? -1 : var_1))))));
    #pragma endscop
}
