/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_1 + 2] [i_1 + 4] = -6141;
                var_12 = var_7;
                arr_8 [i_1] [i_0] = ((((min(2272178546, 2272178525)) + 324053835623638895)) - (((((((arr_6 [i_1]) ? 2022788749 : (arr_3 [i_0 - 1])))) ? ((1 ? (arr_2 [i_1]) : (arr_2 [i_0]))) : (max((arr_6 [i_1]), -1))))));
            }
        }
    }
    var_13 += var_2;
    #pragma endscop
}
