/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, ((((arr_1 [i_0] [18]) ? (arr_0 [i_0 - 1] [18]) : 103)))));
        var_12 = (arr_1 [i_0 + 1] [i_0]);
        var_13 = (127 ^ (arr_1 [i_0 - 1] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((var_0 + 2147483647) << (((var_0 + 22513) - 26)))) >> (var_9 <= -2692613596036878093)));
        arr_7 [i_1 - 1] = 120;
        arr_8 [i_1] [i_1 - 1] = (((arr_1 [i_1] [1]) | (((103 > (arr_0 [i_1 + 1] [1]))))));
    }
    var_14 += (min(160, (((!((((-8681 + 2147483647) >> (var_7 - 7733422199432429921)))))))));
    #pragma endscop
}
