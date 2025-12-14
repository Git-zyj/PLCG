/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 |= (min((((((0 << (4251591938 - 4251591928))) ^ var_1))), (((3747220097428914692 & 58) ? ((min(4251591938, 0))) : 4349196038105760516))));
        arr_3 [i_0] [i_0] = ((((max(0, (arr_1 [i_0])))) - (min(9223372036854775807, 9223372036854775807))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = ((!((max((arr_4 [i_1] [i_1]), 4251591938)))));
        var_13 += ((!(arr_2 [i_1])));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = (((max(0, ((max((arr_0 [i_2]), 0)))))) && 4349196038105760519);
        var_14 = (min(var_14, ((max(((min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1])))), (arr_4 [i_2 - 1] [i_2]))))));
    }
    var_15 = ((max(var_8, (max(var_6, 13817192488763354887)))));
    #pragma endscop
}
