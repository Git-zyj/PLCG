/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(250 || var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((min((min((arr_4 [i_0] [i_0]), (arr_2 [i_1 - 3]))), (!var_3))));
                var_12 = ((15297070773295538580 - ((((var_9 ? 2083920670502782952 : 148)) ^ (((6 - (arr_3 [i_0] [i_1 - 3]))))))));
                var_13 = min((((((arr_3 [12] [12]) ^ (arr_4 [i_1] [i_0]))))), (((var_3 ? (arr_6 [i_0] [i_1 + 3] [i_0]) : var_3))));
            }
        }
    }
    #pragma endscop
}
