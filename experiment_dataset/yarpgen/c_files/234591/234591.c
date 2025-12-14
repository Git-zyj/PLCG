/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~0);
                arr_7 [i_0] = (((~-3) ? (((~252) / 18771)) : (((~32767) ? -32767 : 391997370))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 += (((~1) ? (((((~1) + 2147483647)) << (0 & 3))) : ((~((15630 ? 1 : -67))))));
                            var_17 &= 15625;
                            arr_14 [i_0] [2] [i_2 - 1] [i_2] [i_0] = (((((1 ? 76 : 228) / -104315117))));
                            var_18 = ((~((~((49888 << (-857831306 + 857831314)))))));
                        }
                    }
                }
                arr_15 [i_0] = 857831307;
            }
        }
    }
    var_19 = (max(var_19, (((18446744073709551615 & (((~(~146)))))))));
    #pragma endscop
}
