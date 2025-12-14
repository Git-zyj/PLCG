/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = 9216323760779969201;
                arr_6 [i_1] [i_1] = var_11;
                arr_7 [i_1] [i_1] [i_1] = (arr_4 [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1] = (max(((((arr_4 [i_0] [i_1] [i_1]) && 9216323760779969201))), ((var_13 ? 950840303 : 1))));
                            var_19 |= (arr_10 [i_1] [10] [i_2]);
                        }
                    }
                }
                var_20 ^= ((((max(-950840274, var_16))) >> (var_9 - 1432855783)));
            }
        }
    }
    var_21 = ((~(((-950840273 | 950840303) ? (((max(var_13, var_1)))) : ((var_8 >> (var_3 - 52205)))))));
    var_22 = var_15;
    #pragma endscop
}
