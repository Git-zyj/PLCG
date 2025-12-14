/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (max((max(var_14, (-2 % -650542519462169015))), -650542519462169032));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_19 -= -44;
                                var_20 = (max(((+(((arr_1 [i_0] [i_0]) / (arr_11 [i_0] [i_0]))))), (arr_3 [i_0] [i_0])));
                                var_21 = (min(((((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 - 3]) < (arr_10 [i_2] [i_2] [i_2] [12] [i_2 + 1])))), (max((arr_10 [i_2] [i_2] [0] [i_2] [i_2 - 1]), (arr_10 [8] [i_2] [i_2] [i_2] [i_2 + 1])))));
                                var_22 &= 650542519462169031;
                                var_23 = (min(var_23, ((min(((((arr_11 [i_3 - 3] [8]) <= 1))), (((arr_11 [i_0] [i_0]) / 1886368597)))))));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_24 = (((((arr_15 [i_0] [i_1] [i_2]) ^ (var_15 ^ 11618460146043547049))) >= (((-35 ? -2147483644 : 34041)))));
                                var_25 = (max(var_25, (((((((max(-650542519462169049, 64))) ? (arr_11 [i_1] [i_5]) : ((((arr_12 [i_0] [i_0] [1] [5] [0]) > var_7)))))) ? (min((arr_1 [i_3 - 2] [i_3 - 4]), (arr_2 [i_3 + 1]))) : (min(((min(var_2, (arr_12 [i_3] [i_3] [4] [i_3] [i_3])))), (max(-2147483640, var_8))))))));
                            }
                            var_26 ^= (min((max(var_4, (min(-650542519462168995, 3144181998838017776)))), ((((arr_9 [11] [i_1] [i_3 + 1] [10] [3] [i_0]) ^ 63)))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = var_0;
                var_27 += (min((-101 ^ 650542519462169032), ((((arr_0 [i_0] [i_1]) * -101)))));
            }
        }
    }
    var_28 = ((~(((((max(var_10, var_12))) && var_5)))));
    #pragma endscop
}
