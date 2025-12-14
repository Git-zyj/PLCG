/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-26678 > 31899);
    var_16 = (((((var_2 ? var_5 : 32768))) >> (((32797 - -17745877681360858899) - 17745877681360891684))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [15] = (((var_1 | var_12) - (((var_4 && ((((((arr_4 [i_1] [i_2]) + 2147483647)) >> (var_3 + 8582459450325224527)))))))));
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_4] [i_0] [i_2] = (min(3898533192400157769, (arr_5 [i_1 - 3] [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
