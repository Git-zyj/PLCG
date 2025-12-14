/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [22] |= (max((((((min(239, (arr_0 [19] [i_0])))) || 6034710506866849852))), ((~(min(-5260756510976168750, -1261853628))))));
        arr_4 [i_0 + 3] = ((((max((arr_0 [i_0 - 1] [i_0 + 3]), 1261853627))) == (min((arr_2 [i_0 + 1] [i_0 - 2]), (arr_2 [i_0 + 2] [i_0 + 3])))));
        var_11 ^= (arr_0 [i_0] [i_0]);
        var_12 = (max((!1), ((((var_5 ? (arr_1 [i_0]) : 232542776)) / var_7))));
        arr_5 [0] = ((arr_2 [i_0] [i_0]) / 58364);
    }
    #pragma endscop
}
