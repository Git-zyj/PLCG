/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1143;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = ((((max(var_3, 2518448242))) ? (((-7652823378797874463 ? -1968611332 : (arr_4 [i_0] [i_0] [i_0 - 2])))) : (((65150 * 47) ? -1918833059 : ((var_6 ^ (arr_7 [i_2] [18] [9] [i_0 - 1])))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] = min((max(-1968611332, var_6)), ((min((arr_4 [13] [i_0 - 2] [i_0 - 1]), 1297591867))));
                    var_20 = (max((arr_2 [i_0 + 1]), (((var_5 ? var_14 : 27)))));
                    var_21 *= 1;
                    var_22 = var_2;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    var_23 = ((-15561 ? ((111 << (-15547 + 15563))) : 385));
                    var_24 ^= ((((arr_0 [i_1] [i_3]) >= 3816553384)));
                }
                arr_11 [i_1] [i_0] = var_17;
                var_25 ^= (((arr_7 [i_0] [i_0] [i_1] [i_1]) ? ((((arr_2 [i_0 - 2]) & var_4))) : (max((arr_7 [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1]), 4763118000232257707))));
                var_26 &= (((arr_4 [i_1] [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (((var_6 <= ((65139 ? var_11 : (arr_6 [1] [i_1] [6]))))))));
            }
        }
    }
    #pragma endscop
}
