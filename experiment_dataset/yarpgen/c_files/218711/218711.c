/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 *= 61554;
                var_17 += 6300;
                arr_7 [i_0] = (min(((437778248779862979 ? (arr_2 [i_0]) : (arr_0 [0] [7]))), var_10));
                var_18 = ((((max(var_7, var_0))) ? ((~(arr_1 [i_0] [i_1]))) : (((!((min(var_11, -1694248162))))))));
                var_19 = ((-((-(arr_3 [1] [1] [11])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_20 ^= -var_7;
                    var_21 = ((!(((-((-(arr_8 [i_3]))))))));
                    arr_15 [i_2] [i_2] [i_3] [i_2] = (((arr_9 [10]) || -26));
                }
            }
        }
    }
    #pragma endscop
}
