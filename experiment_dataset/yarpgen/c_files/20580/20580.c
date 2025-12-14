/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 *= arr_4 [i_2];
                    arr_6 [i_0] [i_0] [i_0] [i_2] = (max((arr_3 [i_0] [i_0]), ((127 ? -124 : 855000684))));
                    var_11 = (!-24);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_12 = (~(min(4194303, 7864320)));
                var_13 *= (arr_12 [i_3] [i_4] [6]);
            }
        }
    }
    var_14 ^= 15;
    var_15 ^= var_7;
    #pragma endscop
}
