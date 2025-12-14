/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [15] = -20191;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] |= max((((-((73 ? (arr_3 [11] [i_1] [i_1]) : var_2))))), (arr_13 [i_4] [i_1 + 2] [i_1] [i_1] [i_1]));
                                var_14 = (min(((-((max(10859, (-127 - 1)))))), (max((arr_0 [i_0 - 2] [i_1]), ((-10860 / (arr_0 [i_1 + 1] [i_4])))))));
                                var_15 -= (min(14971232721248963209, 10915045799689936697));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((~(0 <= 10915045799689936697)))) * (~var_11)));
    var_17 -= ((381718865 ? 4398046511100 : -10860));
    #pragma endscop
}
