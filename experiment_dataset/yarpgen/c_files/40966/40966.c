/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] = ((~((var_10 ? (((((arr_7 [i_0] [i_0] [i_0]) != var_8)))) : (max(var_6, 941731386))))));
                            arr_10 [i_2] = ((7200100542677632637 ? (min(11246643531031918978, 33554431) : -4623207530204880865)));
                        }
                    }
                }
                arr_11 [i_1] [i_0] [i_0] = ((!((min(27, 24)))));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
