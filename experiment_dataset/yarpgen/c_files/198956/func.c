/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198956
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */short) (unsigned char)20);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_9))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
        var_18 ^= ((/* implicit */unsigned char) var_12);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) arr_2 [(unsigned short)9]);
            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            arr_8 [i_2] [(short)12] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((int) 1040187392)));
            var_21 = ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) (unsigned short)33948))))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_22 = (-2147483647 - 1);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)197)), (((int) var_11))))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_24 *= ((/* implicit */unsigned char) min(((~(((/* implicit */int) (short)-21821)))), (-1958023904)));
        arr_16 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) max((((/* implicit */short) arr_14 [5])), (arr_0 [i_4]))))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_13)))) % (min((-2147483642), (var_12)))))));
        var_25 = min((((/* implicit */int) (unsigned char)35)), (max(((+(((/* implicit */int) (unsigned char)220)))), (((/* implicit */int) min(((short)32750), (((/* implicit */short) (unsigned char)0))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_26 = (-(var_6));
                            arr_32 [i_7] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6])) + (((/* implicit */int) arr_23 [i_6] [i_7] [i_7] [i_9]))))) ? (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0)))) : (2147483642)))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_9))))), (arr_29 [i_7] [i_6])))) != (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */int) (unsigned short)0)) ^ (arr_24 [i_7]))) : (((int) var_0))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((/* implicit */int) ((short) (unsigned char)28))), ((((-(((/* implicit */int) arr_25 [i_6] [i_7] [i_8] [i_9])))) + (((/* implicit */int) arr_26 [i_5] [i_5] [i_5])))))))));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_35 [i_7] = ((/* implicit */int) (unsigned char)238);
                            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), (((short) (unsigned char)30)))))));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_7] = (unsigned char)129;
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */short) arr_21 [i_7] [(unsigned char)5]);
                            var_32 = ((((/* implicit */int) arr_26 [i_5] [i_6] [i_5])) / (min((((/* implicit */int) ((short) arr_12 [i_8]))), (((((/* implicit */int) arr_14 [i_5])) * (((/* implicit */int) var_7)))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_42 [i_5] [i_6] [i_7] [i_7] [i_7] [i_12] [i_12] = ((/* implicit */unsigned char) -2147483642);
                            var_33 = ((max((((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)32767)))), (((/* implicit */int) (unsigned char)236)))) << (((((/* implicit */int) (unsigned short)65513)) - (65497))));
                        }
                        for (short i_13 = 1; i_13 < 6; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */int) arr_12 [i_5]);
                            var_35 = ((/* implicit */short) arr_29 [i_7] [i_8]);
                            var_36 = ((/* implicit */short) var_6);
                            var_37 = min((var_3), (var_1));
                            var_38 = ((/* implicit */short) ((unsigned char) arr_18 [i_5] [i_6]));
                        }
                    }
                } 
            } 
        } 
        var_39 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)1)) ? (min((var_6), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_5 [i_5] [i_5]))))));
    }
}
