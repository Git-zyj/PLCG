/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((((max(160, var_7)))) | (4502500115742720 | 18446744073709551615))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_0] [i_0] = (min(var_3, (((((min((arr_0 [i_0]), var_0))) && ((max((arr_1 [i_0]), var_7))))))));
                    arr_10 [i_1] [13] = (!44208);
                    arr_11 [13] [i_2] [10] [10] = 224;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 ^= (((((arr_5 [i_3] [i_1] [i_3 - 1]) ^ (arr_5 [i_0] [11] [i_3 - 1]))) == ((~(arr_5 [i_3] [i_1] [i_3 - 1])))));
                                var_12 = ((~((min(var_5, (arr_0 [9]))))));
                                arr_16 [i_3] [i_1] [5] [1] [i_3] = (~var_3);
                                var_13 = (min(var_13, (arr_3 [i_0])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_1] [i_2] = (((arr_7 [12] [9] [i_2] [i_2]) || -16129));
                }
            }
        }
    }
    var_14 ^= var_1;
    var_15 = var_7;
    var_16 |= ((var_7 ? 3203293947 : (((-65535 + ((max(-115, 200))))))));
    #pragma endscop
}
