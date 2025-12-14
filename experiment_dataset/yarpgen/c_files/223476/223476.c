/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 += (max(2848, (arr_0 [i_0] [i_0])));
        var_19 = var_16;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            {
                var_20 += (max(5872319957581339037, (((!(arr_7 [i_1] [i_1 - 2] [i_2]))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_21 &= ((((min((max(5872319957581339037, 57)), var_15))) ? (((!(((1270974515 << (5872319957581339037 - 5872319957581339037))))))) : (!12574424116128212578)));
                                var_22 = (max(var_22, var_1));
                                var_23 &= (24970 <= 12574424116128212579);
                                var_24 = (max(var_24, (((-((((arr_8 [7]) ? 59 : 6474))))))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, var_12));
            }
        }
    }
    var_26 = -var_12;
    var_27 += var_10;
    #pragma endscop
}
