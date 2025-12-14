/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32602
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)11])) ? (var_10) : (arr_2 [i_0]))) : (((unsigned int) var_3))))) ? (min(((+(((/* implicit */int) var_12)))), (((/* implicit */int) var_12)))) : ((-((+(((/* implicit */int) (unsigned short)10))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) (+(((unsigned int) arr_3 [i_0] [i_1 + 4] [i_2 - 2]))));
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))));
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)20)), (3042389561U)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [16U] [i_2 - 1] [i_1 + 4])) < (((/* implicit */int) var_7)))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29))))) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (unsigned short)7)))))));
                                var_19 = ((/* implicit */unsigned short) max((min((min((var_2), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) var_7)))), (min((arr_2 [i_4]), (max((2800057329U), (var_9)))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_0))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_8), (var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_3))))) : (min((min((var_11), (var_11))), ((+(var_6)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_22 = max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((unsigned int) var_1)));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_1 + 4])) : (((/* implicit */int) var_5)))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            var_24 = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((var_8) >> (((((unsigned int) ((unsigned int) arr_17 [i_1] [i_1] [i_1] [i_5] [i_1]))) - (776792338U)))))) : (((/* implicit */unsigned short) ((var_8) >> (((((((unsigned int) ((unsigned int) arr_17 [i_1] [i_1] [i_1] [i_5] [i_1]))) - (776792338U))) - (2593292391U))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                            var_26 &= ((/* implicit */unsigned short) var_0);
                        }
                        var_27 = ((/* implicit */unsigned short) ((max((var_9), (((/* implicit */unsigned int) var_7)))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) var_3)), (var_9))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                        var_30 &= ((/* implicit */unsigned int) ((unsigned short) arr_15 [i_5 - 1] [i_0] [i_1 + 1]));
                    }
                    var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_2 [i_0])))))))), ((~(((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                }
                for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [1U] [i_1 + 4] [i_0] [i_0] [i_0] [(unsigned short)9]))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) var_12))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
                    {
                        var_33 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_10 [i_0] [12U] [i_10] [8U] [12U] [i_10]) < (var_11))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_10] [i_1 - 1] [i_10 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_10] [10U] [i_10]))))));
                        var_34 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (max((((/* implicit */unsigned int) var_5)), (arr_21 [i_10])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) var_6);
                        var_36 = arr_9 [(unsigned short)3];
                        var_37 = ((unsigned int) 1U);
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) != ((~(arr_15 [i_12 + 1] [i_10] [i_0])))));
                    }
                    var_39 = ((/* implicit */unsigned short) max((max((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned int) var_1))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_13 = 4; i_13 < 23; i_13 += 4) 
    {
        var_40 = var_2;
        var_41 &= ((/* implicit */unsigned int) var_1);
    }
    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        var_42 = ((/* implicit */unsigned short) var_6);
        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_12)) ? (arr_37 [i_14]) : (var_4))))))))));
        var_44 = (unsigned short)65530;
    }
}
