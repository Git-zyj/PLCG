/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((((arr_1 [i_0]) | (~var_13))) >> ((((~((~(arr_1 [i_0]))))) - 1046))));
        var_21 *= (((arr_2 [i_0]) ? ((((min(0, -26359))) * -225)) : ((-105005373 ? (arr_0 [i_0] [i_0]) : (-1219854763 | 65535)))));
    }
    var_22 = (max((((-var_7 >= (var_15 | var_2)))), var_6));
    var_23 = 0;
    var_24 = var_5;
    var_25 = (min(var_25, ((((((!var_2) | (min(-116, var_19)))) == (~var_14))))));
    #pragma endscop
}
