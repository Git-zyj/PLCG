/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-1140445161 >> ((((-(min(3154522147, 249)))) - 4294967021))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (min((((((-107 ? 4 : 0))) ? (((1140445140 >> (111 - 82)))) : (((arr_10 [i_4] [i_2] [i_2] [i_0] [i_0]) ? (arr_3 [i_0]) : var_2)))), ((var_7 ? (max(15, 18446744073709551615)) : (var_6 == 18890)))));
                                var_14 = (!var_3);
                            }
                        }
                    }
                }
                var_15 += ((-((((4 ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]) : 359076979)) + (((var_9 >> (((arr_7 [i_0] [i_0] [i_1] [i_1] [10] [i_1]) - 4967270323607252352)))))))));
                arr_11 [i_0] [i_0] = (~3154522155);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_5] [1] [i_5] [i_6] [i_0] = ((((~((-278576837 ? (arr_0 [i_0] [5]) : (arr_4 [i_1] [i_1]))))) > (((57869 ? 134 : -8720483321747740765)))));
                                var_16 += ((((((var_8 || var_9) >> (((((arr_14 [i_6] [i_1] [i_6] [i_1] [6] [i_6]) % 134)) - 82))))) ? ((((0 & var_4) ? (278576847 ^ -359076980) : ((min(0, 30734)))))) : ((var_8 & (((arr_7 [i_0] [i_0] [i_1] [11] [i_6] [i_7]) << (((arr_0 [i_1] [i_6]) - 1684683067))))))));
                            }
                        }
                    }
                }
                arr_21 [i_0] = ((((2097151 ? var_8 : (arr_15 [i_1] [i_0] [i_0] [i_0]))) < (((((((15775028677939273438 ? var_11 : var_7))) || (arr_9 [i_1] [i_1] [i_1] [i_1] [10] [i_1] [i_1])))))));
            }
        }
    }
    var_17 = (max((3154522158 % 3154522155), ((var_6 ? var_6 : (3221225472 > var_1)))));
    var_18 = (((!-1402668617) & ((var_10 ? var_8 : var_0))));
    #pragma endscop
}
