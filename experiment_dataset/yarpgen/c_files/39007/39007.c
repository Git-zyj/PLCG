/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] |= (((min(18446744073709551615, 31347)) & (arr_1 [i_0])));
        var_18 = (min(var_18, (2147483647 == 12)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 += ((!(((max(var_4, 1537369891))))));
        arr_8 [i_1] [i_1] = var_12;
        arr_9 [i_1] [i_1] = (((arr_6 [i_1]) > (((((~var_13) && ((((arr_6 [i_1]) ? var_0 : var_1)))))))));
    }
    var_20 = var_10;
    #pragma endscop
}
