/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 1] [3] = (min(((~(arr_2 [i_0]))), (((2779371435395139792 ? 3313182475582554747 : -3313182475582554748)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] = ((min((min((arr_1 [i_1]), (arr_6 [15] [i_1] [i_1] [i_0]))), ((min(var_9, (arr_0 [i_3] [i_2])))))));
                            var_14 = 0;
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_1 + 1] = 9223372036854775807;
                arr_11 [i_1] [i_0] = -3313182475582554742;
            }
        }
    }
    var_15 = ((((min((((-75 + 2147483647) << (var_10 - 44008))), var_10))) ? (((min((min(var_12, var_6)), var_3)))) : (((((54134 ? var_9 : var_13))) ? var_5 : var_8))));
    #pragma endscop
}
