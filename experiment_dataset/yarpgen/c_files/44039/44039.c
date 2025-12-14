/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_3;
    var_11 = ((((max((var_5 % 18318127968944905171), ((128616104764646445 ? 128616104764646445 : 18318127968944905154))))) || var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = 171;
                arr_6 [i_1] = var_3;
                var_12 = (((arr_0 [i_1 - 1]) ^ 1));
            }
        }
    }
    #pragma endscop
}
