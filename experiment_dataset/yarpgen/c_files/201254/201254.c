/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((+((var_4 ? (((-32767 - 1) / 8288238329759254200)) : 10901))));
                arr_7 [i_1] = (((arr_4 [i_0]) & (min((arr_0 [i_0]), (max(3450018279, 3210987529))))));
                arr_8 [i_1] = (max((((arr_2 [1] [3] [i_1]) & (arr_2 [i_0] [i_0] [i_0]))), (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [18]) : 1))));
                arr_9 [i_1] = ((1 + ((5918018805836248619 ? 9460613327636734535 : 72193412098003907))));
                arr_10 [i_1] = 1;
            }
        }
    }
    var_11 = var_1;
    var_12 = -5156432449869174042;
    #pragma endscop
}
