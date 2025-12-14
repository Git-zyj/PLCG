/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = ((-16 ^ (((min(12, 25))))));
                            var_11 = ((((min(var_4, 12306441674053475930))) ? (((-((min((arr_8 [i_0] [i_0]), 31170)))))) : ((320967304 / (max(var_2, var_7))))));
                            var_12 = (min(((4294967281 % (((-320967293 ? var_2 : 13108))))), (arr_11 [i_0] [i_1 - 2] [i_2] [i_3])));
                        }
                    }
                }
                var_13 = -7253936109241960182;
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4 - 2] [i_5] [i_0] [i_4] = (5937259638437853457 < 18446744073709551600);
                            var_14 = ((~(((!(~320967280))))));
                            var_15 = ((-(((((1899695287 * (arr_9 [i_5])))) ? (arr_10 [i_1] [10] [4] [i_5]) : ((((arr_12 [i_0] [i_1] [i_0] [i_0]) / -8651)))))));
                            arr_18 [i_0] [10] [i_4 - 3] [10] [10] &= (min(8, 35));
                        }
                    }
                }
            }
        }
    }
    var_16 = (~var_7);
    #pragma endscop
}
