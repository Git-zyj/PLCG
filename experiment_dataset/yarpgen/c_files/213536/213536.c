/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((((-3 | ((min(-119, 1884004383)))))) ? (((min(57, 0)))) : (((min(-1290917330, 4294967291)) | (((min(1022, -27671))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 |= (((102 / 18446744073709551615) & 4));
                                var_19 = (((1884004383 / 2715067641) + (((-127 ? 1 : 127)))));
                                arr_13 [15] [i_1] [14] [i_4] [i_4] = (((-1 == 8987) == (min(((8987 ? 9123 : 0)), 0))));
                            }
                        }
                    }
                    arr_14 [21] [21] [i_2] = (((70 || 2808827314857992172) ? (1 || -1482243284) : (8386560 || -102)));
                    arr_15 [i_1] = (252 ? (9007199254740991 >= -3) : -34);
                }
            }
        }
    }
    var_20 = ((var_12 ? ((((min(8386560, 1))) ? 262208332 : (min(11436605006906498119, -3)))) : var_7));
    #pragma endscop
}
