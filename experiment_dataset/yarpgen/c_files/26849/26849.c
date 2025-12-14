/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 2] [i_1] = (((((!(arr_4 [i_0] [i_0])))) >> (((var_1 >> 0) - 836092255))));
                arr_7 [i_0] [i_0] [i_1] = (var_5 & var_5);
                var_10 = (arr_5 [i_0] [i_0]);
                var_11 = ((((!((((arr_4 [i_0] [i_0]) / var_8))))) ? var_8 : (((arr_3 [8] [i_1 + 2] [2]) ? (~var_1) : (arr_1 [i_1 + 2])))));
            }
        }
    }
    var_12 |= ((3072009875 ? 1880939674 : 1439969909));
    var_13 = (max(var_13, ((((48 / 141) ? -var_9 : (((((var_7 ? var_2 : var_6)) >> ((((var_3 ? var_9 : var_4)) - 7689231527967413928))))))))));
    #pragma endscop
}
