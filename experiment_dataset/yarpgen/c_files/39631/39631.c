/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-29 ? -13 : -15727));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = (~var_6);
                            var_16 -= var_5;
                        }
                    }
                }
                var_17 += (((arr_10 [i_0 - 2] [i_1] [i_0] [10]) ? (((~var_13) * (arr_8 [i_0] [17] [8] [i_1]))) : (((~var_7) ? (((arr_10 [i_0] [i_0] [i_0] [14]) ^ (arr_7 [i_1] [i_0] [i_0]))) : ((~(arr_10 [2] [i_1] [i_1] [12])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = (~-99);

                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 17;i_6 += 1)
                            {
                                var_19 = (var_3 + ((12 ? var_12 : -4986575386863925028)));
                                var_20 ^= ((var_12 ? -13 : 809035707147145848));
                                var_21 ^= (!442095924935206661);
                                var_22 = -17;
                                var_23 = ((-(((arr_9 [i_1] [i_4] [0] [i_0]) ? (arr_16 [i_6] [i_5] [i_4] [i_1] [i_0]) : (arr_12 [i_0] [8] [i_6])))));
                            }
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_24 ^= (min(((~((var_5 ? 17637708366562405767 : 6381353655010799290)))), (11015105234869231149 && 180)));
                                var_25 = (arr_12 [i_0] [i_4] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                var_26 = -304087533;
                                arr_27 [i_0] [i_1] [i_4] [i_1] [i_1] [i_0] = ((-((var_9 ? 304087533 : 304087533))));
                                var_27 = (min(var_27, var_3));
                                var_28 = (max(var_28, ((142 ? (-4045939963535398417 + var_6) : -0))));
                                var_29 = 6020;
                            }
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                var_30 = -var_2;
                                var_31 += (((((241 ? (arr_1 [i_1]) : ((var_12 ? 224 : (arr_3 [i_5])))))) ? (((var_5 <= ((-10 ? var_8 : 59515))))) : (arr_6 [i_0] [i_4] [i_9])));
                                var_32 *= (+-1);
                            }
                            arr_31 [i_1] [i_0] [i_5] = ((~(min(4081, ((var_9 ? (arr_12 [i_1] [i_1] [i_0]) : (arr_22 [i_5] [i_0] [i_4] [i_1] [i_0] [i_0 + 1])))))));
                            var_33 = (max(var_33, (((+((((((arr_6 [i_0 - 1] [12] [12]) ? -74684231 : 119))) ? (0 && var_2) : (((arr_17 [i_5] [i_1]) ? var_5 : -48)))))))));
                            var_34 = (-1875051483 & 386603656);
                        }
                    }
                }
                var_35 = ((!((min(((-84 ? (arr_7 [i_0 + 1] [i_0] [i_1]) : 28445)), (((arr_16 [i_0] [i_1] [i_1] [i_1] [i_0]) ? 2964 : -304087533)))))));
            }
        }
    }
    #pragma endscop
}
