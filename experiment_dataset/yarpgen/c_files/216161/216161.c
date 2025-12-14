/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((~(~2722213991)));
    var_21 = max(8, ((min(((max(var_1, 1))), (~-51)))));
    var_22 = (max(var_22, (((((((47371 ? var_11 : var_5)))) ? ((((!(((-43 ? var_10 : var_5))))))) : ((~(~-2864610523728308604))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -2864610523728308591;
        var_23 |= (((arr_1 [i_0]) ? 47371 : (arr_0 [i_0] [i_0])));
        var_24 = 2646046268664837999;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_25 = (min(-247, ((~((18184 ? -2864610523728308621 : 9))))));
        arr_6 [i_1] [i_1] = 253;
        arr_7 [i_1] = ((((~((1258356862 ? 2864610523728308565 : (arr_3 [i_1]))))) <= (((arr_4 [i_1]) ? ((min((arr_4 [i_1]), (arr_3 [i_1])))) : 7826981837578643582))));
    }
    #pragma endscop
}
