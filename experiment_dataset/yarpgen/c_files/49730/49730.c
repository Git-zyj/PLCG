/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) > (arr_2 [i_1] [1])))) == (arr_1 [18] [i_1]));
                arr_4 [i_1] = ((((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0]))) << (((((arr_0 [17]) ? (arr_0 [i_1]) : (arr_1 [i_0] [19]))) - 3088586886))))) ? (((arr_1 [i_0] [i_1]) << ((10405247455754701628 ? 1 : 524711051)))) : (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0] [i_0]) : (((arr_2 [19] [i_0 + 2]) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0 + 2] [6])))))));
                arr_5 [i_1] [13] [i_0] = (((arr_0 [i_0 + 1]) << (((arr_0 [i_0 + 4]) - 3088586885))));
            }
        }
    }
    var_18 = var_0;
    var_19 = (((var_2 <= var_15) != (((var_1 + 2147483647) << (((var_6 || var_10) - 1))))));
    #pragma endscop
}
