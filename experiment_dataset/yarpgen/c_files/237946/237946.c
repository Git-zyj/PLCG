/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_11);
    var_16 = ((+((((!110) <= ((var_6 ? var_9 : 6801536078398205857)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((+(((min((arr_0 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((-2138863629 ? 231 : 2909)))));
                    var_18 += ((((((arr_6 [i_0] [i_1 + 1]) - (~2109979552)))) ? ((max(25, 1))) : (!33)));
                    arr_9 [i_1 - 1] = (((arr_0 [i_1 - 1]) ? ((var_7 ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 1]))) : ((1 ? 224549396 : 1))));
                }
            }
        }
        arr_10 [i_0] [i_0] = ((-236 <= (((min(var_0, -5))))));
        var_19 = ((-(~980862019)));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = max(-9, -453550542210868127);
        var_20 = 1;
    }
    var_21 = ((((-3149592169739236198 ? var_14 : 4294967295))) <= ((var_12 ? 4294967295 : var_9)));
    #pragma endscop
}
