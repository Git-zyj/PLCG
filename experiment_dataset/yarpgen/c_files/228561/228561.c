/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_5 / ((min(30439, 15965)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [8] [i_0] [i_1] |= ((arr_3 [i_0]) + ((var_2 ? ((min((arr_2 [8]), var_7))) : (var_7 + var_2))));
                arr_6 [i_0] [i_0] [i_1] = var_3;
                arr_7 [4] [4] |= (((((((((arr_3 [i_1]) ? var_5 : var_7))) ? ((-(arr_2 [4]))) : ((var_0 ? (arr_2 [0]) : (arr_0 [i_0])))))) || (((~(min((arr_2 [4]), 13775982914912918911)))))));
                arr_8 [i_0] [i_0] [i_0] = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_16 = var_9;
                arr_14 [i_2] [i_3] = (((((~((2684085041 ? 15 : (arr_9 [i_3 + 3] [i_3 + 1])))))) % ((+(((arr_13 [13] [i_3]) ? 10894740515018802750 : 4514462722024386046))))));
            }
        }
    }
    var_17 = var_1;
    var_18 = var_6;
    #pragma endscop
}
