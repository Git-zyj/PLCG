/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_8 ? ((4064 ? 3372683412600212832 : 1)) : (((max(var_5, var_7)))))), ((((~90) ? var_3 : ((var_1 ? var_4 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 |= ((90 ? (((-(arr_2 [i_0 + 3])))) : (min(((var_0 ? var_3 : var_5)), (~var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = ((((85 ? (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_2 + 2] [i_2 + 2]) : ((((33032 <= (arr_8 [i_1] [i_1] [i_1] [i_1]))))))) != ((((((var_7 ? 0 : (arr_8 [i_0 + 3] [i_3] [i_4] [i_3])))) ? var_8 : ((15 ? var_4 : -90)))))));
                                var_13 = ((((((~1626278050629591212) ? (((arr_2 [i_1]) ? var_3 : var_8)) : (((1 ? 2012576815 : -91)))))) ? (min(-3670847261766227098, ((max(4032, -90))))) : (((((max(var_4, (arr_2 [i_2])))) ? (arr_6 [i_0] [i_1] [0] [i_4]) : (min(var_6, (arr_5 [i_0] [i_1] [i_0] [i_3]))))))));
                                var_14 *= (((87 ? 60 : 1350963745)));
                                var_15 = (max(var_15, (((~((-(arr_5 [i_0] [i_0] [i_2 + 1] [i_0 - 2]))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, 0));
                }
            }
        }
    }
    var_17 = var_8;
    var_18 = ((-5813731469684887575 ? ((var_0 ? ((var_4 ? var_9 : var_1)) : 2)) : (((var_1 ^ ((var_0 ? -74 : var_2)))))));
    #pragma endscop
}
