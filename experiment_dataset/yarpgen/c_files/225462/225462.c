/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (max(((248 ? (arr_1 [i_0]) : 9223372036854775807)), (((!(arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [1] [i_3] = (-231 > (max(2152105685167653404, (arr_6 [i_0] [i_2] [i_3 - 2] [i_4]))));
                                var_18 ^= (!((min((arr_6 [i_1] [i_1] [i_1] [i_1]), var_13))));
                                var_19 = (min(var_19, 13573710396807562587));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = (max((((min(0, var_9)) ^ var_2)), (((~(arr_3 [i_1] [i_1]))))));
                }
            }
        }
    }
    var_20 = ((((min((var_14 == 0), var_15))) ? ((((((var_7 ? var_15 : 3764138166))) ? (min(1216579669, var_3)) : var_14))) : (((((306660262 ? -248 : var_2))) ? 8309078812316380085 : var_5))));
    var_21 = (min(var_21, 1));
    #pragma endscop
}
