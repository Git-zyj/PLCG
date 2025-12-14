/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [7] [i_1] = ((var_2 && ((!(arr_4 [i_0 + 1])))));
                arr_6 [i_0] [11] = 5;
                arr_7 [i_0] [i_0] = ((462215376129287658 ^ (-32767 - 1)));
            }
        }
    }
    var_10 = (((((max(-32752, 43963)))) ^ 1644761437));
    var_11 *= (((1829846282874061121 || (((var_7 ? var_2 : var_1))))) || ((max(var_2, var_4))));
    #pragma endscop
}
