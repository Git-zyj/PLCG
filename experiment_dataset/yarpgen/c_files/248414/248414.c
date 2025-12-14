/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((+((max((arr_3 [i_0 - 2] [i_1 + 1]), (arr_3 [i_0 + 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] |= var_4;
                                var_17 ^= (max((((((18446744073709551607 ? (arr_6 [i_1]) : -4096))) ? (arr_15 [i_0] [i_0] [i_2] [i_3] [i_1] [i_1]) : ((min((arr_12 [i_0] [i_1 + 2] [i_2] [i_0] [i_4]), 119))))), (((((var_6 ? (arr_14 [i_0] [i_1] [i_1] [i_3]) : var_11)) == ((min(-7554, var_6))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] |= arr_10 [i_1] [i_1 - 2] [i_2] [i_0];
                                arr_18 [i_2] = (min(-4125533030, 708360650));
                            }
                        }
                    }
                    var_18 |= var_13;
                }
            }
        }
    }
    var_19 = max((max(((max(var_12, 4345))), -var_15)), 4106);
    var_20 = (max(var_20, ((4096 & (1 & 2477365579698434481)))));
    var_21 = min((25955 < -2076308752), (max((((8059221492482147711 ? 169434266 : 48))), ((4125533030 ? var_5 : (-9223372036854775807 - 1))))));
    var_22 |= var_9;
    #pragma endscop
}
