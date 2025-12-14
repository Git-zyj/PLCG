/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_1 ? var_4 : var_7)) <= 157))));
    var_11 = ((((min((min(17804304328145689229, 642439745563862387)), var_8))) ? var_6 : var_2));
    var_12 = (max(var_12, (((((17804304328145689229 ? var_2 : (17804304328145689242 || var_0)))) || ((((!var_0) ? var_6 : (!var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = 6436483195755821170;
                arr_5 [i_0] [i_0] [i_1] = arr_1 [i_0];
                var_14 = (((min((min((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0]))), (~3101299704))) * (((((var_6 ^ (arr_4 [i_0] [i_0] [i_0]))))))));
                var_15 = (min((min((arr_0 [i_0]), (max((arr_3 [i_0] [i_0]), (arr_0 [i_0]))))), ((((((arr_2 [i_0]) * 16383))) * (min(var_3, (arr_3 [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 += (((max((arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_4]), 1591608767)) << (((arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_2]) + 332062234))));
                                arr_15 [i_0] [i_1 + 1] [i_2] [i_0] [i_3] [i_4] = ((((((var_5 & (arr_8 [i_0] [i_1] [i_2] [i_0])))))) <= (((((min(1, 80)))) * (min((arr_11 [i_2] [i_0] [i_0] [i_0]), (arr_11 [i_4] [i_0] [i_0] [i_0]))))));
                                var_17 = (max(var_17, 14188291990481000719));
                                var_18 = ((((min(642439745563862384, ((max((arr_7 [i_3] [9] [i_3] [i_0]), -11)))))) ? var_1 : (min(((-(arr_3 [i_1] [i_4]))), ((-111 + (arr_11 [i_3] [i_0] [1] [i_3])))))));
                            }
                            var_19 = ((((((((~3) + 2147483647)) >> (((~var_2) + 30))))) & 1339146924));
                        }
                    }
                }
            }
        }
    }
    var_20 |= ((var_5 ? (((min(var_4, (51 || var_9))))) : ((((min(var_5, var_2))) ? (((0 ? var_3 : 1))) : 65535))));
    #pragma endscop
}
