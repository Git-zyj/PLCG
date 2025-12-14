/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] = max((((((var_2 ? var_11 : (arr_5 [i_0] [i_0] [i_0] [i_2])))) / var_9)), (((((max(8652, (-32767 - 1)))) << ((((8652 ? 1148 : 1)) - 1139))))));
                                arr_13 [i_0] [i_1] [i_2] = 109;
                            }
                        }
                    }
                    var_13 = ((-2323836204 ? (((max(var_4, -1)))) : (((((4294967295 ? 4575657221408423936 : var_3))) ? var_5 : (((min(-32765, 32765))))))));
                    var_14 = (((((-(arr_7 [i_0] [i_0] [i_2] [i_2] [i_0])))) / (min((arr_11 [i_0] [i_1] [i_1] [i_1] [i_2]), var_0))));
                }
            }
        }
    }
    var_15 = (min((min((max(var_0, var_9)), (((var_10 ? var_2 : 119))))), (((~146) ? ((var_2 ? -101 : var_9)) : ((min(var_7, var_3)))))));
    var_16 = (max(var_16, (min(((((~var_10) || var_11))), (min((min(780024607, 59)), ((var_6 ? var_11 : 21))))))));
    var_17 = (max(var_17, (~var_3)));
    #pragma endscop
}
