/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((max(var_7, (~var_0))) % (max(var_2, (var_11 % 426877747)))));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_2 [i_0] [i_1] [i_2 - 3]);
                    var_13 = (3868089557 ? 1143846566 : (((!((min(-1143846577, 1)))))));
                    arr_9 [i_0] = (arr_4 [i_2]);
                    var_14 = ((-(~3470386237)));
                    arr_10 [i_0] [i_0] = (((arr_3 [i_2] [i_1] [i_0]) ? (((!((!(arr_6 [i_0])))))) : (max((min(-1143846595, 0)), (arr_0 [i_2] [i_1])))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((!((!(426877747 % 3868089557)))));
                    var_15 = (((!var_5) % (-127 - 1)));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((!((!(arr_16 [i_0])))));
                    var_16 = (min(var_16, (((-(min((min(var_12, 1906263140)), -127)))))));
                }
                var_17 = (((max((arr_7 [i_0] [i_1] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_1]))) % var_8));
            }
        }
    }
    var_18 = ((~(max((var_8 % var_6), -8890))));
    #pragma endscop
}
