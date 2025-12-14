/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (arr_5 [i_1]);
                arr_7 [i_1] [i_0] = 960;
            }
        }
    }
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] &= (13212130741231861604 % 15513);
                arr_16 [i_2] [i_2] [i_2] &= ((((((((arr_11 [i_2]) ? -864050295 : 18446744073709551602)) <= (arr_5 [i_2])))) / var_11));
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
