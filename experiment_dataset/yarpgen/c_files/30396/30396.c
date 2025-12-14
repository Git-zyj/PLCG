/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(-23, 0))) ? ((-77 ? 20 : -13274354)) : (((var_5 ? -23 : var_15)))))) ? ((((!(((-13274354 ? 13274365 : 845848493))))))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 &= var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [17] [i_0] = ((-((-(35449 || -1)))));
                                var_18 = 0;
                                var_19 = (((789 - var_8) ? (var_6 & var_11) : (!var_2)));
                            }
                        }
                    }
                    var_20 = (var_8 != var_4);
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((((var_14 >> (2227769701756760942 - 2227769701756760923)))) ? ((-7 ? -38 : var_8)) : -var_5))) || var_3))));
    #pragma endscop
}
