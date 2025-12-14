/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, 0));
        var_16 ^= 3265119260130523514;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 = 1;
        arr_6 [i_1] = (1 ? 1 : -116);
    }
    var_18 = var_7;
    var_19 = var_2;
    var_20 += (((((~(min(var_12, 5933399847449331076))))) ? ((((max(var_6, var_4))) | 1)) : ((var_10 ? (((-1941252440 + 2147483647) >> (34 - 16))) : ((var_1 >> (var_4 + 32427)))))));
    var_21 = (max(-115918586, 48942));
    #pragma endscop
}
