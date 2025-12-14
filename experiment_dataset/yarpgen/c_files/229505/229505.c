/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 += (min(((((-(arr_3 [8]))))), (((arr_0 [i_0]) ? 6157559157955901303 : (arr_4 [0])))));
                var_11 += (((arr_0 [i_0]) ? (min(56, 70364449210368)) : (!-26116)));
                var_12 -= (1625412197 ? (max((arr_1 [i_0]), ((max(61230, (arr_2 [2])))))) : 51280);
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
