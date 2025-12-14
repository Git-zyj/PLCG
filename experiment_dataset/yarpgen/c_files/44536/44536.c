/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((max(197319412720586388, ((((1 / (arr_9 [8] [i_1] [8] [i_3 + 1] [i_4]))))))))));
                                arr_12 [i_0] [i_1] [i_2] [0] [i_4] = max(197319412720586409, (1354413106181573823 / 197319412720586405));
                                var_17 = (max(var_17, ((min(((~(max(var_7, 12354668962279766231)))), (((-197319412720586388 ? ((var_10 ? var_8 : (arr_10 [i_0] [i_0] [1] [3] [i_4 + 1]))) : (arr_11 [i_0] [i_1] [i_2 - 1] [i_1] [i_4 + 3])))))))));
                                var_18 = ((((((((var_5 ? var_8 : 197319412720586391))) ? (arr_3 [i_1] [i_2 - 1] [i_1]) : (arr_6 [2] [2] [i_2])))) ? 13285648095363865606 : -197319412720586403));
                                var_19 = ((13285648095363865595 ? ((((!(arr_5 [i_0] [i_0] [i_2 - 1] [i_2 - 1]))))) : ((197319412720586413 ? (arr_5 [i_1] [i_1] [i_1] [i_3]) : var_10))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((var_4 ? (max((((arr_11 [i_0] [i_0] [i_0] [1] [i_0]) ? 545475869802994079 : (arr_5 [i_0] [i_1] [i_1] [i_1]))), (((!(arr_8 [i_0] [i_1] [i_1])))))) : (arr_6 [i_0] [i_1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((min(-21, (arr_20 [i_6 + 1] [i_6 - 1] [i_8]))))));
                                var_21 = 197319412720586403;
                                var_22 = (max(var_22, ((min((arr_15 [i_9 + 1]), ((((((-7746150269256116724 ? 197319412720586410 : (arr_18 [i_5] [i_6])))) ? (arr_26 [i_6 - 1] [1] [i_8]) : var_9))))))));
                                var_23 = (min(var_23, (((-1 ? (((arr_26 [i_6 + 1] [i_9 - 1] [i_9 - 2]) ? (arr_18 [i_6 - 1] [i_8]) : var_4)) : (((3458764513820540928 ? -2086149050 : var_11))))))));
                                var_24 += (((-454842345 ? var_0 : (arr_24 [i_8] [i_6] [i_6 - 1] [i_5]))));
                            }
                        }
                    }
                }
                var_25 = ((-(min(545475869802994079, (arr_18 [i_6 + 1] [i_6])))));
                var_26 += ((((max((arr_24 [i_5] [i_5] [i_5] [i_6]), (arr_24 [i_5] [i_6 + 1] [i_5] [i_5])))) ? (arr_24 [1] [6] [i_6] [i_6 + 1]) : ((max((arr_24 [i_5] [i_5] [i_5] [1]), var_4)))));
                var_27 = var_6;
            }
        }
    }
    #pragma endscop
}
