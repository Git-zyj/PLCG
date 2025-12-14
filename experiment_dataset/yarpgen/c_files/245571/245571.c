/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 *= (var_7 && ((((((11255326781807311270 << (var_8 + 17442)))) ? var_9 : (min(7191417291902240353, -114))))));
    var_20 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (((((arr_4 [i_0] [i_1] [i_1]) ? (((arr_4 [i_0] [i_0] [i_1]) | 1459798317007291795)) : (1459798317007291805 & 1459798317007291805))) & var_5));
                var_22 = (min(var_22, (arr_3 [1] [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 ^= ((-(((3697902538308535656 && (arr_2 [i_0]))))));
                    arr_8 [i_0] [i_1] [i_2] &= (((min((((arr_1 [i_0] [i_0]) & (arr_2 [i_1]))), (15264 <= var_5))) & (((arr_0 [i_2] [1]) ? var_9 : 11255326781807311276))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_17 [i_4] [i_1] [i_3] [i_4] [i_4 - 3] [i_3] = var_4;
                                var_24 &= ((-7985353114665667280 ? 9006099743113216 : 3272732783833939531));
                                arr_18 [i_0] [i_1] [8] [i_4] [8] = ((((((arr_14 [i_4] [i_5] [i_5 - 1] [i_5 + 1] [i_4 - 3] [i_4]) & (arr_14 [i_4] [6] [i_5 + 1] [i_5 - 1] [i_4 + 1] [i_4])))) ? (~11255326781807311264) : (((var_3 ^ (arr_4 [i_4 - 1] [i_5 + 2] [i_5 + 2]))))));
                            }
                        }
                    }
                    arr_19 [i_0] [6] = arr_12 [i_3] [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_0] [i_3] = (arr_11 [i_0] [i_1] [7] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
