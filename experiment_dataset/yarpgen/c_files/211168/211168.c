/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((-9223372036854775807 - 1) >= 2950412937167482430)) ? 1 : (((32767 && ((max(var_10, 1159127129928888226))))))));
    var_18 = -44294;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = -9223372036854775794;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0 + 3] [i_1 + 1] [i_2] [i_3] = 11194;
                        arr_14 [i_0 + 1] [i_1 + 2] [i_2 - 1] [i_2] = ((-((115 ? (arr_12 [i_0] [i_0] [1] [i_2] [i_2 - 1]) : 1))));
                        var_20 ^= 4651324203310664175;
                        var_21 -= 95;
                        arr_15 [12] [i_2] [i_2] [i_0] = 1;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_2] [i_4] = ((536346624 ? 127 : 8772005456859625963));
                        arr_20 [i_4] [i_2] [i_2] [14] = ((-((((arr_1 [i_0 + 2]) >= (-127 - 1))))));
                        var_22 = (max((((0 ^ (var_16 || 1099478073344)))), ((-18446744073709551615 ? 1 : (((arr_6 [i_2]) ? var_15 : var_2))))));
                        var_23 *= ((255 ? (min((min(3, 17244759578108001282)), (((1956849738 ? var_10 : (arr_5 [i_2] [i_1] [i_0])))))) : (85 >> -var_12)));
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_2] = 11349059259808399093;
                    var_24 = ((~((((max(var_15, var_2))) ? 20658 : 1))));
                }
            }
        }
    }
    #pragma endscop
}
