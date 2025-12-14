/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [18] = (var_5 != 8188);
                    var_11 = var_1;
                    var_12 = (min(var_12, ((((~8184) < (((((var_8 ? 8188 : var_10))) ? (arr_3 [i_0]) : (~8188))))))));
                    arr_9 [i_1] = (var_6 || var_7);
                }
            }
        }
    }
    var_13 = -8194;
    var_14 = var_0;
    #pragma endscop
}
