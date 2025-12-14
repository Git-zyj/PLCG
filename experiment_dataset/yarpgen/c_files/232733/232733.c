/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (((max(-43, 16341))) ? ((((max(var_0, 0))) ? 2147483647 : (arr_0 [i_0]))) : (arr_0 [10]));
        arr_3 [8] |= (var_8 & var_12);
    }
    var_15 = (((((min(11042897069272858840, (-2147483647 - 1))))) ? ((max(-1610545056, 1610545055))) : ((-var_0 ? (((min(var_3, var_5)))) : (min(8225453649099976088, -862586088))))));
    var_16 = min(((~(~var_10))), var_1);
    #pragma endscop
}
