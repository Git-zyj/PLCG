/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = (((((max(3708928649, 24791))) ? (~8606126601703876541) : var_3)));
                    var_13 ^= (((max(-1566112402, -1)) % ((~(arr_3 [4])))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_0 + 2] [i_1] [i_3 - 2] [i_0] = ((~(min((~var_5), (max(586038647, var_4))))));
                                var_14 ^= (min(9, (arr_11 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0])));
                                arr_17 [19] [i_0] [i_3] [i_0] [i_0] = (~((-5 ? 3431969477205187427 : -11175)));
                            }
                        }
                    }
                    var_15 &= ((((arr_10 [i_0] [i_0] [i_0] [22] [i_0] [i_0 + 1]) ^ (((arr_14 [i_0 - 2] [i_1] [i_1] [i_3] [i_1] [i_3] [i_3]) ^ (arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_16 += ((~((~(min((arr_7 [4] [4]), var_3))))));
                    arr_21 [i_0] [i_0] = (~var_9);
                    arr_22 [i_0] [i_0] [i_6] = 15014774596504364188;
                }
                var_17 = (max((arr_20 [i_0] [i_1] [i_1 + 2] [i_1 + 1]), (586038642 & 1500891467)));
            }
        }
    }
    var_18 = ((((var_5 != ((var_8 ? 1 : var_1)))) ? (max(((var_9 ? var_3 : var_9)), var_7)) : (((((var_9 ? var_0 : var_10))) ? (((min(64, var_11)))) : (3431969477205187427 & var_11)))));
    #pragma endscop
}
