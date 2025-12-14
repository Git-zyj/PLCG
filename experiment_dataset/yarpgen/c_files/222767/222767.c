/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? ((-23394 ? var_1 : var_1)) : (min((var_0 + -23394), var_5))));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((0 ? 43889 : -23385));
        arr_3 [i_0] = ((~var_3) & var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [0] [0] [i_2] = ((((min(var_9, (min(var_6, (arr_5 [i_0] [i_1])))))) ? -878439654494584793 : var_11));
                    arr_9 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_1]) : (((min(37, var_4))))));
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
