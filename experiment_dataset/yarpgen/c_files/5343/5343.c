/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= -19890;
    var_14 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (min((max(-392965138, (859333167 == 576460752295034880))), var_9));
                    arr_8 [6] |= ((((-(max(var_1, var_8)))) % (!0)));
                }
            }
        }
    }
    #pragma endscop
}
