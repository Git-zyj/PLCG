/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min((min(1, var_12)), ((max(1, var_8))))), ((min(99, 5)))));
    var_14 = (min((max((max(var_0, var_2)), ((min(var_8, var_2))))), (min(((min(var_4, 0))), (min(-6077907365478711417, var_11))))));
    var_15 |= (max((max(((max(1, 51073))), (min(var_2, var_10)))), (max(((max(var_12, var_6))), (min(var_10, 51095))))));
    var_16 |= min((max((max(17031424926226479433, 10)), ((min(116, var_6))))), ((max((min(var_12, 28930)), ((max(var_5, var_9)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = (max(((max(((max(-81, var_7))), (max(5, -4349024098220312586))))), (min((min(1415319147483072183, (arr_0 [i_0]))), ((min(var_5, var_0)))))));
        var_18 = (max((min(((min(var_12, (arr_0 [i_0])))), (max(17031424926226479458, var_12)))), ((min((max((arr_0 [i_0]), 14463)), ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))));
        var_19 = min(0, (min(((max(-2972132819862451283, 1))), 1826955361744220294)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 *= (max((max((min(1, 319643742756793253)), ((max(-85, (arr_2 [i_1])))))), (max(((min((arr_2 [i_1]), 31))), (min(9078190589258954709, var_6))))));
        var_21 *= (max((max(((min((arr_1 [12] [i_1]), var_2))), (min(1, var_1)))), (min(((min((arr_2 [i_1]), (arr_1 [0] [0])))), (min(var_7, var_1))))));
    }
    #pragma endscop
}
