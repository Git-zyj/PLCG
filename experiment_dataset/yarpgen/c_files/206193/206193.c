/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (3679 >> 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((max(177, (6821816561462767901 >= 12317919849431518922))))));
                    arr_8 [7] [i_0] [7] = 24164;
                }
            }
        }
    }
    #pragma endscop
}
