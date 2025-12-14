/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] [i_1] = (arr_3 [i_0]);
                arr_7 [7] = (((-20007 ? 2042 : ((max(79, 2046))))));
            }
        }
    }
    var_20 ^= (((min(((min(-54, var_12))), (-54 / var_8))) == var_0));
    #pragma endscop
}
