/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245884
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) (((((+(var_5))) < (min((arr_0 [i_0]), (((/* implicit */long long int) var_6)))))) ? (((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [(short)11]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_8)))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)236)) + (((/* implicit */int) (unsigned char)218))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_4))))))));
                        arr_8 [i_0] [3U] [i_2] [i_3] = ((/* implicit */unsigned short) arr_5 [i_0]);
                    }
                } 
            } 
            var_13 = ((/* implicit */long long int) min((((/* implicit */short) var_9)), (max(((short)-15906), (((/* implicit */short) arr_4 [i_1] [i_1] [i_0]))))));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)236)), (var_5))))), ((~(((/* implicit */int) (short)-15908))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)1342))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)181)))) : (((((/* implicit */long long int) ((var_1) - (((/* implicit */int) var_6))))) - (6016890831184465559LL)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_16 = min((((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (short)-19669)) + (2147483647))) >> (((((/* implicit */int) (short)-12789)) + (12803))))))), ((~(((/* implicit */int) var_3)))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) ((arr_10 [i_0]) <= (arr_10 [9LL]))))));
                        var_18 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_0])) <= (max((arr_16 [(unsigned char)2] [i_4] [i_4] [(unsigned char)2] [i_9]), (((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_9])))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (short)-12792))) * (max((((/* implicit */long long int) 0)), (-6016890831184465560LL))))), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)166)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)12788))))))))));
        }
        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_20 += min((max((max((arr_11 [i_10]), (var_6))), (var_6))), (((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) (short)19671)), (-1963119408638372233LL))))));
            var_21 ^= ((/* implicit */int) (unsigned char)14);
        }
        var_22 = ((/* implicit */unsigned int) ((6016890831184465552LL) >> (((((/* implicit */int) arr_6 [i_0])) - (3184)))));
        arr_30 [i_0] = ((/* implicit */short) -3730945469360467179LL);
        var_23 = ((/* implicit */signed char) ((short) (short)31425));
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        var_24 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_31 [i_11])) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) arr_31 [i_11])))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */long long int) 1640685941U)) : ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)19))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            var_26 *= ((/* implicit */unsigned int) ((signed char) arr_35 [i_12] [i_12] [i_12]));
            var_27 += ((/* implicit */signed char) ((arr_36 [15U] [i_13] [i_12]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))));
        }
        var_28 = ((/* implicit */unsigned char) (+(1LL)));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                            var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3730945469360467164LL)) ? (-1743365849) : (-953418002)));
                        }
                        var_31 = ((/* implicit */unsigned char) 5681639388120868420LL);
                    }
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        arr_51 [i_18] [i_15] [i_15] [i_15] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_12] [(unsigned char)12] [i_12] [i_12] [i_12] [16LL]))));
                        var_32 ^= ((-5396871538951515484LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */unsigned short) arr_35 [i_12] [i_12] [(signed char)0]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                    {
                        arr_55 [i_15] [i_14] [i_15] = ((/* implicit */_Bool) arr_41 [i_15] [i_14] [i_15] [i_19]);
                        var_34 = ((signed char) -9223372036854775802LL);
                    }
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                    {
                        arr_59 [1ULL] [i_15] [10] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15]))) * (arr_58 [i_12] [i_14] [i_15] [i_20]))));
                        arr_60 [i_12] [i_15] [i_12] [i_12] = ((/* implicit */int) ((_Bool) 3730945469360467158LL));
                        var_35 = ((/* implicit */int) ((long long int) var_3));
                        var_36 = ((/* implicit */long long int) ((arr_36 [i_12] [i_12] [i_12]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12] [(signed char)13] [i_15] [i_20] [i_14] [i_20])))));
                        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [i_20] [i_15] [i_14] [i_12]))));
                    }
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) -908122143)) ? (((/* implicit */long long int) 1291251554)) : (3730945469360467162LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15] [i_12])) ? (arr_37 [i_21] [i_15]) : (arr_37 [i_12] [i_14])));
                        var_40 = var_5;
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_68 [i_15] [i_15] [i_15] = 4294967276U;
                        var_41 &= ((/* implicit */int) -2048200389711170205LL);
                    }
                    var_42 ^= ((/* implicit */unsigned int) arr_48 [i_12] [i_12] [i_14] [i_12] [i_12]);
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
                        {
                            {
                                var_43 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)101)) ? (arr_74 [i_12] [i_14] [i_14] [i_14] [i_24]) : ((+(((/* implicit */int) (signed char)-55))))));
                                var_44 = ((/* implicit */long long int) arr_70 [i_24] [i_15]);
                                var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_12] [i_12] [i_12]))));
                                var_46 = ((/* implicit */short) ((signed char) arr_71 [i_14] [i_23] [i_14] [(unsigned short)8]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_47 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) <= (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-8))))) & (9223372036854775807LL)))));
    /* LoopNest 3 */
    for (unsigned char i_25 = 0; i_25 < 25; i_25 += 3) 
    {
        for (short i_26 = 0; i_26 < 25; i_26 += 3) 
        {
            for (unsigned short i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) var_1);
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        for (long long int i_29 = 0; i_29 < 25; i_29 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_80 [(unsigned char)14] [i_26] [i_28])), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_84 [i_25] [i_26] [i_26] [i_27] [i_28] [i_29])) ? (((/* implicit */int) arr_80 [i_25] [i_26] [i_25])) : (var_7))))));
                                var_50 = ((/* implicit */_Bool) max((((arr_82 [i_27] [i_26] [i_27] [i_28]) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_82 [i_25] [i_26] [i_27] [i_28])))), (((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) arr_82 [i_25] [i_26] [i_28] [i_29])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_51 = ((/* implicit */signed char) 3730945469360467162LL);
}
