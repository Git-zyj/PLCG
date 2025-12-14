/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~-2487)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (arr_7 [i_0]);
                    var_19 *= ((((((arr_6 [i_2] [i_1] [i_0]) * (arr_1 [i_2 + 1] [i_0 - 1])))) ? ((((((((arr_6 [i_2 - 1] [i_1] [i_0]) + 2147483647)) >> (((arr_7 [i_1]) + 1386704869))))) ? 36028797018963967 : -1410701731)) : (((1 >> (2047 - 2036))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] = (arr_9 [i_1] [i_1] [5] [i_0] [i_3] [i_2]);
                        var_20 *= (max(((1 ? 2125423057 : ((18446744073709551615 ? (arr_2 [i_0]) : 63)))), ((max(var_12, (arr_6 [i_3] [i_3] [i_0 - 1]))))));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((var_12 ? (arr_6 [i_4 + 2] [i_2 - 2] [i_0 - 1]) : 268435455)))));
                        var_22 = (min(var_22, ((((max((arr_3 [i_0 - 1] [i_4 + 4] [i_4]), (arr_0 [i_0]))) / 1)))));
                    }
                }
            }
        }
    }
    var_23 *= ((((((max(var_0, 11778459210444590689))) ? (max(6668284863264960915, -12178)) : (~var_15))) % 1));
    #pragma endscop
}
