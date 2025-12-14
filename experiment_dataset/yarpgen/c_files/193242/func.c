/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193242
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_2] = (-(((arr_10 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    arr_16 [i_0] [4] [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned int) -1072415725)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -1072415736)) : (var_1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (1072415702)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_8 [i_5] [i_5] [i_4] [i_0]))))));
                                arr_26 [(unsigned char)14] [i_0] [i_4] [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_5 + 2] [i_4] [(_Bool)1] [i_0])) ? (var_13) : (var_3)))));
                                arr_27 [i_0] [i_0] [i_4] [i_5 + 1] [i_5] [(unsigned char)8] = ((/* implicit */_Bool) ((((var_8) == (((/* implicit */int) (unsigned char)71)))) ? (((/* implicit */unsigned int) (-(-1072415725)))) : (((var_7) ? (((/* implicit */unsigned int) arr_20 [i_1] [i_5 + 3] [i_1] [i_4] [i_1])) : (2597318640U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_32 [i_7] [i_1] [i_4] [0U] [i_1] [i_8] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4] [i_7] [i_7 + 3] [i_7 + 1] [i_7] [i_7 - 1]))));
                                arr_33 [i_4] [i_4] [i_0] = ((int) ((((/* implicit */_Bool) arr_7 [(unsigned char)12] [(unsigned char)12] [i_8])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_17))));
                                arr_34 [i_0] [i_1] [i_1] = arr_6 [i_0] [i_0] [i_0];
                                arr_35 [i_0] [i_1] [i_0] [i_4] [i_4] [i_7] [i_8] = arr_28 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7 + 2];
                                arr_36 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_8] = ((/* implicit */int) (((-(var_19))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)50)))))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    arr_39 [i_0] [15] [15] [(_Bool)0] = max((((((/* implicit */_Bool) arr_38 [i_1])) ? (1072415725) : (((/* implicit */int) ((_Bool) var_0))))), (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)50)) && (((/* implicit */_Bool) (unsigned char)71))))))));
                    arr_40 [i_0] [8U] [i_0] [i_0] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) (unsigned char)255)) ? (var_14) : (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_37 [i_1] [i_1])), ((+(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_47 [i_0] [i_0] [i_0] [i_9] [i_10] [i_0] = ((/* implicit */_Bool) min((1697648641U), (4078195604U)));
                                arr_48 [i_0] [i_0] [i_0] [i_11] = (~(-1072415722));
                                arr_49 [(unsigned char)11] [i_10] [(unsigned char)11] [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
                                arr_50 [i_0] [i_1] [i_9] [i_9] [3U] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)124)), (540692524U)));
                                arr_51 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (((+(var_13))) > (var_13))))));
                            }
                        } 
                    } 
                    arr_52 [i_0] [(_Bool)0] [i_0] [i_0] = -660755041;
                }
                for (int i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_61 [i_14] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) arr_46 [i_1] [i_12] [5U])) + (var_1)))));
                            arr_62 [i_12] [14] [i_12] [14] [i_0] = ((/* implicit */int) max((3605168948U), (((/* implicit */unsigned int) ((unsigned char) arr_29 [i_13 - 1] [i_13 + 2] [i_13 - 1] [i_13 + 2] [i_13 + 2] [i_13])))));
                            arr_63 [i_0] [i_14] [i_14] [(_Bool)1] [i_14] [i_0] = ((int) ((unsigned char) arr_45 [(unsigned char)8] [i_13 + 1] [i_13 + 2] [(unsigned char)7] [i_13 + 1] [(_Bool)1]));
                            arr_64 [i_14] = ((/* implicit */unsigned int) (+(-1428397500)));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_67 [8U] [3] [(unsigned char)10] [i_15] [3] [i_0] [i_12] = (-(((/* implicit */int) (unsigned char)113)));
                            arr_68 [i_0] [(unsigned char)2] [(unsigned char)2] [i_13 - 1] [i_15] = max((((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_12)))) >> (((3135433105U) - (3135433099U))))), ((+(((/* implicit */int) ((1159534190U) == (((/* implicit */unsigned int) -660755027))))))));
                            arr_69 [7] [7] [i_1] [i_15] [7U] [7U] [7] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_65 [i_0] [i_13] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)113))))) ? (var_6) : (((/* implicit */int) var_12)))));
                        }
                        arr_70 [i_0] [i_0] [i_12] [4] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((var_19) / (var_5))) * (((/* implicit */unsigned int) min((var_10), (var_8)))))));
                    }
                    arr_71 [12U] [12U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_12] [i_0] [i_0] [i_0])) ? (-660755041) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))) * (arr_53 [i_0] [i_0] [i_12])));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((var_8) == (((/* implicit */int) ((_Bool) (~(var_1)))))));
    var_21 = ((/* implicit */unsigned char) ((660755026) < (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (int i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        arr_76 [i_16] [i_16] = (~(((unsigned int) (unsigned char)255)));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            for (unsigned char i_18 = 4; i_18 < 18; i_18 += 3) 
            {
                {
                    arr_84 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) ((unsigned char) ((arr_79 [i_18 + 1] [i_18 + 2]) * (arr_79 [i_18 - 3] [i_18 + 2]))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        arr_88 [i_17] [i_18] [(unsigned char)2] [i_17] = ((_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)198)) : (660755049)));
                        arr_89 [i_16] [i_16] [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_72 [i_19 - 1]), (arr_72 [i_19 - 1]))))));
                        arr_90 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1038057552U))))) : (arr_78 [i_18 - 3] [i_18 - 3] [i_19 - 1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), ((-(392745446)))))) : (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) >> (((/* implicit */int) (_Bool)1))))) : (((arr_77 [i_16]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 3; i_20 < 19; i_20 += 3) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 3) 
                        {
                            {
                                arr_97 [(unsigned char)14] [i_20 - 3] [(_Bool)1] [i_16] [i_16] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (348718970) : ((~(((/* implicit */int) arr_87 [i_17])))))));
                                arr_98 [14] [14] [14] [i_20] [14] [12U] [14] = ((/* implicit */unsigned int) ((int) 1697648631U));
                                arr_99 [i_16] [(unsigned char)2] [i_18 - 3] [i_20 + 1] [i_21] = ((/* implicit */_Bool) (-(max((-660755055), (-1111840233)))));
                                arr_100 [(_Bool)0] [i_16] [i_17] [i_18] [i_18 + 1] [i_20 - 3] [i_20 - 3] = ((/* implicit */int) arr_77 [i_16]);
                                arr_101 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1697648656U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_16] [0U] [i_18 + 2] [i_16]))))), (((/* implicit */unsigned int) (-(var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_22 = 3; i_22 < 16; i_22 += 3) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_109 [12] = ((/* implicit */int) arr_87 [i_22 + 2]);
                    arr_110 [i_23] = ((/* implicit */unsigned char) arr_108 [i_16] [0U] [i_23]);
                }
            } 
        } 
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_113 [i_24] [i_24] = ((/* implicit */_Bool) max(((-(2441169137U))), ((+(((2907879434U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))))));
        arr_114 [i_24] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1498026703)) ? (arr_112 [i_24] [i_24]) : (arr_112 [i_24] [i_24])))) ? (((int) var_13)) : (min((arr_112 [i_24] [i_24]), (arr_112 [i_24] [i_24])))));
    }
}
