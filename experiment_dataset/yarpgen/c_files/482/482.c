/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_0, (min(((max(65510, var_2))), var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 += (min((((var_7 == ((((arr_4 [i_0] [i_1]) ? var_8 : var_4)))))), var_6));
                arr_6 [i_0] [i_1 - 2] [i_1] = (-65 != var_8);
                var_13 = (max(-52664, (((((12846 ? 1693048515275883972 : 16324))) ? 18577 : 0))));
            }
        }
    }
    #pragma endscop
}
