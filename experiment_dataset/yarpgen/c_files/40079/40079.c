/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_6 ? (min((0 - var_5), 69)) : var_3));

    for (int i_0 = 4; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, ((max(-1, (((arr_0 [i_0 - 4]) / (arr_2 [i_0 + 1] [i_0]))))))));
        arr_4 [i_0] = (min(((min((arr_3 [i_0] [i_0]), 29))), ((((arr_1 [i_0 - 3]) != (arr_1 [i_0 + 4]))))));
        arr_5 [i_0] = (255 + 142);
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [15] [i_1] = (arr_7 [i_1 - 1]);
        var_12 = (max(var_12, ((((arr_2 [i_1 - 3] [i_1 + 1]) < (arr_0 [i_1 - 3]))))));
    }
    #pragma endscop
}
