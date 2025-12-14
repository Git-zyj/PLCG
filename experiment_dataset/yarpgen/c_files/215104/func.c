/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215104
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2 + 1] [2] |= (+(max((arr_4 [i_2 + 1] [i_2 - 1] [i_1 - 2]), (arr_4 [i_2 + 1] [i_2 - 1] [i_1 - 2]))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-55)))))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [(signed char)17] [(unsigned short)10] [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0] [i_0]))) < (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))))))) : (((min((((/* implicit */unsigned int) (_Bool)1)), (2383300113U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_1] [i_1 - 1])))))));
                }
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    var_17 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3470))) + (1911667184U)))));
                    arr_13 [i_0] [i_0] [i_0] [15U] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_3 + 2] [(unsigned short)10])) ? (arr_1 [i_1 + 1] [i_3 + 2]) : (589341826)))));
                    arr_14 [i_0] [i_0] [i_1 + 2] [(_Bool)1] &= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1] [i_1] [(signed char)15]) : (3972006509U))) ^ ((~(arr_8 [(unsigned char)12] [(unsigned char)12] [(signed char)6]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)2)) & (((/* implicit */int) (signed char)-30)))) * ((+(((/* implicit */int) var_9)))))))));
                    arr_15 [i_0] [i_1] = min((2832902613U), (((/* implicit */unsigned int) (unsigned short)17610)));
                }
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    arr_20 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-97)) : (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [i_0]))))))));
                    arr_21 [i_0] [(signed char)15] [i_4] [i_4] |= arr_1 [i_1 + 1] [i_1];
                    arr_22 [i_4] = ((/* implicit */unsigned char) ((int) ((((unsigned int) (signed char)-83)) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    arr_25 [(signed char)5] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_26 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_5])))) ? (var_8) : (((arr_4 [i_0] [i_1] [i_5]) % (((/* implicit */unsigned int) var_7))))));
                }
                var_18 = (!(((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1 - 3]))));
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    arr_29 [i_0] [i_1 - 3] [i_6] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) ? ((+(((/* implicit */int) arr_6 [i_0] [(unsigned short)12] [(signed char)4] [14])))) : ((-(((/* implicit */int) ((unsigned char) arr_16 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62065)) && (var_0))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_31 [i_0] [i_1] [i_7]))));
                                var_21 -= min((((min(((_Bool)1), (arr_32 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1]))) : (var_4))), (((/* implicit */unsigned int) arr_24 [i_1 - 3] [i_6])));
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_38 [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) ((arr_28 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_9]) == (((((/* implicit */int) (unsigned char)251)) & (((/* implicit */int) (signed char)17))))))) : (((/* implicit */int) ((unsigned short) -1076201012)))));
                    arr_39 [i_0] [i_1 + 2] [i_9] = ((/* implicit */unsigned int) ((signed char) max((((arr_0 [i_1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-39)))), (((/* implicit */int) var_13)))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (signed char)-112))));
                    var_23 = ((/* implicit */unsigned short) (!(arr_34 [i_1 + 1] [i_1 + 1] [i_10] [10U])));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_45 [i_1 + 2] = var_2;
                        arr_46 [i_0] [i_1] [(unsigned short)4] [i_11] = ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [i_1 + 1] [20] [i_11] [20])));
                        var_24 = var_1;
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0]))));
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_12])) ? (var_8) : (arr_8 [i_1 + 2] [i_1] [i_12])));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1 - 3] [(signed char)3] [i_1 - 2] [i_1] [i_1 + 2]))));
                            arr_53 [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) arr_19 [i_1 - 2] [(unsigned short)9] [i_1]);
                            arr_54 [i_12] [i_1 + 2] [i_10] [i_12] [i_13] = ((/* implicit */signed char) (_Bool)1);
                            arr_55 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_8 [i_12] [i_12] [i_12]))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            arr_59 [i_0] [i_10] [(unsigned char)9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_1 + 1])) & (((/* implicit */int) arr_56 [i_1 - 2]))));
                            arr_60 [i_12] [17U] [(unsigned char)20] [17U] [i_14] [4U] = ((/* implicit */signed char) (unsigned char)11);
                        }
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)20102)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)184))))))));
                    var_29 = ((/* implicit */unsigned int) arr_35 [i_0] [i_1 - 3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 2; i_16 < 21; i_16 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)138))))), ((((_Bool)1) ? (((/* implicit */unsigned int) arr_28 [i_0] [i_1] [i_15] [i_16 - 1])) : (var_8))))))));
                        arr_67 [i_15] = 968947031U;
                        arr_68 [i_15] = ((/* implicit */_Bool) var_4);
                        var_31 |= ((/* implicit */_Bool) arr_49 [i_0] [i_1] [(_Bool)1] [16]);
                    }
                }
                arr_69 [i_0] [(signed char)1] [(signed char)1] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)104)) * (((/* implicit */int) arr_41 [i_0]))))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) (unsigned char)221)) ? (1772080148U) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) var_5)))));
    var_33 = ((/* implicit */signed char) (~((((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) << (((min((((/* implicit */unsigned int) var_10)), (var_11))) - (47871U)))))));
    var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)116)))) <= (((/* implicit */int) var_12)))))));
    var_35 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), ((~(((/* implicit */int) ((signed char) var_7)))))));
}
