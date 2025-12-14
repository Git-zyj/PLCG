/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (min(-23287, 23270));
    var_20 = ((+(((!var_17) ^ 23288))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((2733815766 ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (max((arr_0 [i_1]), 0)))))));
                var_22 += ((((-((4294967295 ? 23287 : (arr_4 [i_1]))))) <= (((min((arr_3 [i_1] [i_1] [i_0]), var_7))))));
                arr_5 [i_0] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
