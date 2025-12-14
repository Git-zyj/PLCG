/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_16 ? ((-5947543404037001899 ? -709144226 : 10548755418863721142)) : ((var_1 ? var_13 : 10548755418863721142))))) ? (~-33554431) : (--6)));
    var_21 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0]) ? (107 / 56355) : (~72));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 *= (((((~(arr_0 [i_0] [i_0])))) && (~26)));
                    var_23 = (-(arr_1 [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
