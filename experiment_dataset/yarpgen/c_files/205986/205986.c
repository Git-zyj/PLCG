/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max((var_6 - var_11), (var_8 + 377574666))), ((min(1, 1)))));
    var_19 = (((((-((var_7 ? var_3 : var_13))))) ? var_6 : 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((140703128616960 ? -64818164 : 1));
                    arr_9 [i_0] [i_0] = var_6;
                }
            }
        }
    }
    var_21 |= (max(((var_4 == (max(var_4, var_3)))), (((((1 ? 1 : 18446603370580934644))) && (var_17 / var_10)))));
    #pragma endscop
}
