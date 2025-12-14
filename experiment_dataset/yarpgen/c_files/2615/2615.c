/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11;
    var_19 = (max(var_19, (((~(max((min(var_14, var_16)), (((~(-32767 - 1)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((-(min((arr_3 [i_0] [i_0] [i_1]), (min(32758, (arr_3 [i_0] [i_0] [i_1])))))));
                var_21 = (min(var_21, var_7));
                var_22 = (min(var_22, (((((((arr_3 [14] [10] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_1] [i_1] [1])))) || (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
