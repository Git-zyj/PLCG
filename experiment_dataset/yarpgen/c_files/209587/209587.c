/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 159745615;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_2 [i_0] [i_0])));
        var_12 = (((arr_0 [i_0]) ? (((-1766562728 ? 24748 : 982490814))) : (((~(~65524))))));
        arr_3 [i_0] = (((((-((7448078507886999217 ? 175 : 0))))) / (min(((((arr_2 [i_0] [i_0]) ? 1 : 65523))), (arr_2 [i_0] [i_0])))));
        var_13 = (min(var_5, (min(1, 4))));
    }
    #pragma endscop
}
