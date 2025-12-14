/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_0));
    var_11 = (max(var_11, var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((((arr_3 [i_0]) ? 293997860 : (arr_3 [i_0]))) << (0 * 31266)));
        var_13 = (max(var_13, (((13148562307543921321 >= (-127 - 1))))));
        arr_4 [i_0] = -785880615505875898;
        arr_5 [2] [2] = (((((-(arr_2 [i_0])))) > (((max(var_9, (arr_0 [i_0] [16]))) << (var_3 != 3787457043)))));
        var_14 = ((((!(arr_3 [i_0]))) ? ((min(4294705152, (5055328171135296877 > var_7)))) : ((min((arr_0 [i_0] [i_0]), var_2)))));
    }
    #pragma endscop
}
