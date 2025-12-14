/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_18 % var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (--4096);
        var_22 = ((((((~(arr_2 [i_0] [i_0]))) | (max(-10144, (arr_0 [i_0]))))) % ((((((7307622491081381847 ? (arr_3 [19]) : (arr_0 [i_0])))) < (((arr_1 [i_0]) ^ 67092480)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = (max(0, ((113 ? 1 : 67092480))));
        var_24 = ((((67092480 ^ (!-5944903464687947281))) <= (((12138 ? (var_7 <= var_2) : (((12199303379172822250 == (arr_0 [i_1])))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_25 = (!1848187341);
        var_26 = ((1 ? (arr_2 [9] [i_2]) : 7307622491081381838));
    }
    #pragma endscop
}
