/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = (min(((var_13 ? (arr_3 [i_0]) : (min((arr_4 [i_0]), 72057594037927935)))), 1));
                    var_16 = -4154846140475927637;
                }
                arr_8 [i_0] [i_1] [i_1] = (max((arr_4 [i_1 - 1]), (max((min(1, var_10)), 1))));
            }
        }
    }
    var_17 = var_3;

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] = var_7;
        var_18 = (((arr_4 [i_3]) & (min(-4947405109631757320, (arr_3 [i_3])))));

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_19 = (59 < 4095);
            var_20 -= ((!((((arr_10 [i_4 + 1]) ? (arr_10 [i_4 + 1]) : 0)))));
        }
        var_21 = ((1 * ((59 ? (((min(var_3, 36392)))) : (arr_6 [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
