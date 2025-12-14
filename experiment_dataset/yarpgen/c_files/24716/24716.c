/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_15 || (((26388279066624 ? 52 : 1))))) ? 3777061713 : 1));
    var_19 = (251 - var_11);
    var_20 = (1 || 4294967277);
    var_21 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_0] = (17 + -1);
                                var_22 += ((((min((arr_2 [9]), 1210227895))) * (((arr_5 [i_4]) - (arr_5 [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [9] [i_0] [i_2] [i_2] = ((-(0 / -6043179645984810905)));
                                var_23 = ((((((14354798652915465318 ^ -4) & var_8))) || (arr_10 [7])));
                            }
                        }
                    }
                    arr_21 [i_0] = (((((arr_7 [i_0] [i_1] [i_2]) ? 1 : 123904237819503422))));
                    arr_22 [i_0] [i_0] [5] = (min(50066, (!1)));
                    var_24 = (arr_10 [7]);
                }
            }
        }
    }
    #pragma endscop
}
