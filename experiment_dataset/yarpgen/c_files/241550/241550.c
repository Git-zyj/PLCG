/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max((((var_0 ? -332857239 : ((var_8 ? var_4 : var_6))))), (~var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((arr_0 [i_0]) | (min(65535, (max(var_10, (arr_2 [i_0])))))));
                    arr_10 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                    arr_11 [i_0] [i_0] [i_0] = (max((((332857239 ? var_2 : 332857239))), (arr_4 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
