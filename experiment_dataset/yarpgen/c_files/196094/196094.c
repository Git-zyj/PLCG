/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min((min(var_3, (arr_3 [i_1] [i_1]))), -12395015));
                var_17 = arr_6 [i_1] [i_1] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 -= 6585;
                            var_19 = ((((((((-12395015 ? var_10 : (arr_7 [i_0] [i_0]))) > (((47420 ? (arr_3 [i_1] [i_1]) : var_9))))))) < ((((min(var_8, 95))) ? (arr_11 [i_2]) : var_9))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = ((((min(2147483647, 3053371328244532081))) ? -12395015 : -12395024));
                        }
                    }
                }
                var_20 = (~var_4);
                var_21 = 8784222934072636208;
            }
        }
    }
    var_22 = var_0;
    var_23 |= 9662521139636915427;
    #pragma endscop
}
