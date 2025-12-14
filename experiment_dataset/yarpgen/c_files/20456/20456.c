/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 |= (((((((min(var_9, 34881))) || (240 >= 16)))) & var_5));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 ^= var_10;

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_13 -= (var_4 / -15);
                                arr_14 [i_0] [i_0] [2] [i_2] [i_0] [0] = arr_6 [i_0] [i_1 - 1] [i_0];
                                arr_15 [i_0] [i_0] [1] [i_0] [i_0] = var_10;
                            }
                            for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_14 = 255;
                                var_15 = 16086518946366496840;
                            }
                            for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                var_16 *= ((var_7 | ((((((var_2 ? 0 : var_5))) & (arr_8 [i_6]))))));
                                var_17 = (min(var_17, ((max(-14, 61124)))));
                            }
                            arr_20 [i_0 + 1] [i_0] = ((~(((((255 | (arr_0 [i_0])))) ? ((17337719973123349180 ? (arr_10 [i_0] [12] [i_1] [i_2] [i_3]) : var_2)) : var_7))));
                        }
                    }
                }
                var_18 = (min(var_18, ((max(((((18446744073709551615 << (2031616 - 2031603))) << ((((var_3 ? 230 : -17)) - 182)))), ((min((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_1 : 25)), (((arr_3 [i_0]) & var_8))))))))));
                var_19 = (((((8363248009614411403 ? (((arr_16 [i_1 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) / var_4)) : ((max(60, 3471261165)))))) ? (((28254 != (var_5 > var_6)))) : (min(79, -841818246))));
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 = (((((((max(0, 61117))) * -20030))) ? ((((var_9 ? 9223372036854775805 : var_4)) / (((max(var_8, -32764)))))) : 1));
    #pragma endscop
}
