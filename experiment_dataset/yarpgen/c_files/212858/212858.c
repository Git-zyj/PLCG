/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (((arr_1 [i_0]) * 0));
        var_15 += (!var_2);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 += (((arr_4 [i_1] [i_1]) ? 42810 : 1940788502312975324));
        var_17 = (arr_4 [i_1] [i_1]);
        var_18 += ((-(arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((((var_12 ? 1 : var_9)) == (((19549 ? (arr_9 [i_2]) : 19549))))))) == ((((min(-1998259388575937690, (-2147483647 - 1)))) ? 4294443008 : (((86 ? (arr_7 [i_2]) : (arr_6 [i_2]))))))))));
        var_20 += (((((!(((var_1 ? var_3 : var_9)))))) / ((var_0 ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2])))));
    }
    var_21 = ((min(var_5, (!var_0))));
    #pragma endscop
}
