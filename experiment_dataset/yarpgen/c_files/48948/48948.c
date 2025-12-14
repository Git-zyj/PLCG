/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((min(1, 1))) ? ((((1920 || var_12) || (((var_11 ? 53167 : var_12)))))) : 1));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_2] = (arr_0 [i_2]);
                    var_14 *= max(4294965375, ((((max(var_10, (arr_7 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0 - 1]) : (arr_6 [i_0] [i_1 - 2]))));
                }
            }
        }
        var_15 += (arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 = (max(var_16, (max(((((((arr_5 [i_0]) >> (((arr_10 [i_0]) - 188)))) != 1920))), (max(var_1, ((31352 ? 4294965375 : (arr_7 [i_0 - 1] [i_3] [i_3])))))))));
                    var_17 += ((-((~(arr_4 [i_0 - 1])))));
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
