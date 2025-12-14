/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2 + 1] [i_0] [i_0] [i_0] = (min((min((arr_0 [i_2 - 1]), (arr_4 [i_0] [i_0] [i_2 - 1] [i_2]))), var_6));
                    arr_7 [i_2] [i_2] = ((218 ? ((((((101 == (arr_2 [i_0] [i_2 - 1])))) & 30417))) : ((((max(3327810411345272525, (arr_0 [i_1])))) ? (arr_2 [i_1] [i_1]) : ((-3327810411345272525 ? -958431658 : var_1))))));
                    arr_8 [i_1] [i_1] = -3327810411345272513;
                    var_13 = -8291686784202881122;
                    arr_9 [i_0] [i_0] [i_2 + 1] = ((((((arr_2 [i_2 - 2] [i_0]) - -3327810411345272531))) ? (min((-32767 - 1), 958431657)) : (arr_1 [i_2 - 2] [i_2 - 1])));
                }
            }
        }
    }
    var_14 = var_8;
    var_15 = (min(var_15, ((min(var_10, var_11)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] = 11600763912988663986;

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_16 = (min((1366508229 + 49), (((var_5 ? (arr_11 [i_5]) : (arr_17 [i_3] [i_4] [i_3]))))));
                    arr_20 [i_3] [i_3] = ((+((((arr_12 [i_4]) || (arr_12 [i_4]))))));
                    var_17 = ((((min(var_12, (((arr_15 [i_3]) ^ var_7))))) || ((min((min(13058319308026177437, (arr_3 [i_4] [i_4]))), ((((arr_14 [i_4]) ? var_12 : 2010377242))))))));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    var_18 = (arr_10 [i_3] [i_4]);
                    arr_25 [i_3] [i_4] [i_3] = (var_12 ? (arr_14 [i_3]) : (((((arr_13 [i_3] [i_4]) || var_1)))));
                }
                arr_26 [i_3] [i_4] = (((max(9, 0)) > (arr_13 [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
