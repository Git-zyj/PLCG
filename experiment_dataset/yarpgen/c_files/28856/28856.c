/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_3 ? ((min((var_18 == 5295602928175362060), var_9))) : 127);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = min((arr_1 [i_0 + 3]), (min((3572467766 && var_16), 3572467768)));
        var_21 = ((((((((arr_0 [i_0 + 1]) ? var_10 : (arr_0 [i_0])))))) == var_15));
        var_22 = (((((-(arr_1 [i_0 + 2])))) ? var_8 : ((~(var_4 != 2958725659)))));
    }
    var_23 = ((((((!((min(var_4, var_3))))))) ^ var_0));
    var_24 = ((3572467787 << (var_15 - 208)));
    #pragma endscop
}
