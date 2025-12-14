/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0 + 2] [i_1] [i_1] [i_0] = ((~(arr_3 [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_1] &= var_4;
                                var_14 = (max(var_14, (((~(arr_8 [i_0] [i_3 - 1] [i_2] [i_3 + 2]))))));
                                var_15 = (max(var_15, (var_3 != var_10)));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4 - 2] = (var_5 ? ((5991 ? 14173 : -14173)) : var_7);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 ^= (((53055 * (arr_5 [i_0 - 1] [14] [i_5]))));
                                var_17 = (min(var_17, (!-14169)));
                                var_18 = (arr_20 [i_0]);
                                arr_21 [i_0] [i_1] [i_1] [2] = 0;
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((((max((6 && -2), -95)) <= 909719168)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_20 |= (max(0, 51780));
                                var_21 = ((max((arr_30 [i_0 + 2] [i_0 - 1]), (arr_30 [i_0 - 1] [i_0 + 2]))));
                                arr_31 [i_0] = (((((-3 & var_2) | (~11024447777374483821))) & 14213576078311696387));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((min(var_3, (min(var_3, var_10))))) && var_1));
    #pragma endscop
}
