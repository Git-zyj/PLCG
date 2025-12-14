/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(-408281816, (((~var_10) & (8869283476764449175 & var_9)))));
    var_17 = -408281809;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((((max(1, -408281820)) & (arr_2 [i_1] [9])))) || 1)))));
                arr_5 [i_0] = (arr_3 [i_0] [i_0] [i_1]);
                var_19 = (min(var_19, (((arr_1 [i_0]) && ((!((max(-586533342, 408281816)))))))));
            }
        }
    }
    #pragma endscop
}
