/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((((((9219605564081399874 ^ -21963) ? (var_8 ^ var_7) : (arr_3 [i_0] [6] [i_0])))) ? ((((arr_4 [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_0] [i_1])))) : 9219605564081399874));
                arr_6 [i_0] = ((((-11247 ? (arr_4 [i_0] [i_0]) : -9219605564081399874))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [7] [i_1] [i_0] = ((((9219605564081399873 ? (arr_0 [i_3]) : 16616)) >= 81));
                            var_18 = (max(var_18, (((382601915165656008 & (!154))))));
                            var_19 = (((!((((arr_11 [i_1]) ? 9219605564081399884 : (arr_4 [i_0] [i_3])))))));
                        }
                    }
                }
                var_20 = arr_0 [i_0];
            }
        }
    }
    var_21 = var_0;
    var_22 ^= ((max(var_5, (~-29961))));
    #pragma endscop
}
