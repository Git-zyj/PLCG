/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((-(var_6 != var_12)));
        var_15 = (((min(((var_7 ? var_11 : var_8)), (((!(arr_0 [i_0 - 1] [i_0])))))) != (~var_4)));
        arr_3 [i_0 + 1] = ((!(((var_11 ? var_12 : (arr_0 [i_0 - 1] [i_0 + 1]))))));
        arr_4 [i_0] = (min((!-31), 27146));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((max(var_3, (var_9 != var_0)))) ? ((-(min((arr_6 [i_1]), var_8)))) : (((!(((var_13 ? var_0 : var_10))))))));
        arr_8 [i_1 + 1] = (min((max((((!(arr_5 [i_1])))), (max(var_6, var_5)))), var_14));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_16 = (((arr_1 [i_2]) & ((((((~(arr_9 [i_2])))) && -var_3)))));
        arr_11 [i_2] [i_2] |= arr_9 [i_2];
        arr_12 [i_2] = ((!((max((((var_2 && (arr_0 [i_2] [i_2])))), (((arr_10 [i_2]) & (arr_6 [i_2]))))))));
        var_17 = (((min((arr_5 [i_2]), var_3)) != (~var_8)));
    }
    var_18 &= ((((((var_6 & var_11) & var_6))) ? var_4 : ((~(~var_10)))));
    #pragma endscop
}
