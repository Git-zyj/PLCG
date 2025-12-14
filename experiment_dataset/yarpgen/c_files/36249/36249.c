/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((~((max(0, 162)))));
                var_12 = 22875;
                arr_8 [i_0] = (((!-1) | (4294967295 >= 3559404730)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_13 [i_2 - 1] [i_2] [i_3] = (((((((max(0, -19))) ^ (~-1)))) ? ((((((-9223372036854775807 - 1) ? 3048146112 : 76))) ? ((4418196109635716912 ? 54127 : 0)) : 9)) : (max(3337520805, ((min(-41, 1)))))));
                arr_14 [i_2] = -1953409758132511953;
            }
        }
    }
    #pragma endscop
}
