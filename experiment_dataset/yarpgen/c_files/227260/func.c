/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227260
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((min(((-(((/* implicit */int) (unsigned short)2474)))), (((/* implicit */int) ((unsigned short) (unsigned char)188))))) * ((~(((/* implicit */int) (unsigned char)188))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2436542731U)) ? (((/* implicit */int) var_0)) : (min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopSeq 4 */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) 2436542731U);
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)12069)))) << (((((/* implicit */_Bool) 2147483636)) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1])))))))));
                    var_16 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_4)) * (arr_6 [i_1] [i_3]))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])) ? (-1098067900) : (1098067895))))) / (((int) arr_10 [i_2] [i_2]))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((32766) << (((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (32743))) - (21133)))))) ? (min((1098067899), (((int) arr_10 [i_1] [i_1])))) : (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_10))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) (~(arr_15 [i_4 + 2] [i_6 - 1] [i_6])));
                            arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) -7460438871702276773LL);
                        }
                        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) 2147483637);
                            var_21 ^= ((/* implicit */int) ((var_10) && ((!(((/* implicit */_Bool) -32793))))));
                            var_22 = ((/* implicit */signed char) var_1);
                        }
                    }
                    arr_27 [i_1] [i_1] [i_5] [i_1] = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_12 [i_1])))))));
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_9 [i_1] [i_5] [i_1]);
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 2; i_10 < 13; i_10 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_23 = ((var_4) ? (arr_15 [i_9] [i_9] [i_10 - 1]) : (arr_15 [i_9] [i_11] [i_10 - 1]));
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 14; i_12 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_10 - 1] [i_10 + 2] [i_10]))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */short) (~(4294967295U)));
                        var_26 += ((/* implicit */long long int) (unsigned short)16586);
                        arr_42 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_9] [i_9] [i_12]) : (((/* implicit */int) arr_35 [i_10] [i_11] [i_10] [i_13]))))) <= ((~(arr_33 [i_11])))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned short i_14 = 2; i_14 < 13; i_14 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned short) var_4)))));
                arr_46 [i_9] [i_9] [i_9] = ((/* implicit */int) var_11);
            }
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_10] [i_10 - 1] [i_10 - 2])) ? (((/* implicit */int) (unsigned short)50915)) : (((/* implicit */int) var_5))))) + (var_2)));
        }
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_15]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) (_Bool)1))))))))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_9])) << (((((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15])) - (23084)))));
        }
        var_31 *= ((/* implicit */unsigned short) 5365864644124714896LL);
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 14; i_16 += 2) 
        {
            for (unsigned short i_17 = 1; i_17 < 13; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_19 = 3; i_19 < 11; i_19 += 1) 
                        {
                            var_32 = (~(min((((/* implicit */int) arr_52 [i_9] [i_16])), ((-(-334706181))))));
                            var_33 = ((/* implicit */int) (unsigned short)16384);
                        }
                        /* vectorizable */
                        for (int i_20 = 2; i_20 < 14; i_20 += 1) /* same iter space */
                        {
                            arr_63 [i_9] [i_20] [i_20] [i_17] [i_18] [i_20] = ((/* implicit */unsigned int) var_4);
                            arr_64 [i_9] [i_20] [i_17] [i_18] [i_20] = ((unsigned short) ((((/* implicit */int) arr_1 [i_9])) - (arr_15 [i_17] [i_17] [i_17])));
                            var_34 = ((/* implicit */long long int) ((unsigned short) arr_21 [i_16] [i_16 + 1] [i_17 + 1] [i_16 + 1] [i_18]));
                            arr_65 [(unsigned short)2] [(unsigned short)2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_53 [i_9] [i_17 + 1] [i_16 - 1] [i_20 - 2]))));
                        }
                        /* vectorizable */
                        for (int i_21 = 2; i_21 < 14; i_21 += 1) /* same iter space */
                        {
                            var_35 = (~(((/* implicit */int) arr_38 [i_9] [i_16] [i_17])));
                            var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1858424548U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (1858424545U)))) ? (-1683339493) : (((/* implicit */int) ((unsigned short) 1098067898)))));
                        }
                        for (int i_22 = 4; i_22 < 13; i_22 += 3) 
                        {
                            arr_73 [i_9] [i_9] [i_16] [i_17] [i_17] [i_16] [i_22] = ((/* implicit */signed char) 0LL);
                            arr_74 [i_9] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -3294754650445113021LL)))) || (var_10)));
                            arr_75 [i_9] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_10)) - (-1098067901)))))));
                        }
                        var_37 = ((/* implicit */int) (signed char)31);
                    }
                } 
            } 
        } 
        arr_76 [i_9] = ((/* implicit */unsigned int) (~((+((((_Bool)1) ? (((/* implicit */int) arr_52 [i_9] [i_9])) : (((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (unsigned int i_23 = 0; i_23 < 15; i_23 += 2) 
    {
        arr_79 [i_23] = ((unsigned char) arr_62 [i_23] [i_23]);
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (int i_25 = 0; i_25 < 15; i_25 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)58368)) : (((/* implicit */int) (unsigned short)65514)))))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_25] [i_23])) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_23] [i_23] [i_25] [i_25]))) & (arr_66 [i_23] [i_23] [i_23] [i_23] [i_25]))) - (21LL)))));
                    /* LoopNest 2 */
                    for (int i_26 = 2; i_26 < 13; i_26 += 1) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 15; i_27 += 1) 
                        {
                            {
                                arr_90 [i_25] = ((/* implicit */unsigned short) var_4);
                                var_40 = var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_28 = 2; i_28 < 11; i_28 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_29 = 3; i_29 < 11; i_29 += 3) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_28] [i_29] [i_28])) : (((/* implicit */int) arr_84 [i_28] [i_28]))))))) >= (min((((/* implicit */long long int) (unsigned short)65525)), (arr_91 [i_28 + 1])))));
            var_42 = ((/* implicit */unsigned char) (-(-1098067909)));
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((unsigned char) 9223372036854775807LL)))));
        }
        for (unsigned char i_30 = 2; i_30 < 10; i_30 += 3) 
        {
            var_44 = ((/* implicit */long long int) var_6);
            var_45 = ((((/* implicit */int) var_0)) + (((1377238416) * (((/* implicit */int) (unsigned short)0)))));
            /* LoopSeq 3 */
            for (unsigned short i_31 = 4; i_31 < 12; i_31 += 4) 
            {
                arr_107 [i_28] [i_28] = ((/* implicit */int) (+(arr_103 [i_28] [i_28] [i_31])));
                var_46 = ((/* implicit */unsigned short) (((_Bool)1) ? ((-((+(((/* implicit */int) arr_86 [i_31] [i_30] [i_31] [i_31])))))) : (((((/* implicit */_Bool) min((arr_43 [i_28] [i_28] [i_28] [i_28]), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -741913385))))) : (((/* implicit */int) arr_45 [i_28 - 1] [i_28 + 1]))))));
                arr_108 [i_28] [i_28] [i_31] = ((/* implicit */unsigned char) -9223372036854775792LL);
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_47 [i_28 + 1])))) && (((/* implicit */_Bool) (signed char)-1)))))));
            }
            /* vectorizable */
            for (unsigned int i_32 = 4; i_32 < 12; i_32 += 2) 
            {
                var_48 = ((/* implicit */int) var_2);
                var_49 = ((/* implicit */int) (unsigned short)2047);
                var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((arr_15 [i_28] [i_28 + 1] [i_28]) | (((/* implicit */int) arr_35 [i_28 - 2] [i_28] [i_28 - 1] [i_28])))))));
            }
            /* vectorizable */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                arr_113 [i_28] [i_28] = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_28 + 1])) ? (((/* implicit */unsigned int) (~(610287427)))) : (arr_41 [i_28] [i_30] [i_33] [i_28] [i_28] [i_28] [i_28])));
                var_51 = (+(-741913394));
                arr_114 [i_33] [i_28] [i_33] = ((/* implicit */unsigned char) arr_47 [i_30]);
            }
            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((int) (unsigned short)2046))))) ? (((((/* implicit */_Bool) arr_85 [(_Bool)1])) ? (-7460438871702276778LL) : (arr_85 [(unsigned char)14]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56))))))));
            var_53 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)58321)), ((-(min((-9223372036854775785LL), (((/* implicit */long long int) var_4))))))));
        }
        arr_115 [i_28] [i_28] = ((/* implicit */unsigned short) (((-(((-1065378156499774492LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2076))))))) & (((/* implicit */long long int) arr_39 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))));
    }
    /* LoopNest 2 */
    for (long long int i_34 = 0; i_34 < 10; i_34 += 1) 
    {
        for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_36 = 0; i_36 < 10; i_36 += 2) 
                {
                    var_54 *= var_8;
                    arr_125 [i_35] [i_35] [i_35] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) -649370459551385918LL)) : (var_2))) << ((((~(((/* implicit */int) ((unsigned char) var_3))))) + (205)))));
                    var_55 += ((((/* implicit */int) var_10)) << (((((((((/* implicit */int) arr_34 [i_34] [i_34] [i_34] [i_34])) ^ (((/* implicit */int) (unsigned short)65528)))) << (((((arr_124 [i_34] [i_34] [i_35] [i_36]) + (4800172322317999429LL))) - (7LL))))) - (67021811))));
                }
                /* vectorizable */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_38 = 2; i_38 < 9; i_38 += 2) 
                    {
                        var_56 *= ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_0)))));
                        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_91 [i_34]) << (((/* implicit */int) (_Bool)1))))) ? (arr_126 [i_35 - 1] [i_38 - 2]) : (((/* implicit */int) arr_110 [i_34] [i_34] [i_34] [i_38]))));
                    }
                    arr_130 [i_35] [i_37] [i_37] [i_34] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_34] [i_37] [i_37] [i_35 - 1] [i_37])) ? (arr_7 [i_34] [i_35 - 1] [i_34]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_34] [i_35] [i_37] [i_35 - 1] [i_34])))));
                    var_58 = ((/* implicit */int) max((var_58), (((((/* implicit */int) (unsigned short)54255)) * (((/* implicit */int) var_3))))));
                }
                /* LoopNest 2 */
                for (short i_39 = 0; i_39 < 10; i_39 += 2) 
                {
                    for (unsigned int i_40 = 4; i_40 < 9; i_40 += 4) 
                    {
                        {
                            arr_137 [i_34] |= ((/* implicit */unsigned short) var_1);
                            var_59 = min((((/* implicit */long long int) -610287443)), (((((/* implicit */_Bool) (~(arr_21 [i_34] [i_34] [i_34] [i_34] [i_34])))) ? (((/* implicit */long long int) ((-610287457) - (-1983752522)))) : ((~(arr_80 [i_34] [i_34]))))));
                            var_60 = (unsigned char)76;
                        }
                    } 
                } 
            }
        } 
    } 
}
