/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (var_4 < 9223372036854775807) : (min((arr_1 [i_0] [i_0]), var_3)))), (0 > 209)));
        arr_3 [3] = ((var_15 ? ((((var_11 > (~var_6))))) : (min(-16, (var_16 - 1352401430)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_3 + 3] [i_4] = (((((arr_1 [i_2 - 1] [i_2 - 1]) ? ((((var_6 < (arr_11 [i_1] [i_1]))))) : (arr_7 [i_2 - 1] [i_2 - 1] [i_3 - 1]))) | var_10));
                        arr_14 [i_1] [i_1] [i_1] = max(((var_9 ? ((var_11 ? -30278 : (arr_4 [i_1] [i_2]))) : (!var_3))), (arr_11 [i_2 - 1] [i_4]));
                        var_17 = (max(var_17, (arr_12 [1] [i_2] [i_4])));
                        arr_15 [i_1] = (i_1 % 2 == 0) ? ((((((-26 && (arr_12 [i_3] [i_4 - 4] [i_1])))) << (((((arr_12 [i_2 - 2] [i_4 - 1] [i_1]) ^ var_11)) - 181994255375999756))))) : ((((((-26 && (arr_12 [i_3] [i_4 - 4] [i_1])))) << (((((((arr_12 [i_2 - 2] [i_4 - 1] [i_1]) ^ var_11)) - 181994255375999756)) + 363988510565913147)))));
                        var_18 = (32767 ? -32767 : -11415);
                    }
                }
            }
        }
        var_19 = -11994;
    }
    var_20 = (max(var_9, var_14));
    var_21 = var_15;
    var_22 = (max(var_22, var_3));
    #pragma endscop
}
