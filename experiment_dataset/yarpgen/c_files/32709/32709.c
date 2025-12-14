/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((3458764513820540928 % (max(1, 3888308099353117223)))) << (var_5 + 5600000331945765243)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 -= (((((+(((arr_9 [i_0] [i_0] [i_3] [i_4] [i_4] [i_1]) ? -1010 : (arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (3458764513820540928 / 1879048192) : -999));
                                var_13 = 2106743119;
                                var_14 = ((0 ? (((((((arr_1 [i_0] [i_0]) ? -993 : (arr_0 [i_0])))) ? ((max(-2053, 976))) : (arr_5 [i_0] [i_0])))) : ((((((arr_1 [i_0 - 1] [i_1]) ? 1 : (arr_6 [i_0] [i_1] [i_2] [i_3])))) ? ((((arr_7 [i_0] [i_1] [i_2] [i_2]) ? 2188224188 : -7728575185753206674))) : (((arr_2 [i_0] [i_1]) ^ (arr_6 [i_0] [i_0 + 4] [i_0 + 2] [i_0 + 4])))))));
                            }
                        }
                    }
                    var_15 = 0;
                }
            }
        }
    }
    var_16 += ((~(max((~-26083), 1))));
    #pragma endscop
}
