/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? ((((4139242455386574938 != var_15) ? var_7 : var_14))) : (min((var_11 != var_6), ((var_5 >> (var_6 - 2816003425)))))));
    var_17 = (min(var_17, (((var_6 == ((min(var_0, (min(65535, var_10))))))))));
    var_18 = ((var_2 ? (((1 >> (2147483647 - 2147483630)))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((-(min(((4139242455386574939 ? (arr_4 [8] [i_0 + 3] [0]) : 65521)), ((-(arr_2 [i_0] [i_0])))))));
                arr_7 [i_0] [1] = ((-((max((arr_1 [i_0 + 3]), (arr_1 [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
