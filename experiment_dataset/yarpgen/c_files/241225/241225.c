/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((((max(var_9, var_11)))) <= ((var_5 ? var_0 : var_10))))), ((var_2 ? (var_4 + var_6) : (max(var_13, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [14] [i_2] &= max(var_0, ((((var_13 ? var_2 : var_5)))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = ((((max(var_0, var_7))) ? (((var_12 ? var_10 : var_3))) : (max(var_7, var_8))));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_16 = (max(var_16, (((!(((((var_9 ? var_7 : var_7))) < (min(var_4, var_4)))))))));
                            var_17 *= (((var_1 == var_4) ? (max(((max(var_4, var_9))), ((var_5 ? var_9 : var_13)))) : ((((min(var_7, var_12))) ? var_3 : ((var_4 ? var_12 : var_0))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = (((max(var_5, ((var_13 ? var_1 : var_2))))) / (((((var_3 ? var_4 : var_8))) ? (min(var_13, var_9)) : (((var_13 ? var_11 : var_5))))));
                        var_19 |= ((((((var_13 >= var_13) ? (((var_7 ? var_10 : var_2))) : var_5))) <= (max((7 & var_11), ((var_7 ? var_13 : var_4))))));
                        var_20 = (min((((var_3 ? 26890 : 16))), (max(43074, 2220758965359827057))));
                    }
                }
            }
        }
    }
    var_21 = ((((max(((var_4 ? var_7 : var_13)), ((max(var_12, var_8)))))) ? var_6 : var_3));
    #pragma endscop
}
