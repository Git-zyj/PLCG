/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(--4)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, -2622485363298132682));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = ((-((-((~(arr_10 [0] [i_2] [i_2] [i_2] [i_2] [1])))))));
                                var_18 = (!-6858);
                            }
                        }
                    }
                    var_19 &= (+-3);
                    arr_16 [i_2] = 2622485363298132688;
                    var_20 ^= -var_7;
                }
            }
        }
    }
    var_21 = (max(var_21, -var_3));
    #pragma endscop
}
