/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212141
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
    var_20 -= ((/* implicit */unsigned int) max((var_15), (((/* implicit */long long int) var_5))));
    var_21 ^= ((/* implicit */long long int) (-((~((~(((/* implicit */int) (_Bool)1))))))));
    var_22 = ((/* implicit */_Bool) (~((-(((((/* implicit */int) (signed char)104)) << (((var_12) - (3975102327U)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (-(8833574886944407460LL)));
        var_24 = (i_0 % 2 == zero) ? (((((((((/* implicit */int) (_Bool)1)) >> (((var_7) - (108806972))))) << (((((/* implicit */int) max((var_1), (arr_1 [i_0])))) - (34705))))) >= (max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) var_14)))))))) : (((((((((/* implicit */int) (_Bool)1)) >> (((var_7) - (108806972))))) << (((((((/* implicit */int) max((var_1), (arr_1 [i_0])))) - (34705))) - (18606))))) >= (max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) var_14))))))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) max((arr_7 [i_2]), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned char)226)) % (((/* implicit */int) (short)-22819))))))));
                var_26 -= ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_2] [i_1]);
                arr_12 [i_1] [i_2] [16U] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_15 [i_1] [(unsigned char)8] &= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) arr_14 [i_4] [(_Bool)0] [(_Bool)0] [(_Bool)0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4]))) * (-7523752632883834594LL))), (min((((/* implicit */long long int) 2081207758)), (8833574886944407460LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_28 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-31))))), (-2302337331706573472LL)));
                            var_29 *= ((/* implicit */_Bool) 8043753954268135512LL);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 ^= ((/* implicit */unsigned int) var_9);
                        arr_25 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [(signed char)5] [i_4] = ((/* implicit */int) 12574597995312626008ULL);
                        var_31 = ((/* implicit */long long int) (+(-2065568584)));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_32 |= ((/* implicit */short) (~(min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)180)))), (var_7)))));
                        arr_29 [i_1 + 1] [i_2] [i_4] [i_4] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_4] [i_1 + 2] [i_1] [i_1 + 1] [i_4])) & (((/* implicit */int) max((arr_6 [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))))), (((((/* implicit */_Bool) (~(var_13)))) ? (max((((/* implicit */long long int) (signed char)-15)), (8043753954268135512LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7] [i_7])))))));
                        arr_30 [i_4] [i_7] [i_4] = ((/* implicit */long long int) ((signed char) (((+(((/* implicit */int) (unsigned char)180)))) != (((/* implicit */int) arr_9 [i_4] [i_7] [i_9 - 1])))));
                        arr_31 [i_1] [i_4] [i_4] = ((max((((/* implicit */int) (signed char)-1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)56957)))))) >= (-723675319));
                    }
                    var_33 = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)896))));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_27 [i_1] [i_1] [i_2] [i_4] [i_10]);
                    arr_36 [i_10] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 + 1])) | (((/* implicit */int) (signed char)-114))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_35 += ((/* implicit */unsigned short) (signed char)-119);
                        var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) 5872146078396925607ULL)) ? (3340209043U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_37 = ((/* implicit */unsigned int) (((!(arr_14 [i_1] [i_2] [i_4] [i_1]))) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_10])) : (var_0)));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_38 = ((((/* implicit */_Bool) var_8)) ? ((~(419344012))) : (((/* implicit */int) arr_14 [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
                        arr_42 [i_12] [(unsigned char)14] [i_2] [i_4] [i_10] [i_12] &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_19))))));
                        var_39 = ((arr_14 [i_1 - 1] [i_2] [i_10] [i_2]) && (arr_14 [10] [i_2] [i_4] [i_12]));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_40 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_13] [i_1 + 2] [i_1] [i_13]))));
                        arr_47 [i_1] [i_4] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (-(arr_7 [i_13])));
                    }
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_41 &= ((/* implicit */unsigned int) ((_Bool) ((5872146078396925607ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (arr_37 [i_1 + 1] [i_1] [i_2] [i_2] [i_2] [(signed char)10] [i_14]))))))));
                arr_50 [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_38 [i_14] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1])), (16778122615359182081ULL))))));
            }
            for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                arr_53 [i_1] [i_2] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_43 [i_15] [i_2] [i_2] [i_2] [i_1] [i_1] [i_1])) >= (((/* implicit */int) arr_39 [i_1] [(short)16] [i_2] [i_2] [i_15] [i_15])))))))) ? (((/* implicit */int) arr_26 [(signed char)10] [i_1 + 2] [i_2] [i_15] [i_15])) : (-768655376)));
                var_42 = ((/* implicit */int) var_2);
                var_43 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 20; i_16 += 3) 
                {
                    for (short i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        {
                            var_44 &= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_28 [i_16 - 1] [14] [i_16 - 1] [i_16] [i_17 + 2])))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)179)) - (162)))));
                            arr_60 [i_16] [i_17] [i_16] [i_1] [(_Bool)1] [i_1] [i_16] = (i_16 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((((((2147483647) | (((/* implicit */int) (_Bool)1)))) >> (((((long long int) arr_55 [i_1] [i_2] [i_15] [i_16])) - (19081LL))))) - (9)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((((((2147483647) | (((/* implicit */int) (_Bool)1)))) >> (((((((long long int) arr_55 [i_1] [i_2] [i_15] [i_16])) - (19081LL))) - (45962LL))))) - (9))))));
                            var_45 = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                var_46 = ((_Bool) -8833574886944407460LL);
            }
            arr_61 [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned short)50114);
        }
        var_47 = arr_5 [i_1 + 1];
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                {
                    arr_68 [i_1] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(17788448254809582574ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 4) 
                        {
                            {
                                arr_74 [i_1] [i_18] [i_19] [i_19] [1] [1] [11U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) arr_65 [i_1] [i_18] [i_19] [(_Bool)1])), (arr_64 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))))));
                                arr_75 [(unsigned char)2] [i_18] [i_21] [i_18] [i_21] &= ((/* implicit */unsigned long long int) (+(-7413953217017296857LL)));
                                var_48 = (-(2147483647));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_49 &= ((/* implicit */int) (!(arr_22 [4LL] [i_1] [i_1] [i_1 + 2] [i_1 - 1] [(short)14] [4LL])));
    }
    for (long long int i_22 = 1; i_22 < 19; i_22 += 4) /* same iter space */
    {
        var_50 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)8)) / (-1872164342)));
        /* LoopNest 2 */
        for (signed char i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_51 = ((/* implicit */unsigned char) -7727813206810210758LL);
                    var_52 = ((/* implicit */unsigned char) arr_57 [i_22] [i_22] [i_22] [i_23] [i_24]);
                }
            } 
        } 
        arr_83 [i_22] = ((/* implicit */unsigned int) max((min(((~(3534666715603015395LL))), (((/* implicit */long long int) arr_78 [i_22])))), (-7413953217017296857LL)));
        arr_84 [i_22] = ((/* implicit */long long int) ((((unsigned int) max(((short)-18324), (((/* implicit */short) (unsigned char)249))))) + (var_18)));
    }
}
