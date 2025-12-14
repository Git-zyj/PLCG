/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_18 |= (1 || 7);
        arr_4 [1] [1] = (((((~(arr_3 [i_0 + 1] [i_0 + 1])))) ? -251754830 : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((max(13644, 251754829)));
        var_19 = (max(67108736, 251754829));
    }
    var_20 = 251754829;
    var_21 = (((((251754829 & var_17) << (((35077 | -1362415217) + 1362380405))))) ? ((((-67108751 && 1) > (max(251754837, 1))))) : (((var_5 && (-67108736 < 65523)))));
    #pragma endscop
}
