/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((min((((!(arr_2 [i_0] [i_1])))), ((14 ? var_2 : (arr_2 [i_1] [i_0])))))) ? 0 : ((((((~(arr_1 [i_1])))) ? (((-32767 - 1) ? (arr_2 [i_0] [i_1]) : -2127427109)) : 1)))));
                var_14 = (((((-7 ? (arr_2 [i_1] [i_0]) : 1389780952))) ? ((-1389780953 ? 18602 : 1)) : (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_15 = ((-1299789498 ? 9106453576913620565 : 17916));
    var_16 *= var_1;
    var_17 = ((-1389780948 ? -1 : 3));
    var_18 *= var_10;
    #pragma endscop
}
