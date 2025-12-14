/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = -7882320771147335138;
        var_20 -= -var_18;
        var_21 = (((0 || 8) >= (max(var_15, (arr_1 [i_0])))));
        arr_3 [i_0] = ((min(-2426443833995986879, 18446744073709551604)) << (((min(-99, (arr_0 [i_0]))) + 7328886445079886472)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [0] = var_0;
        arr_8 [i_1] = (((arr_1 [i_1 - 1]) || var_3));
        arr_9 [i_1 - 1] [i_1] = (arr_6 [i_1 - 1] [1]);
        var_22 -= -7328452047307284921;
    }
    #pragma endscop
}
