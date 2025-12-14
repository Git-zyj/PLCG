/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_2;
    var_19 = ((3146096234 ? 127 : var_15));
    var_20 = ((var_8 ? var_4 : -var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((((~(((arr_3 [i_1] [i_1]) ? (arr_0 [1]) : (arr_2 [i_0]))))) & (arr_4 [i_1] [i_1] [i_2])));
                    arr_8 [i_0] &= (+-2234327028);
                }
            }
        }
    }
    #pragma endscop
}
