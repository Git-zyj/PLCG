/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_2 ? ((var_0 ^ ((-154552952 ? -4341725998813741062 : 8)))) : ((((((max(-4341725998813741084, var_8))) >= -988175816757814552))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = (((14 * 4294967295) / (min((arr_1 [i_0 + 1]), 3584))));
        var_13 *= var_0;
        var_14 = max(43022, 177);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_2;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = min(15713, 1);
                        arr_16 [i_3] [i_3] = min(((((-8 - 1191518354) ? (arr_10 [i_3 - 1] [i_1 + 1]) : (((arr_11 [7] [i_2] [i_2] [0]) ? (arr_10 [i_3] [i_3]) : (arr_1 [i_1])))))), ((117 ? (max(var_1, (arr_12 [7] [7] [1] [7]))) : -var_10)));
                        var_16 -= min((((max(var_0, (arr_6 [i_1] [i_2] [i_3]))))), (max(var_9, var_2)));
                    }
                }
            }
        }
        arr_17 [i_1] |= 19415;
    }
    #pragma endscop
}
