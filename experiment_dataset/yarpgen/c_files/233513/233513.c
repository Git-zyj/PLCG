/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [10] [10] [10] [i_4] = (-1737752316996974833 ? ((max(13409, -53336))) : (max(((5683657426026401835 ? 0 : 8687254577911362697)), (((var_5 ? 1 : var_8))))));
                                var_12 = (max(var_12, 2616898430686627092));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (max((((arr_16 [i_0 + 1] [i_1 + 1]) ^ (arr_7 [i_0] [i_0] [i_0]))), var_2));
                                var_14 += (((min(((-13 ? 13406 : 1)), 13413)) * (min(((13409 >> (52123 - 52096))), ((max(52114, 255)))))));
                                var_15 *= ((((1 ? (arr_4 [i_0 + 2]) : (arr_2 [i_0 + 2]))) <= ((65535 ? (arr_6 [i_0] [i_0 - 2] [i_1 + 1]) : (arr_6 [i_0] [i_0 - 2] [i_1 + 1])))));
                                var_16 = ((min(((137 ? (arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [2] [12]) : 9)), 0)));
                            }
                        }
                    }
                    arr_21 [i_0] [12] [i_0] = ((3969786816128658587 ? 18446744073709551615 : (var_2 ^ 0)));
                }
            }
        }
    }
    var_17 = (((-1 ? (max(807650220, 0)) : (13412 <= -3916154073371257492))));
    #pragma endscop
}
