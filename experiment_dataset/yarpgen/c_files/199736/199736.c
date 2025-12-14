/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_10 = (min((((((max(730386980, 792759682820454511))) || ((!(arr_0 [5])))))), var_8));
        var_11 = ((((max((arr_0 [i_0]), 792759682820454500))) ? (arr_1 [i_0]) : (min((max((arr_2 [i_0] [i_0]), -5697253379554515454)), ((max(1, 2457960399)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] |= -792759682820454500;
        arr_8 [i_1] [i_1] = -1;
        arr_9 [i_1] = (min(-792759682820454524, var_6));
        arr_10 [i_1] = (min(1797550553, 792759682820454495));
        arr_11 [i_1] |= (min(-87, 369286176));
    }
    var_12 = var_7;
    #pragma endscop
}
