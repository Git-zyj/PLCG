/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!8930141776175103736);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((((arr_1 [i_0]) << (((arr_1 [i_0]) - 16135414936938590713)))) | ((max(1347190719, var_12)))))));
        var_16 += (0 ? 1901601486 : 106);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (!((1 || ((!(arr_2 [i_1] [i_1]))))));
        var_17 = (((arr_2 [i_1] [i_1]) > (arr_2 [i_1] [i_1])));
        arr_5 [i_1] [i_1] = 987585583;
        var_18 = ((!((((arr_0 [i_1]) * 987585562)))));
        arr_6 [i_1] [i_1] = (((((max((arr_0 [i_1]), 2756)))) | var_13));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 ^= 12490138312682220708;
        arr_10 [i_2] = (min((((arr_1 [i_2]) ? var_9 : (987585583 - 160742480))), (((var_2 ? (1016 / var_9) : (arr_8 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((!(((12258493732068506141 ? 3307381713 : (arr_12 [1] [i_3]))))));
        var_20 = 1;
        var_21 = (((!10832667554438528385) ? (((((arr_12 [i_3] [i_3]) >= (arr_12 [i_3] [i_3]))))) : (max((arr_12 [i_3] [i_3]), var_2))));
        var_22 = (max(var_22, ((((!15366184702833513473) != var_5)))));
    }
    #pragma endscop
}
