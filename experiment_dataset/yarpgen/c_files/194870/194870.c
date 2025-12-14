/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((0 ^ 281564695) ? (214 >> 20) : 183))));
    var_11 = (!69);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [10] = 10;
                arr_8 [i_0] [5] [i_0] = ((96459877 <= (((((arr_5 [i_1]) ? (arr_1 [11]) : (arr_0 [i_0]))) << (-55 - 4294967229)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_14 [i_2] [1] [i_3] = (0 | -106);
                arr_15 [i_2] [i_3] = 237;
                var_12 = 90;
                arr_16 [i_2] = ((0 < ((-(arr_5 [i_2])))));
            }
        }
    }
    var_13 = var_1;
    #pragma endscop
}
