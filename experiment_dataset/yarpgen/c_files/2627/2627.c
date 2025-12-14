/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (0 == (min(-5460625713861782188, 2)));
                    var_10 -= -108;
                    var_11 = 11870356754119092040;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 ^= var_7;
                                var_13 = -var_6;
                                var_14 = (min(var_14, ((((((var_7 ? -114 : (arr_3 [i_4] [i_1] [i_1]))) ^ ((~(arr_9 [i_0 + 3] [i_0 + 3] [i_2] [i_3])))))))));
                                arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (((((arr_2 [i_2 - 1] [i_4]) ? (2041905226 <= var_7) : (arr_9 [i_2 + 1] [i_2] [i_0 + 1] [i_1]))) / (((0 ? 65535 : 110)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_15 = (i_6 % 2 == zero) ? (((9219 << ((((((~(arr_21 [i_6]))) | (((min(255, -125)))))) - 2416018540077012883))))) : (((9219 << ((((((((~(arr_21 [i_6]))) | (((min(255, -125)))))) - 2416018540077012883)) - 2785992616627404330)))));
                                arr_29 [i_6] [i_9] [i_6] [i_8] [i_9] [17] [i_7] = (-1 ? var_4 : (((65535 ? 21728 : var_8))));
                            }
                        }
                    }
                    var_16 = ((-(max((arr_17 [i_5] [i_5]), (min((arr_25 [i_5] [i_5] [i_6] [i_6] [i_6] [19]), var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
