/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((min(-57344, 1539)))));
                    var_18 = ((((!((((arr_0 [i_0]) ? (arr_5 [i_1 - 3]) : 43124))))) ? (~-1) : ((((arr_8 [i_1 - 2] [i_1 - 2]) || (arr_8 [i_1 - 2] [i_1 - 3]))))));
                    arr_9 [i_2] [i_1 + 1] [i_2] = max(25165824, (((var_16 + 1) * 16384)));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (max(var_20, ((max(var_16, ((8016935361824914220 && (((-8016935361824914200 ? 127 : var_10))))))))));

    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3 - 1] [i_3] = (((((-10 ? var_9 : 38))) ? 4294967295 : ((max((arr_11 [i_3 - 3]), (min(var_0, 30423)))))));
        arr_13 [i_3] = var_11;
        arr_14 [i_3] [i_3] = (((arr_10 [i_3 + 1] [i_3]) ? (((!var_7) ? 1 : var_7)) : -124));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_17 [i_4] [i_4 + 2] = var_10;
        arr_18 [i_4 + 3] = (((-53 + 2147483647) >> (-35 + 45)));
        var_21 = (max(var_21, (((1 ? 96 : -10)))));
    }
    #pragma endscop
}
