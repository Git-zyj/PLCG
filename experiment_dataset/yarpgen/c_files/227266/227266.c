/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_2 [i_2]) == 1)))));
                    var_18 = ((((min(64, (arr_4 [i_0 + 3])))) ? (arr_4 [i_0 + 3]) : (max((arr_4 [i_0 + 3]), (arr_4 [i_0 + 3])))));
                    arr_9 [i_0] = max(-1978100892, 1);
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = (64 ? var_8 : ((-(var_16 < var_4))));
    var_21 = 2098093187;
    #pragma endscop
}
