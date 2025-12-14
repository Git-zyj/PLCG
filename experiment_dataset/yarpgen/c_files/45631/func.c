/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45631
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
    var_20 = ((/* implicit */unsigned long long int) var_6);
    var_21 += ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 + 2] |= ((/* implicit */unsigned int) (unsigned char)43);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                            {
                                var_22 = ((var_12) <= (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 - 2] [i_3] [i_3])));
                                arr_17 [i_0 + 1] [i_4 - 1] [i_2] [i_3] [i_4 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) var_19))) : ((~(((/* implicit */int) arr_2 [i_0 + 2]))))));
                            }
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)12)) ? (2147483647) : (max((2147483647), (2147483647)))))));
                            var_24 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) max((var_18), (((/* implicit */unsigned short) arr_11 [i_0 + 1])))))) & (min((var_4), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)33148)) : (-1204630844)));
                    arr_21 [i_0 + 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (short)3370);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2]));
                                arr_26 [i_6 - 2] [i_1] [i_5] = ((/* implicit */short) 2147483647);
                                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_1] [i_0 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_20 [i_5] [i_1] [i_0 - 1]))));
                                arr_27 [i_0 + 1] [i_1] [i_0 + 2] [i_6 + 1] [i_7 + 3] [i_6 + 2] = ((/* implicit */unsigned short) (+(2528063036U)));
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_30 [i_8] [i_1] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)87))), (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 2]) : (arr_19 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1])))));
                    var_28 += ((/* implicit */_Bool) min((arr_16 [i_8]), (((/* implicit */unsigned long long int) 268435456U))));
                }
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) var_7);
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14032)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_13))) || (((/* implicit */_Bool) arr_1 [i_0 - 2]))))) : (((/* implicit */int) ((unsigned char) var_7)))));
                }
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    arr_35 [i_0 - 1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)41568)))) : (((((var_16) + (2147483647))) << (((((268435456U) >> (((/* implicit */int) (signed char)9)))) - (524288U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        arr_38 [i_0 + 1] [i_10] [i_10] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0 - 2] [i_11] [i_10] [i_10])) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3370))) : (1784099031U))))));
                        arr_39 [i_0 - 2] [i_0 - 2] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) ^ (((((/* implicit */int) (short)8598)) | (691778310)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (short i_13 = 2; i_13 < 21; i_13 += 2) 
                        {
                            {
                                arr_45 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_13 + 2] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) arr_28 [i_0 - 1]);
                                var_31 *= ((/* implicit */unsigned long long int) arr_9 [i_13 + 1] [i_1] [i_0 + 1] [i_13 - 2]);
                                arr_46 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((unsigned short) arr_12 [i_13 + 2] [i_1] [i_13 + 2] [i_12])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14625)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4))) : (0LL)));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 278553673U)) ? (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) (signed char)-26))));
                /* LoopNest 3 */
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            {
                                var_34 = ((arr_20 [i_1] [i_1] [i_1]) / (-3907777525981027234LL));
                                var_35 = ((/* implicit */_Bool) max(((unsigned short)34256), (((/* implicit */unsigned short) (unsigned char)231))));
                            }
                        } 
                    } 
                } 
                var_36 = ((/* implicit */int) (((+(min((((/* implicit */unsigned long long int) -1337524527)), (18078440661061703465ULL))))) >> (((((/* implicit */int) arr_47 [i_0 + 1] [i_1] [i_0 - 2])) - (198)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 4) 
    {
        for (short i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            {
                var_37 = ((/* implicit */short) 7355026828326478917ULL);
                /* LoopSeq 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_38 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((14877722386926865488ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_17 + 1] [i_17 + 1] [i_17 - 1])) ? (((/* implicit */int) arr_8 [i_17 - 2] [i_17 - 1] [i_17 - 2])) : (min((var_15), (((/* implicit */int) var_11))))))));
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_17 + 1])) || (((/* implicit */_Bool) arr_11 [i_17 - 1]))))) << ((((_Bool)1) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))))))));
                    var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_60 [i_17 - 2]), (arr_60 [i_17 - 1]))))));
                    var_41 &= ((/* implicit */short) (~(var_7)));
                    var_42 = ((/* implicit */short) (+(max((3301360472U), (((/* implicit */unsigned int) (unsigned short)60361))))));
                }
                for (short i_20 = 2; i_20 < 13; i_20 += 2) 
                {
                    var_43 &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_25 [i_18] [i_18])), (var_10)))) ? (max((((/* implicit */long long int) (unsigned short)49152)), (-3907777525981027234LL))) : (((/* implicit */long long int) var_15)))));
                    arr_63 [i_17 + 1] [i_18] = ((/* implicit */unsigned char) ((short) var_12));
                }
                for (short i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    var_44 += ((/* implicit */_Bool) (~(((/* implicit */int) (short)-10748))));
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_17 - 1])))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)8))))), (arr_69 [i_17 - 1] [i_17 - 1] [i_17 - 2] [i_17 - 1])))));
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)195))) ? (var_5) : (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_19), (arr_55 [i_17 - 2])))), (arr_15 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1]))))));
                    }
                    var_47 = arr_57 [i_17 + 1];
                    var_48 = ((/* implicit */unsigned long long int) var_1);
                }
                var_49 = var_17;
            }
        } 
    } 
    var_50 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)8)) <= (((/* implicit */int) (short)30673))));
}
