/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2272904849;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (arr_0 [2]);
                arr_6 [i_1] [i_0] = (((arr_2 [7]) <= (~2272904826)));
                var_21 |= ((!((((((2022062447 ? (arr_2 [8]) : (arr_1 [2] [i_1])))) + (arr_0 [i_1]))))));
            }
        }
    }
    var_22 |= (((var_10 ? (262143 == 2022062465) : (!2272904832))));
    #pragma endscop
}
