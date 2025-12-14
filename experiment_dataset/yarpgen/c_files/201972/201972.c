/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_6;
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = ((min(2071940421, 3856670462)));
                            var_17 = (~135);
                        }
                    }
                }
                arr_10 [i_1] [i_1] = (((((((max(var_2, var_6))) ? (((var_12 ? var_1 : var_1))) : 0))) ? ((-9223372036854775798 ? (arr_8 [i_1] [i_0 - 1]) : (arr_8 [i_1] [i_0]))) : var_1));
            }
        }
    }
    #pragma endscop
}
