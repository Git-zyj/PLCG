/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 + 4650);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = var_11;
                    arr_8 [i_2] [i_0] [i_0] = (((~(-1 | 110))));
                    var_13 = ((-3120567120395563132 ? (~-8999699993082901385) : 18446744073709551599));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_14 = (arr_4 [i_0] [i_0]);
                                var_15 ^= (~var_0);
                                var_16 ^= (((arr_13 [i_4] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [i_0] [5]) ^ var_0));
                                arr_14 [9] [i_1] [i_4] [i_1] = (min(((max(((var_6 ? var_1 : var_10)), ((max(1085731532, 33)))))), var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
