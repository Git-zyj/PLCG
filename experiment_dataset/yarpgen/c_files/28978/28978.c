/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 11891;
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = 78;
                    var_16 = min(var_11, (min((arr_1 [i_1]), (((arr_1 [i_2]) ? 128 : (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
