/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (max((arr_2 [i_2] [1]), 55664));
                    var_17 = ((((min((arr_0 [i_1]), 23514))) && 42021));
                    var_18 &= ((((+(((arr_8 [i_0] [i_0] [i_0] [i_0]) + var_8)))) >> (((((arr_3 [i_2] [i_2]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_1]))) + 21318))));
                    arr_11 [i_0] [11] [i_2] = ((var_12 && (((-((max(var_6, 23514))))))));
                    var_19 = (arr_1 [i_0] [i_1]);
                }
            }
        }
    }
    var_20 |= -2300435112414308087;
    #pragma endscop
}
