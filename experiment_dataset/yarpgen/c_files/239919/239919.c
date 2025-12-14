/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((!(((~(arr_0 [i_1]))))));
                var_19 = (((((max(((!(arr_3 [i_0] [5] [i_1]))), (!-6566))))) > (arr_1 [i_1])));
                arr_5 [i_1] [i_1] = ((((max(18965, 1))) == (max((arr_2 [i_0] [i_0]), ((1 ? 536870912 : 14))))));
                var_20 = (((16588030817465521711 ? (arr_1 [i_0]) : 16588030817465521711)));
            }
        }
    }
    #pragma endscop
}
