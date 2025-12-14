/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((((max(1, 255) ^ (((max(var_10, var_3))))))));
    var_14 &= ((~(((var_1 == (1558 + 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_1] = (max(((min((max(2, 126)), (arr_4 [i_2 - 1])))), ((+(((arr_0 [i_0]) ? var_10 : 1))))));
                    arr_9 [i_0] [i_2] [i_2] [16] = (~(((!-8295388669169208758) ? (((arr_0 [i_2]) ? var_12 : (arr_4 [i_0]))) : var_12)));
                }
                arr_10 [i_0] [i_1] = ((((var_11 ? var_2 : (arr_7 [i_1] [i_1] [i_0]))) ^ ((var_3 | (arr_7 [i_1] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
