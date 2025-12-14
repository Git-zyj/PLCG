/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 -= (((((!(!714541739))))) ^ -8191);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = ((((((arr_12 [1] [i_1] [0] [i_3 - 1]) ? (arr_11 [i_3] [i_0]) : 3266265115270770571))) ? (~15180478958438781044) : ((((arr_6 [i_3] [i_2 + 1] [i_0] [i_0]) | -8184)))));
                        arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = (+-1);
                    }
                    var_15 = (((((min((!-1), (max((arr_0 [7]), -10453)))))) | ((~(((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 2]) : (arr_11 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_16 ^= max(-120, -9223372036854775781);
                                var_17 &= ((((((~(arr_0 [i_0]))) ? ((1 ? (arr_12 [3] [3] [3] [i_4 - 1]) : -41)) : -114))));
                            }
                        }
                    }
                    var_18 = -8169;
                }
            }
        }
    }
    var_19 -= (((~-8780218911041775942) ? ((var_2 ? (!var_12) : (~707692305))) : (!1)));
    var_20 = ((-(((1 ? 8666617791507425940 : 2139541189)))));
    var_21 = var_10;
    #pragma endscop
}
