/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_1 ? var_8 : var_8)), (~var_1)));
    var_11 = 64;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((~var_9) ? var_5 : ((((arr_6 [i_0] [i_1]) ^ (arr_6 [i_0] [i_2]))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = (((((-((var_0 ? -124 : 0))))) ? (((arr_7 [i_1] [i_0]) ? var_3 : var_0)) : 1497354975));
                    arr_11 [i_0] [i_0] [i_2] [9] = ((63 ? (max(((max(-29431, 65535))), (max(-225, var_8)))) : (((-(arr_1 [i_1]))))));
                    arr_12 [i_0] [i_1] = (((arr_3 [i_2] [i_0]) ? (((0 ? 24622 : 250))) : (arr_5 [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_13 = (var_1 * var_3);
    #pragma endscop
}
