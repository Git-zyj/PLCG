/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_10 |= (!-var_2);
                                var_11 &= ((!((min(var_4, ((((arr_9 [i_3] [i_1] [i_1] [i_2] [4] [i_3] [i_4 - 1]) ? var_5 : var_3))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_12 ^= ((((((3 || var_5) ? ((9223372036854775807 ? 22382 : 7834575889203705404)) : ((((!(arr_12 [17] [i_1] [i_2] [i_5 - 1])))))))) ? (arr_5 [i_0]) : ((min(var_9, var_9)))));
                                var_13 *= (((((var_8 & (max(3533872971916728677, 7834575889203705404))))) ? 0 : 7837992952759881260));
                                var_14 = (!0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 += var_4;
    var_16 |= ((-var_8 ? var_4 : (~var_2)));
    var_17 = ((var_7 ? var_0 : ((var_1 ? -var_3 : (var_7 - var_7)))));
    #pragma endscop
}
