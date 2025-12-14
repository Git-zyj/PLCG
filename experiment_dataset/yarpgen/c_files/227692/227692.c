/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_1 ? var_3 : var_5))) ? (-32767 - 1) : var_1));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : (((-32767 - 1) % (arr_0 [i_0])))))) ? (((((arr_1 [i_0]) << (var_10 - 90))) | ((max(255, 43745))))) : ((min((max((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1]))), (arr_1 [i_0 - 1])))));
        arr_3 [2] = 1;
        arr_4 [10] [i_0] = (max(((((arr_0 [i_0 + 2]) == (arr_0 [i_0 + 2])))), 96));
        var_12 = (min(var_12, (((5920211387750493369 ? -8896904852263789394 : 133169152)))));
    }
    var_13 = (min(var_13, ((max(var_9, ((max(((max(32767, 22))), var_5))))))));
    var_14 = var_8;
    #pragma endscop
}
