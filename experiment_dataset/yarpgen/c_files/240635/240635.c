/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_7 >> (253 - 252)))) ? (var_1 - var_6) : (((max(var_14, var_6)))))) & var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                var_20 = (((arr_4 [i_0] [i_0] [i_1]) ? 251 : ((max(18476, 254)))));
                arr_8 [i_0] [i_0] = (((arr_0 [i_0] [i_1]) - (arr_0 [i_0] [i_1])));
            }
        }
    }
    var_21 -= var_4;
    #pragma endscop
}
