/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 882071016;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = ((min(393663739576161195, ((min((arr_0 [14] [i_0]), (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [7] = max((((((((arr_0 [i_0 - 1] [i_0]) == var_2))) == (arr_0 [i_0 - 2] [i_0])))), (!var_1));
        var_20 = (((((((!(arr_1 [i_0] [1])))))) == 18053080334133390420));
    }
    var_21 = (((246 || 18053080334133390420) && (393663739576161195 || 393663739576161196)));
    var_22 = (((32767 == 16005020661825101799) == (max(var_2, (((560 ? var_13 : 0)))))));
    #pragma endscop
}
