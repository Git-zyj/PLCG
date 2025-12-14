/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (13601651102201772953 - (arr_3 [i_0] [i_1] [i_0]));
                var_18 = 0;
                var_19 = (((min(4252378800619624520, (arr_1 [i_0]))) != ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? 10863198269760112263 : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
