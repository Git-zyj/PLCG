/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198368
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
    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) (+(((/* implicit */int) (short)256))))))))));
    var_18 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((var_14), (((/* implicit */int) arr_0 [i_0 + 2]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_17 [i_1] [(_Bool)1] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0 + 3])))));
                            arr_18 [i_4] [i_3] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((arr_9 [i_3] [i_1]), (((/* implicit */short) var_8))))) ? (((/* implicit */int) arr_14 [i_0] [(short)3] [i_2] [i_1 - 1] [i_4] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-25250)) + (2147483647))) << (((((((/* implicit */int) (short)-25221)) + (25223))) - (2)))))) ? (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) : (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1]))))))));
                        }
                        arr_19 [i_3] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) ((short) arr_3 [i_1 - 1] [i_1 - 1] [i_0 + 3])))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_9 [i_3] [i_1 - 1]))));
                        var_20 ^= max((((unsigned int) arr_3 [i_0 + 1] [i_0 + 3] [i_0 + 1])), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */short) arr_16 [i_3] [i_3] [(_Bool)1] [i_3] [(short)12] [i_3] [i_3])), (arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] [12]))))));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned int) (+(max((((/* implicit */int) (!(var_8)))), (((((/* implicit */int) (unsigned short)53376)) / (((/* implicit */int) (short)25249))))))));
        var_22 = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [12U]))) - (1811858101U))), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_0] [i_0] [i_0]))))) + (2483109195U)));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((arr_3 [i_0] [(short)4] [(short)13]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_12 [i_0] [i_0] [i_0 + 1] [(_Bool)1]))))) | ((+(((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) ((int) arr_20 [i_5] [i_5]));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 3; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((_Bool) arr_31 [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 2]));
                        arr_32 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        arr_33 [i_7] [i_5] = ((/* implicit */int) arr_31 [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 2]);
                    }
                } 
            } 
        } 
    }
    var_25 = var_5;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
        {
            {
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((min((1811858101U), (((/* implicit */unsigned int) (short)25250)))), (((/* implicit */unsigned int) (+(var_9)))))))));
                var_27 ^= ((/* implicit */int) arr_35 [i_9]);
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    for (unsigned short i_12 = 3; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned int) var_14);
                            var_29 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_42 [i_9] [i_9] [i_10] [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (arr_40 [i_12 + 2] [i_12] [i_10 - 1] [(short)18])))) ? ((-(1811858101U))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_37 [i_11]) || (((/* implicit */_Bool) var_0))))) % ((-(((/* implicit */int) var_3))))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12] [i_10] [i_9 + 1]))) : (arr_40 [i_9 - 1] [i_10] [i_11] [i_11]))), (1811858100U)))) ? (((arr_37 [i_9 - 1]) ? (((/* implicit */int) (unsigned short)974)) : (((/* implicit */int) (short)15203)))) : (((/* implicit */int) ((_Bool) ((_Bool) arr_41 [(short)14] [(_Bool)1] [i_11] [i_12]))))));
                            var_31 = ((/* implicit */_Bool) (unsigned short)65535);
                            var_32 = ((/* implicit */unsigned short) 3973865258U);
                        }
                    } 
                } 
                var_33 |= ((/* implicit */short) (((-(((arr_43 [(short)2] [i_9 + 1] [i_9] [i_10] [8U] [i_10 - 1]) + (arr_34 [10] [i_10 + 1]))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_36 [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_36 [i_9 + 2] [i_9 - 1])))))));
                var_34 += ((/* implicit */unsigned short) min((max((1811858101U), (1811858113U))), (max((max((1894437694U), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3308522316U)) ? (var_14) : (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
