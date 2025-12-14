/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19707
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
    var_11 += ((/* implicit */unsigned char) (unsigned short)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2483154100U), (4294967295U)))) ? (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 2])) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 2])))) : ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))))));
                    var_13 = (-((+(var_1))));
                    var_14 = ((686458054U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49078))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) min((arr_4 [i_0] [i_2 - 1] [i_2 - 1]), (arr_4 [i_0] [i_2 - 1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3403)))))));
                    arr_7 [i_0] [10U] = ((/* implicit */unsigned char) max(((+(max((786432U), (((/* implicit */unsigned int) (unsigned short)49603)))))), (((unsigned int) (+(((/* implicit */int) arr_3 [i_0])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) max((max((arr_2 [(unsigned char)2]), ((unsigned short)0))), (max((((/* implicit */unsigned short) (unsigned char)31)), ((unsigned short)62133)))))), ((+(((/* implicit */int) var_4))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) (unsigned short)49603))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~((+(((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) (unsigned char)20)))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)46611)))) > (((/* implicit */int) arr_1 [i_0] [i_0]))))), ((+((-(((/* implicit */int) arr_8 [(unsigned char)10] [i_4] [i_1] [(unsigned char)10]))))))));
                        var_19 |= ((/* implicit */unsigned short) ((min(((~(arr_13 [i_4] [(unsigned char)4] [i_1] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4] [i_1] [i_4])) / (((/* implicit */int) arr_1 [i_4] [i_4]))))))) | ((~(var_3)))));
                        arr_17 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)225)), ((unsigned short)3416)))) ? (max((((unsigned int) (unsigned short)0)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) var_8))))))) : (((var_3) + (max((arr_13 [i_0] [14U] [i_4] [14U]), (3873700568U)))))));
                    }
                    arr_18 [i_0] [i_1] [i_4] = max((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)233)))), (((/* implicit */int) arr_16 [i_0]))))), ((~(max((2148548337U), (3465529625U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_22 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6] [(unsigned char)3]), (arr_22 [i_6 + 2] [17U] [i_6 + 2] [i_7] [i_7] [17U])))) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_16 [i_7]))))));
                                var_21 = (~(arr_20 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1] [i_6 - 2]));
                                arr_24 [i_0] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)7))));
                                arr_25 [i_7] [i_7] [i_4] [i_7] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)6)) - (((/* implicit */int) (unsigned short)36593))));
                            }
                        } 
                    } 
                }
                var_22 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 580393015U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)225)))))) : (536440310U))), (((3511265974U) << (((((/* implicit */int) (unsigned short)34127)) - (34112)))))));
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_1]);
                arr_27 [i_0] [7U] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_38 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) min((var_8), (arr_3 [i_8])))))) > (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)91)), ((unsigned short)62120))))));
                            arr_39 [i_8] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned short)34127)) || (((/* implicit */_Bool) 496540574U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)16383), (((/* implicit */unsigned short) var_0)))))) : (min((643083057U), (8U))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)34127)) - (34115)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    arr_43 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_12]))) % ((+(arr_35 [i_12])))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 1) 
                        {
                            arr_49 [i_8] [i_9] [7U] [i_13] [i_14 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) 1433933666U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) - (arr_13 [i_8] [i_9] [i_9] [i_9])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : ((+(max((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_30 [i_14 + 2] [i_9] [i_12])))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (unsigned char)222)) - (203)))));
                            var_24 = ((/* implicit */unsigned char) max((max((max((arr_29 [i_8] [i_8]), (var_3))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_5))))))));
                        }
                        arr_50 [i_8] [i_8] [12U] [i_13] = (unsigned char)246;
                        arr_51 [i_13] [i_13] [i_8] [5U] [i_8] = ((/* implicit */unsigned int) arr_23 [i_8]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_11 [i_15] [i_12] [i_9] [i_8])) + (((/* implicit */int) arr_11 [i_8] [i_15] [i_12] [i_15])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            arr_57 [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_8]))));
                            arr_58 [i_16] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_16 [i_8]);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_5))));
                        }
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) >= (((/* implicit */int) arr_56 [10U] [i_15] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_9] [i_8])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                        {
                            arr_61 [i_8] [4U] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_55 [i_9] [i_12] [i_15] [i_8]) % (max((arr_36 [i_8] [i_9] [i_8] [i_9]), (((/* implicit */unsigned int) arr_23 [i_15]))))))) ? (arr_60 [i_8] [i_8] [i_8] [9U] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41656)))));
                            var_28 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)41676)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (var_1));
                        }
                        arr_62 [i_8] [8U] [i_12] [i_8] = max((arr_2 [i_8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (unsigned short)44499))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
                    {
                        var_29 = arr_33 [i_8];
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)154), ((unsigned char)89)))) ? (524287U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61441)) / (((/* implicit */int) (unsigned short)46159)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_19 = 1; i_19 < 13; i_19 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) var_6);
                            var_32 = (+(((((/* implicit */_Bool) (unsigned char)59)) ? (640685936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_19]))))));
                            arr_69 [i_8] [i_8] [i_12] [i_18] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_8])) % (((/* implicit */int) (unsigned char)134))));
                        }
                        for (unsigned char i_20 = 1; i_20 < 13; i_20 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)27425)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_44 [i_8] [i_9] [i_12] [i_18] [i_20] [0U]))))))) + (max((arr_42 [i_8]), (((/* implicit */unsigned int) (unsigned char)88))))));
                            arr_73 [i_8] [i_8] [10U] = ((/* implicit */unsigned char) (unsigned short)37347);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)41273))));
                        arr_77 [i_8] [i_8] [i_12] [10U] = ((unsigned char) (unsigned short)10554);
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_5))));
                        arr_78 [i_8] [i_9] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_56 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [12U]))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(unsigned short)16] [i_22] [i_22] [i_22] [i_22])) ? (min((((((/* implicit */_Bool) (unsigned char)177)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_22] [9U] [i_22] [i_22] [i_22] [i_22]))))), (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) : (max((((/* implicit */unsigned int) var_9)), (arr_64 [7U] [i_22] [7U] [i_22] [i_22] [i_22])))));
        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_30 [i_22] [i_22] [i_22])))));
        var_38 = max((((/* implicit */unsigned short) var_7)), ((unsigned short)53020));
    }
    for (unsigned int i_23 = 0; i_23 < 18; i_23 += 1) 
    {
        arr_87 [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43493)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61608)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_23]))))))))));
        arr_88 [(unsigned short)0] |= ((/* implicit */unsigned char) arr_11 [i_23] [i_23] [i_23] [i_23]);
        var_39 = var_6;
        arr_89 [i_23] = (unsigned char)110;
    }
}
