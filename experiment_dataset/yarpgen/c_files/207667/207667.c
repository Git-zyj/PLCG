/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((var_16 + var_10), var_1)) + var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 -= var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = var_5;
                            var_21 = (max(var_21, ((((((var_2 ? (arr_6 [i_3] [i_2] [i_0]) : (arr_7 [i_0])))) ? (((-(arr_1 [i_0])))) : (((arr_7 [i_3]) ? (arr_1 [i_0]) : var_8)))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = -390240754278041839;
                var_22 = 9968;
            }
        }
    }
    var_23 = (min(-390240754278041839, 390240754278041838));
    #pragma endscop
}
