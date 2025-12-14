/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? var_4 : -var_5));
    var_12 = 1144270517;
    var_13 = (max(var_4, (min(((15795115071184406575 ? 2651629002525145066 : var_2)), (!var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_14 = (((arr_0 [i_0 + 1]) ? (max(3731285586028104322, (arr_0 [i_0 + 1]))) : (((((arr_0 [i_0 + 1]) != var_1))))));
                    var_15 *= (max(((((arr_0 [9]) ? (arr_0 [2]) : -1))), -2651629002525145066));
                    arr_8 [i_0] [i_0] [i_0] = ((-var_0 ? ((var_6 ? var_7 : 47491)) : ((min(-12318, 144)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_3] = (min((min((arr_1 [i_0 + 1] [i_3]), (147 * 11))), (0 % 3072)));
                    var_16 = (max(var_16, (((29 ? -30 : 72057593903710208)))));
                    var_17 = (min((((~(~3423)))), ((((min(9641, (arr_5 [i_0 + 1] [i_1])))) ? 2226354618 : 32676))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 = (max(var_18, ((((min(((((arr_10 [i_0]) ? -1419006760 : -2147483639))), ((18045 ? var_1 : var_10)))) < ((((((var_1 + var_1) + 2147483647)) << (min(8191, (arr_9 [i_1])))))))))));
                    var_19 = (min(-24502, ((((arr_9 [i_1]) < 60176)))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_20 = 31893;
                            var_21 = 0;
                            var_22 = ((-5383899170060000218 ? ((((((((arr_14 [i_5] [i_0 + 1]) <= 9223372036854775807)))) % (arr_7 [i_0 + 1] [i_0 + 1] [i_5])))) : ((14673206739288604062 & (arr_9 [i_5])))));
                            var_23 &= (((arr_9 [i_1]) ? (((((var_4 ? (-32767 - 1) : (arr_5 [i_5] [8])))) ? ((0 ? 18446744073709551595 : var_9)) : 16)) : var_2));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
