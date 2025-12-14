/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 41;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_1] = (((min(4783684512056721515, var_5)) - (((((1 && (arr_1 [i_0]))) ? (min((arr_0 [i_1] [i_1]), var_7)) : ((((((arr_1 [i_1]) + 2147483647)) >> (((arr_1 [i_0]) + 112))))))))));
                arr_6 [i_1] = (((((1200276699 ? 0 : 65535))) ? 2968097148311507976 : (5196581554759582459 < 65535)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = ((-2968097148311507977 ? -2968097148311507976 : 44));
                            var_21 = ((-((-(arr_10 [i_3] [i_3 + 2] [i_3] [i_3] [i_3])))));
                            arr_13 [i_0] [18] [i_0] [i_0] = ((((((~(arr_2 [i_0]))) != var_1)) ? (arr_8 [i_0] [i_0] [1]) : 47));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
