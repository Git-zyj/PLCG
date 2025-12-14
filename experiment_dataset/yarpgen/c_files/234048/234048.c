/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1239860453;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((var_11 ? (arr_2 [4] [i_1] [i_1]) : 255)))));
                var_18 = (min(var_18, ((((!(arr_2 [i_0] [i_1] [i_0]))) ? ((((6996792492649957040 && ((min(var_13, var_12))))))) : var_12))));
                var_19 = ((-var_11 ? 372788835 : var_14));
                var_20 *= (!var_11);
                var_21 = var_12;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 &= ((((!(arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 3] [i_6 + 1] [i_6 - 1]))) ? (((((((arr_9 [i_2]) ? 11449951581059594576 : 1))) ? (((arr_0 [i_2]) ? 1 : 0)) : 2687670319))) : -var_6));
                                arr_17 [i_2 - 3] [1] [i_4] [i_6] [i_2 + 4] [4] [i_2] = ((~(arr_3 [i_2 - 2])));
                            }
                        }
                    }
                    var_23 -= (((var_6 + ((31 ? 6996792492649957030 : 3654585307)))));
                }
            }
        }
    }
    #pragma endscop
}
