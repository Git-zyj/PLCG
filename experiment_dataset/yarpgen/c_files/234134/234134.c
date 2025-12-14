/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(((((!22) || var_15))), var_10)))));
    var_18 = (min(var_18, ((((var_13 ? var_8 : (!22)))))));
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_4 [i_0] [i_1 - 2])));
                                arr_14 [i_0] [3] [i_1] [i_0] [0] [i_3] [i_4] = ((!(((-(arr_11 [i_0] [i_0] [6] [i_3 - 1] [i_4] [i_3]))))));
                                var_21 ^= (-5557427242656374384 == 908781);
                            }
                        }
                    }
                    var_22 = ((+((var_5 ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 + 1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
