/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (arr_1 [i_0]);
                    var_12 = (max((((((19 ? var_7 : (arr_3 [6])))) ? var_3 : (max(-5466829674497945146, var_7)))), ((((((0 >> (11631602196292032255 - 11631602196292032236)))) <= (max(var_1, (arr_6 [i_0] [i_0] [i_2]))))))));
                }
            }
        }
    }
    var_13 = var_5;
    var_14 = var_3;
    var_15 &= (max(var_9, var_4));
    #pragma endscop
}
