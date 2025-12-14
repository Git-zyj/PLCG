/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_17 = ((((min((var_14 || 7285558666777406687), (max(var_5, var_9))))) ? (((((7285558666777406717 ? var_8 : 7285558666777406718))) ? ((((arr_4 [i_0 + 1] [i_0 + 1]) ^ (arr_2 [i_3])))) : (7285558666777406726 & 23343))) : var_8));
                                var_18 -= (((+-18446744073709551611) ? (min((((arr_8 [i_0]) ? 1 : 31744)), var_7)) : var_5));
                                var_19 = ((((((arr_5 [i_2 + 2] [3] [i_4]) % (arr_13 [i_0] [2] [i_0] [i_0] [i_0])))) / (max(var_13, -32746))));
                            }
                            var_20 = (max(((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))), (((((arr_1 [i_2 + 1]) + 2147483647)) >> ((((arr_10 [i_0 - 1] [i_2] [i_1] [3] [i_0 - 1]) == var_7)))))));
                            var_21 = var_2;
                        }
                    }
                }
                var_22 *= ((!(((266429496 ? var_16 : var_15)))));
            }
        }
    }
    var_23 = ((var_6 ? (45 % 7285558666777406684) : -var_7));
    var_24 ^= ((-64 ? 1 : 54));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_25 ^= 2628060882;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_26 &= var_13;
                                var_27 = (min(var_27, ((((!(arr_23 [i_5] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))))));
                                var_28 ^= (min((min(var_11, (max((arr_17 [i_5] [i_5] [i_5]), (arr_15 [i_5 + 1] [i_5 + 1]))))), ((((arr_18 [i_5]) & var_14)))));
                            }
                        }
                    }
                }
                var_29 -= (arr_23 [i_5 - 1] [i_5 - 2] [i_5 - 2] [17] [i_5 + 1]);
            }
        }
    }
    #pragma endscop
}
