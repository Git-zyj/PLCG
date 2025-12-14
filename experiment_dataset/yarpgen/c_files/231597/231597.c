/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_14 += ((((((arr_9 [i_1] [i_1]) == var_12))) >= (-1910624320 > -747353072)));
                                var_15 = (~var_7);
                            }
                            var_16 ^= (~-747353072);
                        }
                    }
                }
                var_17 = min((-747353089 | 747353076), 747353108);
                var_18 = ((+((((arr_8 [i_1 - 3] [i_1 + 1] [i_1 - 2]) && (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 4]))))));
                arr_12 [i_0 - 1] = ((((-747353109 >= (arr_11 [i_1 + 2] [i_0 - 1])))));
                arr_13 [i_0] [i_1] [i_1] &= min((min(241, -747353109)), ((-(min((arr_2 [20] [i_0] [i_1 + 2]), -747353089)))));
            }
        }
    }
    var_19 ^= min((((!(var_4 == var_12)))), (((~var_11) << ((((min(var_3, var_9))) - 6913)))));
    var_20 = ((!65535) == 127);
    #pragma endscop
}
