/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((221 ? -1 : var_4)))) || 0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((((9223372036854775792 ? (arr_1 [i_0] [i_0]) : 18446744073709551599))) && (!4)))) >= (((268435328 || (18446744073709551590 - -126))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((!((((10227 >= 144080003703767040) ? -125 : ((175 & (arr_9 [i_2] [i_3] [i_3] [i_2] [1] [i_0 + 1])))))))))));
                                var_12 |= ((-(((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (508846805 - 508846805))) & (((-32767 - 1) ? (arr_9 [i_0] [i_0] [i_2] [i_3] [1] [14]) : -113))))));
                                arr_13 [i_1] [i_3] [i_2] [0] [i_1] |= 36;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [6] [12] &= (((5279015321130061314 ? 17 : (arr_12 [8] [i_0] [i_0] [i_0] [i_0 + 1] [i_2] [i_2]))) << (((arr_2 [i_0]) - 242)));
                }
            }
        }
    }
    #pragma endscop
}
