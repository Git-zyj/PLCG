/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 36597;
                arr_7 [i_0] [i_1] [i_0] = 0;
                arr_8 [i_0] [i_0] [i_0] = ((var_9 || (((~(arr_0 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                var_18 = (((max(19, (arr_3 [i_3]))) << ((((arr_9 [i_3 + 1]) == (arr_3 [i_3]))))));
                var_19 = (min(var_19, 21410));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            {
                arr_19 [i_5] [i_4] = (arr_9 [i_4 - 1]);
                var_20 *= (((((max(var_3, 1729382256910270464)))) ? (var_9 / var_10) : (min((arr_16 [i_5]), var_11))));
            }
        }
    }
    #pragma endscop
}
