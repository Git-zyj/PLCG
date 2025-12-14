/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_2] = (((-(arr_3 [i_2]))));
                    var_19 = ((13 ? 62479 : (arr_7 [1] [i_1] [i_1 + 1] [i_1])));
                }
                var_20 = ((+(((arr_8 [i_1 + 1] [0]) ? (arr_2 [i_1 + 1]) : (arr_8 [i_1 + 1] [2])))));
                var_21 = ((min((((~(arr_9 [8] [i_1] [8] [8]))), var_15))));
            }
        }
    }
    var_22 = ((((var_2 ? (((3057 ? var_11 : var_4))) : (max(18446744073708503040, 1048582)))) != (((((3056 ? 65535 : 0)))))));
    #pragma endscop
}
