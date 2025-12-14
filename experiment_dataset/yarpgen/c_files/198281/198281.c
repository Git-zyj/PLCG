/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? -2134545267 : 73));
    var_21 = (65535 != 73);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_22 = (((0 == 7829272921352957599) ? ((0 ? (arr_3 [i_3 + 2] [i_2]) : (arr_3 [i_3 - 1] [i_0]))) : ((-(arr_3 [i_3 - 1] [i_0])))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_23 = ((((73 ? (arr_8 [i_3 - 1] [i_0] [i_3 - 1] [i_3 - 1] [i_4]) : (arr_8 [i_3 - 1] [1] [2] [i_3] [i_4]))) - (~var_12)));
                            arr_10 [i_0] [i_2] [i_2] = ((1 << ((((((arr_1 [i_0]) ? 890703040910002666 : 1589)) > (arr_7 [i_3 + 1] [i_4] [i_2] [i_3]))))));
                            var_24 ^= -2134545267;
                        }
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] &= (-99 > 2134545267);
                    }
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        var_25 ^= var_12;
                        arr_15 [i_1] = ((var_19 ? (((var_6 ? (1309181850 >= var_12) : 26364))) : -var_10));
                    }
                    var_26 *= (((!var_10) >= 5411225446353295581));
                    arr_16 [i_0] [i_0] = ((((min((arr_4 [1] [i_1] [i_2]), 32767))) >= -2134545268));
                    arr_17 [i_0] [i_0] = (arr_5 [1] [i_2] [i_2]);
                }
            }
        }
    }
    var_27 |= (min(-var_15, (18446744073709551602 + -32749)));
    var_28 = (((--20733) ? ((var_1 ? -var_10 : var_13)) : ((((((min(15657379795849381862, var_15))) || (var_13 <= var_13)))))));
    #pragma endscop
}
