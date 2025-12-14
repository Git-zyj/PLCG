/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 = (min((((arr_3 [i_0 - 2]) ? -4073589657795658281 : -775751603616214148)), (((-(arr_3 [i_2]))))));
                            var_20 = ((((-(arr_9 [i_0 + 1])))) ? (arr_4 [i_3 + 3] [i_2]) : (((arr_9 [i_3 + 3]) % (arr_9 [i_0]))));
                            var_21 = min(((~(max((arr_7 [i_0] [i_1] [i_0]), 6649015541817584492)))), (((!(arr_7 [i_3 - 1] [i_1] [i_0 - 1])))));
                        }
                    }
                }
                var_22 *= (arr_7 [i_0] [i_1] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_23 = (max(var_23, var_12));
                var_24 -= ((((69 ^ (arr_18 [i_4] [i_4])))) ? (arr_18 [i_5] [i_4]) : ((33554431 ? (arr_18 [i_4] [i_4]) : -1597053894041871453)));
            }
        }
    }
    #pragma endscop
}
