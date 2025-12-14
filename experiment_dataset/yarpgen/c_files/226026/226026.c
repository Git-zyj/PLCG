/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] = min(((max((arr_2 [i_2 - 1] [i_2 - 1]), (arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))), (arr_3 [i_2 + 1] [i_0 + 3] [i_0 + 2]));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_16 -= (arr_6 [i_0] [10] [i_2] [10]);
                        var_17 = (arr_1 [i_0] [i_0]);
                        arr_10 [i_2] [i_1] = ((536870910 % (arr_5 [i_0 + 2] [i_0 + 2] [i_2])));
                        var_18 = ((-(arr_6 [7] [i_2] [i_2] [i_2])));
                    }
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        var_19 = ((-32768 != ((-(arr_4 [i_2] [i_2] [i_4 - 3])))));
                        var_20 -= (-536870911 / -536870911);
                        var_21 &= (arr_13 [20] [i_2 - 2] [i_1] [i_0] [20]);
                    }
                }
            }
        }
    }
    var_22 = (max(4032, 36028797018955776));
    #pragma endscop
}
