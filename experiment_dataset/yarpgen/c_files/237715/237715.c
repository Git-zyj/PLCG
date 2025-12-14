/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_1, var_14);
    var_18 = (min((((!var_7) ? ((var_10 ? 1383761169 : var_11)) : (((var_0 ? -21163 : var_15))))), ((1383761153 ? 2911206142 : 2147046937))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_19 ^= (min((((!(((arr_1 [i_0]) || (arr_0 [i_0])))))), -11661));
        var_20 = (max(var_20, (7 && 1498)));
        arr_2 [i_0] [i_0] = (((((((max(65528, 1383761169))) ? var_12 : (-32767 - 1)))) ? -32753 : (((!(arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_21 = ((((((~(arr_4 [i_1] [i_1]))) + 2147483647)) << (((max((31410 && 12587), ((var_14 * (arr_3 [i_1 + 2]))))) - 2109438240))));
        var_22 = ((-(!57497)));
        arr_5 [i_1 + 1] = 2415727663;
        arr_6 [i_1] = (max((((~(arr_3 [i_1 - 1])))), (~2911206121)));
    }
    #pragma endscop
}
