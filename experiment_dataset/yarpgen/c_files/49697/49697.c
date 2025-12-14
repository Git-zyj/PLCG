/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((~4294967282) ? ((8774 ? 26628 : 4294967282)) : (~-26628)));
    var_16 = (min(var_16, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 1] = (((((2711417139 ? 65512 : (((arr_2 [i_0]) ? 2711417139 : -3927))))) ? (arr_5 [i_0] [6] [i_0]) : 79));
                var_17 ^= (((arr_0 [1] [1]) ? (((arr_3 [i_0] [i_1]) ? (arr_5 [i_0] [i_1] [i_0]) : 9)) : 1));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [0] = (26628 ? (arr_1 [i_0]) : (((arr_1 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0]))));
                    var_18 -= 0;
                    var_19 = (((arr_5 [i_0] [i_0] [i_0]) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_8 [8]))) : 125));
                }
                arr_11 [i_0] &= (((arr_5 [8] [8] [i_1 - 1]) ? 594234132 : ((((((28350 ? 39284 : 8435195933363940174))) ? ((6692 ? (arr_1 [i_0]) : 0)) : (arr_0 [16] [10]))))));
            }
        }
    }
    #pragma endscop
}
