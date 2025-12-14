/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((min((max(var_11, var_10)), 20256)), var_2);
    var_13 = -47092;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min((min(((max((arr_3 [i_0]), (arr_2 [i_1] [i_1])))), -22)), ((((2047 <= 0) / (arr_2 [i_0] [i_1]))))));
                arr_5 [i_0] = 1148793170;
                arr_6 [5] [i_0] [i_0] = (min(15, ((((arr_2 [i_0] [i_1]) != 1)))));
            }
        }
    }
    #pragma endscop
}
