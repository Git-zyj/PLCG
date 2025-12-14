/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_0));
    var_21 = (((var_3 ? ((-32755 ? var_2 : var_13) : (28543 != 8608)))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_22 = (4 % 5);
        arr_2 [i_0] [i_0 - 4] = ((!((!(((var_1 ? 4498831072371343240 : var_18)))))));
        var_23 += (arr_0 [i_0 - 3]);
        var_24 &= (1 + 19);
        var_25 = (max((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_11)), (((!((((arr_0 [15]) ? (arr_1 [i_0] [19]) : 23678))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_2] [i_1] [i_4] [4] = -19;
                            arr_16 [i_1] [i_2] [i_3] [8] [i_1] [i_1] = 4147604614715196059;
                            var_26 = 19;
                        }
                    }
                }
            }
            var_27 -= ((var_18 > (((min(14893520728455882117, 18)) >> ((var_16 / (arr_13 [8] [8] [i_1] [6])))))));
            var_28 = (((var_8 / (arr_5 [i_2 + 1] [i_1]))));
            var_29 = (max(var_29, ((((arr_11 [i_1] [i_1] [i_1] [2]) > (((arr_5 [i_1] [14]) ? ((min(196, var_18))) : (min(var_14, 65535)))))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_1] [i_6] = 255174002;
            var_30 = (0 > 17588532706184048051);
            arr_22 [i_1] = 198;
        }
        var_31 = 0;
        var_32 = (min((max(43, 14341892026479835179)), ((min(127, 255174002)))));
    }
    var_33 = var_14;
    #pragma endscop
}
