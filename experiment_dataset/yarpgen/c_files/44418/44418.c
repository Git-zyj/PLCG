/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(((~(arr_1 [i_0]))), ((20 ? (arr_7 [2] [i_1] [i_2]) : (arr_7 [i_0] [i_1 + 1] [i_2 + 1])))));
                    var_19 = (min(var_19, ((((min(20606, 114))) ? (!var_17) : ((((54295 < 1) > 141)))))));
                }
            }
        }
    }
    var_20 = (min((((!var_9) ? 114 : (~132))), 1));
    var_21 &= var_6;
    #pragma endscop
}
