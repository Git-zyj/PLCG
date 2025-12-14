/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] [i_0] = ((~(arr_1 [0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = 56;
                                arr_14 [i_0] [i_0] [i_0] [7] [14] = ((max(56, (arr_12 [i_0 - 1]))) >> (((((-2147483647 - 1) - -2147483625)) + 49)));
                                var_20 *= (max(((8176 ? 8176 : (-9223372036854775807 - 1))), (((((arr_5 [i_0] [i_3]) == 782067126))))));
                            }
                        }
                    }
                    var_21 |= max((((var_17 < (arr_13 [i_0] [i_0 + 1] [i_2] [i_2 - 1] [i_2] [i_2])))), var_17);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [0] = ((((1950616233 ? (~-413167797) : 57709)) & (max(-1374135632, 3))));
                                arr_21 [i_0] [i_2] = max((((!(arr_8 [i_5 - 2] [i_6] [i_6 - 2])))), 524287);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((max((~var_14), (((4057553781 ? -635186874 : -23179))))) < 30839));
    var_23 = ((((((var_4 ? 184 : var_6)) ^ var_7)) + (((max(var_2, -3134130854513524424)) / (((var_6 ? var_13 : var_3)))))));
    var_24 = ((var_12 ? 0 : (((!-94) ? 4294967295 : 6887212873475237782))));
    var_25 = ((var_0 ? (((3 | var_5) ? var_11 : (var_9 % var_3))) : ((((((134215680 << (((var_16 + 1535060237) - 7))))) ? (var_0 & -23179) : -var_16)))));
    #pragma endscop
}
