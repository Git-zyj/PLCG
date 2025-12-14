/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((((((((-7771702202393361234 ? var_9 : (arr_4 [i_1])))) ? var_7 : ((max(-1366845970, 127)))))) ? ((max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1])))) : (min(((-(arr_9 [i_0] [i_1] [i_2 + 1]))), (((arr_6 [i_0]) ^ var_11))))));
                    arr_11 [i_1 - 2] [i_1] [i_1] [i_1] = var_2;
                    var_17 = (max(var_11, ((min((((arr_8 [i_2] [i_0] [i_0]) >= 1366845977)), 2147483647)))));
                    var_18 = (8932034619479310472 % -1366845977);
                    var_19 = (arr_1 [i_2]);
                }
            }
        }
        arr_12 [i_0] = (min(((((511 / var_2) ? ((-(arr_8 [i_0] [i_0] [i_0]))) : (arr_1 [i_0])))), (max(((6989 ? (arr_9 [i_0] [i_0] [i_0]) : 12075510505404255588)), ((var_3 ? 3720734474 : (arr_3 [i_0] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_20 = 0;
                    arr_20 [i_3] [i_3] [i_3] [i_5] = -7771702202393361234;
                }
            }
        }
        var_21 = (min((min(var_10, (arr_13 [i_3]))), (arr_17 [i_3])));
    }
    #pragma endscop
}
