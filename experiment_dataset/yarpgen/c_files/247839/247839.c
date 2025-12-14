/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [2] [i_1 + 1] &= (min(8979, (!-9223372036854775798)));
                var_18 = (min(var_18, (((!(((((max(1, (arr_1 [i_0] [i_1])))) ? (arr_0 [i_0]) : ((~(arr_1 [i_0] [i_1])))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((var_14 ? (arr_8 [i_2]) : (18446744073709551594 + 134201344)));
                    arr_14 [i_3] &= (min(1, 8981));
                }
            }
        }
    }
    #pragma endscop
}
