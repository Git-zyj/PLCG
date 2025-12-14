/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-((min(var_6, var_10))))) | ((((var_10 ? var_7 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [2] [i_0] |= 1514;
                            var_14 = ((max(var_6, ((1514 | (arr_1 [i_0]))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (max((~var_0), -2991));
            }
        }
    }
    #pragma endscop
}
