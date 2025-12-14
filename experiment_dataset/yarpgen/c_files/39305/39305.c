/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] = ((min((arr_3 [i_0] [i_1] [9]), 192)));
                arr_7 [i_0] = (max(-110, 137203235));
            }
        }
    }
    var_12 &= (((((!(((255 ? var_4 : 0)))))) >> (((max(var_3, ((var_3 ? var_3 : var_1)))) - 49427))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_13 &= (min(1526223401, 5254544626163872063));
                arr_13 [11] = ((+(min((arr_8 [i_2]), (((3964 ? var_10 : (arr_1 [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
