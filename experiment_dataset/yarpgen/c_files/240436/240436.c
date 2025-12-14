/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = (max(((12873289953612603310 | (arr_1 [i_0]))), (--2032)));
        arr_3 [i_0] = (min((arr_0 [i_0]), (max(-2145088490, 8020317067508264469))));
        var_12 = (127 - 44);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((65534 >= (3195888927 * 8020317067508264469)));
        arr_7 [i_1] [i_1] = (((((4095 ? 1570127396235735098 : 29566) * (min(-12511, 8793198684825827334))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((arr_0 [i_2]) * -1824957588));
        arr_12 [1] [i_2] = (((((arr_8 [i_2]) & (arr_1 [i_2]))) >= ((((!(arr_2 [i_2])))))));
    }
    var_13 = (((~((7608574650173350236 ? 20 : var_1)))));
    var_14 = ((min(var_5, (-12511 / var_0))));
    #pragma endscop
}
