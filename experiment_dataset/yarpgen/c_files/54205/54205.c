/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min(31, (((arr_7 [i_0] [i_1] [i_0] [i_0 - 1]) ? (((((arr_1 [i_0] [i_0]) >= 225)))) : ((1073741823 ? 8323616504352491474 : -8323616504352491475))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [i_0] [15] [17] [14] [i_3 - 1] [15] = var_14;
                                var_19 -= arr_0 [i_4];
                            }
                        }
                    }
                    var_20 = (((var_10 << var_11) & (min((((-23691 ? 23690 : -23691))), 4097282409))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [3] [i_2] [i_0] [16] [i_0] = ((-18382 ? 4097282413 : (min((((arr_20 [i_6]) | 25723)), (-23691 && 1)))));
                                var_21 -= ((((((((var_11 ? 8323616504352491474 : 29238))) ? ((((arr_5 [4] [4] [8]) & (arr_2 [i_0] [i_0])))) : (min(4575657221408423936, 8191))))) ? (((!-462250869) % 65)) : ((((~var_5) < ((((arr_2 [i_1] [5]) * (arr_19 [8])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (!1);
    #pragma endscop
}
