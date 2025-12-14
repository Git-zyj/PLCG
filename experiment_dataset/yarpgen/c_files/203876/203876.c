/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((191 ? 1265372895 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 -= ((((216 ? -2152141194396531282 : 243))) ? 29922 : ((+(((arr_0 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))));
                            var_17 -= (arr_9 [i_0] [i_1] [i_0] [i_3]);
                        }
                    }
                }
                arr_10 [i_0] [3] = (((arr_1 [i_1]) >= ((-(765474888150576942 << 1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 -= ((((((41171 ? -var_5 : var_7)) + 2147483647)) << (((var_7 >= (max((arr_14 [1]), var_11)))))));
                    var_19 -= ((!(((0 + ((-(arr_1 [i_5]))))))));
                }
            }
        }
    }
    var_20 = (max(var_9, var_2));
    #pragma endscop
}
