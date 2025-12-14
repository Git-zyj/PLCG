/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((max((min(-5193123532743534693, -15)), var_5))) && (((7133 - var_1) > (max(var_0, 9))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 ^= ((((min(5193123532743534692, (max(var_6, var_10))))) ? (max(((-62 ? var_0 : 142)), 0)) : ((((~var_7) ? ((max(var_6, 156))) : 16858)))));
                                arr_12 [i_0] = var_0;
                                arr_13 [i_0] [i_1] [2] [i_3 - 4] [i_4] = ((0 ? (((max(var_1, -1635196709)) >> (((max(var_0, var_7)) - 1767902897737349439)))) : (((min((147 == var_8), var_2))))));
                                arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((0 ? var_7 : 0))) && ((max(-2147483643, 156))))) ? (((max(var_4, var_0)))) : ((max(100, 8)))));
                                var_15 -= (((max(153, 28535))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_0] [i_0] = (1643311822 >= 18685);

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_19 [i_0] [14] [12] [i_0] |= (-6068223203972836686 || var_10);

                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_2] [i_5 - 1] [i_6 + 4] = 5787291208387576466;
                            arr_23 [i_0] [i_5] [i_2] [i_1] [i_0] = ((var_11 ? var_2 : var_0));
                            var_16 = ((!(var_9 >= var_5)));
                        }
                    }
                    arr_24 [i_0 + 2] [i_0] [i_0 + 4] [11] = ((+((0 ? (-1635196709 <= var_2) : ((var_12 ? var_1 : 5193123532743534693))))));
                }
            }
        }
    }
    #pragma endscop
}
