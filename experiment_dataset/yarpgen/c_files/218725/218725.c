/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((max(((((min(var_13, 1))) ? (arr_1 [i_0]) : ((~(arr_3 [3]))))), (arr_1 [i_0]))))));
        var_15 = (max(var_15, var_5));
        var_16 *= (arr_3 [i_0]);
        var_17 += (((arr_3 [i_0]) ? ((32763 ? -4096 : 16383)) : var_13));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_0 [i_1] [i_1])));
        var_19 &= (1 / -32754);
        var_20 *= (min((min(-var_1, (min(var_3, 3672088562288511910)))), (((16377 ? 1760500339 : 9395)))));
        var_21 = (min(var_21, (arr_2 [i_1])));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_22 = (max(var_22, 32761));
        var_23 = (min(var_23, ((((((4077 % (4294967274 & 49152)))) && var_4)))));
    }
    var_24 &= (((min(((var_3 ? var_12 : 33886)), (min(var_10, 1)))) & (!-var_12)));
    var_25 = (min(var_25, ((max(24, ((var_9 ? (32753 & var_7) : var_6)))))));
    #pragma endscop
}
