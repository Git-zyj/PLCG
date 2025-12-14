/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((!(var_9 & var_9))) ? (((-1750432177 ? 65535 : 123))) : var_7)))));
    var_18 = ((((((-3812511328894769908 ? var_3 : -9223372036854775790))) || (-3812511328894769923 || var_16))) && (((var_16 ? (9223372036854775807 && 1) : ((var_9 ? 4503599627239424 : -1414869511))))));
    var_19 = (max(var_19, (((1 ? 8191 : 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_8 [8] [i_0]);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = 4503599627239418;
                }
            }
        }
    }
    #pragma endscop
}
