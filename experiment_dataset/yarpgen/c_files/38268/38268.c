/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_9, ((((max((-32767 - 1), 32744))) ? -var_5 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 &= (((arr_5 [i_0] [i_0]) ? (min(32766, var_13)) : ((((((var_3 ? 32763 : -5))) ? -32763 : (var_11 + -76))))));
                    var_17 = (max(var_17, (((arr_6 [i_0]) ? (((((arr_7 [i_2] [i_2] [i_2] [i_2]) <= -1)))) : ((max((arr_7 [i_2] [i_1] [i_1] [i_0]), (arr_4 [i_2 - 3]))))))));
                    var_18 *= ((~(max(-var_11, (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    var_19 *= var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 ^= (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((-4405840148480163065 * 18446744073709551615) / ((-32744 * (arr_5 [i_4] [i_1]))))) : (arr_14 [i_0] [i_0] [i_0] [i_0])));
                                arr_15 [i_3] = (max(((((max(var_4, 18446744073709551595))) ? 237 : (!var_12))), -var_8));
                                var_21 *= 466339352755718124;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
