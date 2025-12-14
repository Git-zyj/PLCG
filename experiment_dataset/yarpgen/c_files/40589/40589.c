/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = (arr_5 [i_0] [i_0] [22]);
                        arr_12 [i_1] [i_2] [i_1] [i_0] [i_1] = 1676063365;
                        arr_13 [i_1] = var_12;
                        arr_14 [8] [i_1] [i_2] [i_1] [i_3] = (i_1 % 2 == 0) ? ((((arr_1 [i_2] [i_0 + 2]) << (((arr_8 [i_1] [i_1] [i_1]) - 95384136))))) : ((((arr_1 [i_2] [i_0 + 2]) << (((((arr_8 [i_1] [i_1] [i_1]) - 95384136)) - 187421983)))));
                        var_15 ^= var_1;
                    }
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        var_16 += (((((var_1 * ((var_13 ? var_8 : 75))))) ? var_6 : 1676063359));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_17 = (max(var_17, (arr_6 [i_2] [i_5] [i_2])));
                            var_18 = var_8;
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_22 [i_1] = ((((((((arr_17 [i_1] [i_6]) ? 1676063365 : var_2))) ? var_10 : -76)) - (arr_1 [i_0 + 2] [i_1])));
                            arr_23 [i_1] = (((((arr_0 [i_4]) % ((((arr_15 [i_1]) ? var_4 : var_12))))) <= (((((var_6 <= 2618903930) || var_2))))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_19 ^= (arr_0 [i_0]);
                            var_20 -= var_0;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_21 = (min(2735746031, ((((arr_10 [i_1] [i_0 - 1] [i_1]) ? (arr_10 [i_1] [i_0 - 1] [i_1]) : (arr_10 [i_1] [i_0 + 1] [i_1]))))));
                            arr_32 [i_1] [i_1] [i_2] [i_1] [i_1] = (arr_6 [i_8] [i_1] [i_1]);
                        }
                        var_22 = (i_1 % 2 == zero) ? ((((arr_2 [i_0] [i_1]) / ((((var_7 >> (((arr_6 [i_0] [i_1] [i_0]) - 18064783898732453669)))) - ((1676063371 << (((arr_9 [i_4] [i_0] [i_1] [i_4 - 1]) - 1046716813))))))))) : ((((arr_2 [i_0] [i_1]) / ((((var_7 >> (((((arr_6 [i_0] [i_1] [i_0]) - 18064783898732453669)) - 7938388011433177349)))) - ((1676063371 << (((((arr_9 [i_4] [i_0] [i_1] [i_4 - 1]) - 1046716813)) + 728835524)))))))));
                    }
                    var_23 *= arr_4 [19];
                }
            }
        }
    }
    var_24 = (((var_11 % var_8) || ((min(((min(1676063365, -2147483645))), ((var_6 ? var_8 : var_12)))))));
    #pragma endscop
}
