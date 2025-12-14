/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min(var_3, ((max(var_9, var_11)))));
    var_21 = var_12;
    var_22 = ((max((min(var_18, var_18)), var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [11] [i_2] [7] = (((arr_2 [2] [i_1] [i_0]) ? ((17441306785548489595 ? 118 : 13547745943074944355)) : var_13));
                    var_23 = ((((max(13072409910741851769, (!var_6)))) ? ((((arr_0 [i_1]) <= (arr_0 [i_0])))) : (arr_6 [i_0] [14] [10])));
                    arr_9 [i_0] [i_0] = (min(18446744073709551611, -31));
                }
            }
        }
    }
    #pragma endscop
}
