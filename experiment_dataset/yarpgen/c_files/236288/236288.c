/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_16;
                var_18 = (min(var_18, ((((((arr_6 [i_1 + 2] [i_0] [i_0]) - (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))) + (arr_6 [i_0] [i_0] [i_1 + 2]))))));
                arr_8 [i_1] [i_1] = (!(arr_2 [i_0]));
                arr_9 [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_19 = ((((-15 == ((var_2 ? 14 : 3390686681)))) || var_9));
    var_20 = var_5;
    #pragma endscop
}
