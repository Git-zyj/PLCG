/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 -= var_15;
                var_22 = (max(var_22, ((((-1 + 2147483647) << ((min((arr_1 [i_0] [i_0]), var_18))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_1] [i_2] = ((-(((!(arr_0 [1]))))));
                                var_23 = arr_5 [i_4] [i_3 - 1] [i_1];
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_24 = (min(var_24, ((min(((~((~(arr_5 [1] [i_2] [i_0]))))), (arr_1 [i_5] [i_3 - 1]))))));
                                var_25 = var_3;
                                var_26 *= ((-((~(arr_11 [i_5] [1] [1] [1] [i_5])))));
                            }
                            arr_18 [i_1] [1] [i_2] [i_3 - 1] [1] [i_2] = (!(arr_2 [i_0] [i_3 - 1]));
                        }
                    }
                }
                var_27 ^= 0;
            }
        }
    }
    #pragma endscop
}
