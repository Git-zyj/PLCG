/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min(-32757, (min((arr_1 [i_0]), 1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((((((~(-724039428 <= 1))) + 2147483647)) << ((((~(arr_0 [i_3]))) - 4332281887645308411)))))));
                            arr_8 [6] [i_1] = ((var_9 ? 44610 : (arr_6 [1] [i_1] [5])));
                            var_15 = ((-((+(min((arr_0 [2]), (arr_4 [i_0] [i_0] [i_2])))))));
                            var_16 *= ((-(((min((arr_5 [i_3] [i_2] [1] [i_0]), var_6))))));
                            var_17 = (min((6222 % 301), 44610));
                        }
                    }
                }
                var_18 &= 8870;
                arr_9 [i_0] [i_1] = (min(var_2, (arr_0 [i_1])));
                var_19 |= (arr_1 [i_1]);
            }
        }
    }
    var_20 = (min((!var_11), ((-((868341865 >> (var_3 - 2895821992)))))));
    #pragma endscop
}
