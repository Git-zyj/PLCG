/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((127 ? 255 : 14254992218503217183)));
    var_16 &= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((76 ^ ((76 ? -21994704 : 4)))), (!var_12)));
                                var_17 = var_11;
                                var_18 = 90;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_5] [i_6] = (arr_0 [i_2]);
                                var_19 = (min(var_19, var_12));
                            }
                        }
                    }
                    var_20 = ((((-(arr_18 [i_0] [i_0] [i_0]))) / ((min((arr_13 [i_1]), (arr_13 [i_1]))))));
                    var_21 = (((((~((-(arr_7 [i_2] [i_0] [i_0])))))) ? (((-1 ? 1 : (!var_6)))) : (~var_10)));
                }
            }
        }
        var_22 = (min(var_22, (((((min(6, 15345057763663311057))) ? (max(-1, 1936414200)) : ((((35596 > (-116 - 1))))))))));
        arr_21 [i_0] = (((((~(((arr_19 [i_0] [i_0] [i_0]) ? var_9 : 1))))) ? ((((min(-182929653, 1))) ? -95 : (((var_14 < (arr_9 [i_0])))))) : ((-(arr_1 [i_0])))));
        var_23 = var_5;
    }
    var_24 += (((1 + var_12) - ((((var_14 ? var_11 : var_2)) + -var_0))));
    #pragma endscop
}
