/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = 25369;
                                arr_15 [i_0] [i_0] [i_0] = -9;
                                var_14 ^= ((19 ? 0 : 2));
                            }
                        }
                    }
                    var_15 = 23;
                }
            }
        }
    }
    var_16 = ((((min(-9, 194))) ? (((~-10556) ? 18446744073709551615 : 9896891906589316010)) : -650853500));
    #pragma endscop
}
