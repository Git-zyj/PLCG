/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_2;
    var_19 = (((((min(var_6, (-2147483647 - 1)))) ? (min(var_12, var_7)) : var_7)));
    var_20 = ((((((-16 + 2147483647) >> (var_3 - 13566419881892237076)))) < ((~(min(var_14, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((2199023255296 ? (min((((arr_5 [i_0] [i_0] [16] [i_1]) % (arr_7 [i_1]))), ((4096 ? -1 : 18446741874686296319)))) : (arr_11 [6] [i_0 - 1])));
                                arr_12 [17] [17] [18] [18] [i_4] = ((!((min(((((arr_11 [i_2] [i_1]) << (var_0 - 4721431801716198580)))), (arr_4 [i_0] [i_0] [i_2] [i_3]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_20 [1] = (((((((-1556663821 ? (arr_8 [i_0] [i_1] [i_5] [i_6]) : (arr_10 [i_0] [i_6] [i_7])))) ? var_14 : ((min((arr_11 [i_1] [i_1]), (arr_1 [i_0])))))) != ((((((var_15 ? var_0 : var_6))) ? var_10 : (arr_11 [i_0 + 3] [i_0]))))));
                                var_22 = (max(var_22, var_9));
                                arr_21 [i_7] [i_6] [i_5] [13] [i_0] = (((((arr_3 [i_1] [i_1] [i_5]) < var_5)) ? (((min((arr_6 [i_0 + 3] [i_6]), (arr_6 [i_5] [i_1]))))) : (arr_3 [i_0] [i_0 + 3] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
