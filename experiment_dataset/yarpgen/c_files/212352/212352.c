/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 ^= ((var_0 == ((((min(var_2, var_2))) ^ ((481331747672553137 ^ (arr_2 [i_1] [i_2])))))));
                    var_18 = (max(var_18, (((!((((17549163026154849135 < var_3) ^ var_8))))))));
                }
            }
        }
    }
    var_19 = (((!var_1) ? ((((var_10 ? var_3 : var_5)) * (((var_12 ? var_16 : var_10))))) : (((-(var_2 & var_13))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] &= min(((+(((arr_10 [i_3] [i_3] [i_3]) ? var_7 : var_1)))), (min(344365469508291170, var_2)));
                arr_13 [i_3] [7] [7] = (max(((min(var_2, (arr_0 [i_3])))), ((var_4 - (max(var_0, var_14))))));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_20 += (min(var_16, ((var_3 ? var_15 : (arr_14 [i_3] [i_4] [i_3])))));
                    var_21 += ((((((max(-1, 8328424741862539296)) * (1604404986988738957 / 10708732971546503392)))) ? (arr_3 [i_5] [i_4]) : ((((max(var_5, var_10)))))));
                    var_22 += var_2;
                    var_23 -= (var_13 ? (arr_1 [i_5]) : (max(var_11, (arr_7 [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_5] [1] [i_3] [i_7] = (((var_3 ? ((var_14 ? var_3 : var_2)) : (((arr_21 [i_3] [i_4] [i_4] [i_6] [i_7]) ? var_12 : 17965412326036998480)))));
                                arr_26 [0] [i_5] [1] [i_5] [0] = (min(var_2, var_5));
                                var_24 = (max(var_24, (((min((min(var_3, var_3)), var_14)) & (arr_6 [i_6] [i_4] [i_6])))));
                                arr_27 [i_3] [i_3] [i_3] [i_5] [i_3] = (min(91, -4116809763812651971));
                            }
                        }
                    }
                }
                arr_28 [i_4] [i_3] |= 4613191879166265403;
                arr_29 [i_3] = 48;
            }
        }
    }
    #pragma endscop
}
