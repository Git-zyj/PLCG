/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!((((var_5 ? (arr_2 [i_1]) : var_6)) != (arr_3 [i_0 + 1] [i_0 + 2])))));
                var_13 = (max(var_13, ((((min(1, 1)))))));
                var_14 += (((((54999 ? 1 : (1 || 1)))) ? 14472976095503930705 : -23937));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_0]);
                            var_16 = (0 != 1);
                            var_17 = (((114 > 4294967278) <= ((33554431 ? 1195834343 : 1))));
                            arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 2] = (((((!(arr_8 [i_0])))) >= (-28451 != 0)));
                            var_18 = (-1 ^ 217699220427691205);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_19 = -91;
                var_20 = (max(1, -1195834359));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    var_21 = (min(var_21, (!-2)));
                    var_22 ^= 16862469340505841811;
                    var_23 = (((arr_16 [i_7] [i_7]) ? (!-6889215126072630027) : (((((64024 ? 2375145863 : 0))) ? (((-9223372036854775807 - 1) ^ 208914249)) : (0 || 4294967295)))));
                }
            }
        }
    }
    #pragma endscop
}
