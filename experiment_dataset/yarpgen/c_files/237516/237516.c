/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 -= ((6875961265097715347 | (((var_1 * ((var_8 << (((arr_6 [i_0] [i_1] [1] [i_2]) - 21353)))))))));
                    arr_7 [i_1] [i_1] = min(((((var_1 != var_8) < (var_11 ^ var_5)))), (((arr_5 [9] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_1]) : -1642377354664600029)));
                    var_15 = (var_0 != var_12);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] [i_3] = (min(((((((var_10 < (arr_9 [15]))))) / 1642377354664600043)), ((((arr_13 [1] [1] [14]) < (min(520121847, var_6)))))));
                var_16 -= ((var_13 ? ((((((var_4 | (arr_2 [14]))) > var_9)))) : (min(16804366719044951572, 0))));
                arr_15 [i_3] [i_4] [i_3] = ((var_12 ? ((min(var_12, ((var_13 ? (arr_12 [i_3] [i_3] [i_3]) : (arr_12 [16] [1] [1])))))) : (min(-7189007806368322771, 16804366719044951586))));
                var_17 -= var_7;
                arr_16 [i_3] [i_3] = (((((4681680491835087869 ? ((var_8 ? var_11 : var_4)) : (min(var_12, var_3))))) || 49));
            }
        }
    }
    #pragma endscop
}
