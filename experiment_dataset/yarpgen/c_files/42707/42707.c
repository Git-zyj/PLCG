/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = (min(-597702225, ((((max((arr_1 [i_0]), 4294965248))) ? (max(597702216, 4294965248)) : 1373683700))));
                        var_14 += (((arr_0 [3]) & var_8));
                    }
                    var_15 = ((-32193 && (~597702252)));
                }
            }
        }
    }
    var_16 = (max(65535, var_9));
    var_17 = ((((((var_0 || ((!(-32767 - 1))))))) < ((var_2 << (var_9 + 5441143132756282951)))));
    #pragma endscop
}
