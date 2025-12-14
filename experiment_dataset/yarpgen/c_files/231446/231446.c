/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((65024 - 25) - ((((511 - 230) ? 15221689235511905530 : (511 + 2070))))));
    var_21 = (max(var_21, (((var_14 ? 2064 : var_8)))));
    var_22 = ((-(--32)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_23 = ((1 + ((63481 ? -4901651584394486631 : -1))));
                            var_24 |= 208;
                            var_25 = ((~((1 ? 1 : -9232))));
                            var_26 += (max(12872, -2956838274020416972));
                        }
                    }
                }
                var_27 = (max(var_27, (1 && 1)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_28 -= (((1 - 1) | (max(9232, ((-17057 ? 7344 : 0))))));
                            arr_17 [i_1] [i_4] [i_4] = (max((((min(-17087, 1135382476)) + -146)), ((((max(0, 1)) ? (1 + 1) : ((max(1, 63447))))))));
                            var_29 = ((((12796 * 41863) ? 1 : -28)));
                        }
                    }
                }
                var_30 &= (((2061 ? (-9223372036854775807 - 1) : (~9))) != 63468);
            }
        }
    }
    var_31 = (((!(1 + 63425))));
    #pragma endscop
}
