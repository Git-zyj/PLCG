/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2 - 3] [i_0] [i_2 + 1] [i_2 - 3] = ((((min(((23430 ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (arr_3 [i_0 - 1]))), ((8202940371817062035 << (23427 - 23427)))))) ? (((arr_4 [i_0] [i_1] [i_2 - 1]) ? (23420 & -8202940371817062059) : (max((arr_6 [i_1]), var_17)))) : var_16));
                    var_20 += (arr_4 [i_0 - 1] [i_1] [i_2]);
                }
                var_21 = (arr_2 [i_0 - 1] [i_1] [i_1]);
                var_22 += (-(min(-103, (arr_1 [14]))));
                var_23 |= (!(arr_6 [i_1]));
                var_24 -= (max(6298128605143640544, 7));
            }
        }
    }
    #pragma endscop
}
