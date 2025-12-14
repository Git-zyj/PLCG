/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_5, ((var_8 ? var_8 : var_6)))) >= (1861377124 != 299665194)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_2 [i_0])));
        arr_4 [i_0] = ((-(arr_1 [i_0])));
        arr_5 [i_0] |= (((arr_2 [i_0]) + var_3));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 -= ((((((arr_7 [i_1] [i_1]) + -var_9))) ? ((min((arr_6 [0]), (max(var_14, var_5))))) : var_10));
        var_18 += (min(((~(((arr_8 [i_1] [0]) & var_5)))), (((-16628 != ((var_2 ? 48933 : (arr_7 [i_1] [i_1]))))))));
    }
    var_19 = (min(var_11, (((var_7 != (min(55784, 1832450073493269998)))))));
    #pragma endscop
}
