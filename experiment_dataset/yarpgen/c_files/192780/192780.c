/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (((max((!var_14), (var_12 != 241))) ? 56 : var_10));
        var_19 = ((((((((42905 ? 1285248393 : (-2147483647 - 1)))) ? var_4 : ((max(5697, 42898)))))) * (min(42905, var_3))));
        arr_2 [i_0 + 1] [i_0 + 1] = (((((-(arr_1 [i_0 + 3])))) ? ((69 ? 1 : 11502414636392684045)) : (((+((((arr_1 [i_0 + 3]) != var_14))))))));
        var_20 = (max(var_20, var_10));
    }
    var_21 = var_7;
    var_22 = 1;
    var_23 = ((((((var_8 & var_14) ? var_8 : ((-40261596 ? 1 : -18))))) ? 3009718911 : (!var_12)));
    #pragma endscop
}
