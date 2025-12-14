/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-259260967 & -0) < ((((31744 ? var_10 : 2714)) + (~190)))));
    var_21 = -31722;
    var_22 = 108;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((-(((-3153660598763554206 ? (arr_5 [i_2] [i_2] [i_2]) : 31738)))));
                    var_23 = (max(((~(9 - 1563527756))), (arr_3 [i_0])));
                    arr_8 [i_0] [i_1] [i_2] = (min((+-4030105249), (arr_3 [i_0])));
                    var_24 = (max(var_24, ((min((arr_3 [i_0]), (var_17 + 36070))))));
                }
            }
        }
    }
    #pragma endscop
}
