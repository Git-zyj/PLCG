/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8184;
    var_17 &= (252 <= var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 |= (((((0 ? var_13 : var_7) > (((arr_3 [i_0] [i_2]) ? var_9 : -764523854))))));
                    arr_7 [i_0] [i_1] = var_0;

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_19 = ((((max(-764523837, 18446744073709551615))) ? 11956 : -122));
                        var_20 = (max(var_20, (!764523854)));
                        var_21 += var_13;
                        var_22 = (arr_9 [i_3 + 1] [i_3] [i_3]);
                        var_23 = (((arr_8 [i_0] [i_0] [i_1] [14] [i_2] [i_3]) ? (arr_1 [5]) : ((var_1 ? ((max(1, 65535))) : -764523854))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_12 [1] [i_1] [1] [1] = (!4194296);
                        var_24 = (max(var_24, 114));
                    }
                }
            }
        }
    }
    #pragma endscop
}
