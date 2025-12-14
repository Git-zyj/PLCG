/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min((((!((max(var_9, var_7)))))), var_3)))));
    var_13 = ((((min(18994, var_1))) * (0 && var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [13] = (((((204 ? 18994 : 255))) ? (max(1023, var_5)) : 6));
                    var_14 *= ((var_10 ? (arr_5 [i_0] [i_0]) : (((((46551 ? 65535 : 855978152))) ? -855978153 : -2031436571))));
                }
            }
        }
    }
    #pragma endscop
}
