/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [4] [4] = ((((((var_2 ? (arr_1 [i_0]) : var_1)))) ? -var_1 : (!var_5)));
                arr_6 [i_0] = 1255971775;
                arr_7 [i_1] = -1923227730;
            }
        }
    }
    var_10 = (!18446744073709551612);
    var_11 = -561770285;
    #pragma endscop
}
