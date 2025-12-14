/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_11;
    var_13 = (var_9 == (((((max(var_3, var_0)) <= var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = max(16444419111048095340, (arr_3 [i_0]));
                var_15 = min(3197614840679768904, 1);
                arr_4 [i_0] [i_1] = 2;
                var_16 = 16444419111048095340;
            }
        }
    }
    #pragma endscop
}
