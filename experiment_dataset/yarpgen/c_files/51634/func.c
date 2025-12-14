/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51634
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [6U] [i_2] = ((/* implicit */unsigned int) (((+(((4294967295U) >> (((arr_2 [16U] [i_2]) + (3123329639370883936LL))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0] [i_1]))))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) ((signed char) (+(1282268861460612163LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((7LL), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2]))))))))));
                    var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned int) arr_4 [i_1] [i_1])), (((((/* implicit */_Bool) (signed char)48)) ? (130023424U) : (1040384U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)119))))))))) : (((min((arr_0 [i_1]), (2019702970U))) << (((arr_0 [22U]) - (317018539U)))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(2292698450U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1299122134834821938LL) : (((/* implicit */long long int) 4294967295U))))) ? (((((/* implicit */long long int) 2049451299U)) ^ (arr_4 [i_0] [i_0]))) : (arr_4 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-28)) ? (2245515989U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))))));
    }
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) (~((~((~(3251180447U)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_4]))));
                        arr_22 [i_3] [(unsigned char)8] [i_3] [2U] [i_4] = ((/* implicit */signed char) (-(2133699996U)));
                    }
                } 
            } 
            arr_23 [i_4] [12LL] = ((/* implicit */signed char) min((3406536316U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)59)))))));
            arr_24 [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-29)) ? (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) ((unsigned char) 3075863214431900703LL)))))));
            arr_25 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1138236300U))));
            arr_26 [(signed char)6] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37)))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)65))))))));
        }
        for (long long int i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+((-((+(9007199246352384LL))))))))));
                arr_31 [(signed char)9] [(signed char)9] [i_7 - 1] [8U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) 1877321643U))) ? (arr_12 [i_3] [5LL]) : (max((((/* implicit */long long int) arr_19 [i_3] [i_3] [i_3] [i_3] [10U])), (-5028035199801117771LL))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((4294967294U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))) ? (2275264325U) : (4294967295U))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), ((~(3165420844U)))));
            }
            for (signed char i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
            {
                arr_35 [8U] [10U] [i_7] [6U] = arr_19 [(unsigned char)4] [i_9] [i_7] [i_3] [(unsigned char)4];
                arr_36 [i_3 - 2] [i_3] [0LL] [6U] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)135)), (4044495832U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (2133699989U)))));
            }
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) min((max(((-(4161648545U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [(signed char)6] [6LL] [i_10]))))))), (min(((-(2936548115U))), ((+(0U)))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (signed char)116))));
            }
            for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), ((+((((+(133318750U))) - (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3 - 2] [i_7] [i_3] [i_7] [(unsigned char)4]))) : (2054197552U)))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) 167452452U))));
            }
            arr_41 [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-43))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3816634498U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))) ? (-2230270051249112351LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))))))));
            arr_42 [(signed char)10] [(signed char)10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(arr_17 [i_3] [(signed char)7] [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3] [i_3 + 1] [(unsigned char)7] [i_7]))) : ((-(arr_13 [(signed char)11] [(signed char)11]))))), (((((/* implicit */_Bool) 2240769743U)) ? ((+(arr_32 [i_3] [i_3] [i_3 + 1] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223))))))))));
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) ((unsigned char) 2047U))), ((-(6917529027641081856LL)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) 
        {
            arr_46 [i_3] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_12] [(signed char)9] [i_12 + 1]))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)132))))) <= (((unsigned int) 2352123799U)))) ? (((/* implicit */long long int) 4294967295U)) : (((long long int) 4294967295U)))))));
            var_30 = ((/* implicit */unsigned int) 1073741823LL);
            arr_47 [i_3] [9U] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7564781745347516152LL)) ? (((/* implicit */long long int) 3226485634U)) : (137438952960LL)))) ? (((/* implicit */long long int) 2762000264U)) : (((((/* implicit */_Bool) (-(747656580U)))) ? (((/* implicit */long long int) (+(4294967268U)))) : ((-(-1LL)))))));
        }
        var_31 += ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) 7209480267550785883LL)))) ? ((-(1310405350U))) : (((unsigned int) (signed char)-106))))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */long long int) 2370879998U)) : (arr_40 [i_3] [(signed char)1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned char)243))))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))) : (((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned char)13), (((/* implicit */unsigned char) (signed char)78)))))))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) < (1110056781U))))));
        arr_50 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_13] [i_13])) ? (2540187664U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))))) ? (((((/* implicit */_Bool) 4500133749283184303LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_13] [(signed char)4] [i_13]))) : (arr_4 [2U] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_13] [i_13] [i_13]))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_7 [19LL] [24LL] [15LL]))));
    }
    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) (-((+(arr_52 [i_14])))));
                    arr_57 [2U] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_14] [i_15] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(signed char)7] [i_15] [i_15] [i_15]))) : (1087093563U)))))))));
                    arr_58 [11U] [i_14] [(unsigned char)12] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_14])))))))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(((arr_32 [i_14] [(unsigned char)0] [i_14] [(unsigned char)0]) << (((((((/* implicit */_Bool) 4795463070497660199LL)) ? (1767429339540272104LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))) - (1767429339540272076LL))))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2540187664U)))) ? (((((/* implicit */_Bool) 767542246U)) ? (601339594U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))) : (((((/* implicit */_Bool) (signed char)-35)) ? (690566300U) : (397602689U)))))) ? (((((arr_18 [i_14] [i_14] [i_14] [i_14] [11U] [11U]) - (((/* implicit */long long int) 397602689U)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 2982178617U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_14] [i_14] [9LL]))) : (arr_28 [i_14])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_14] [i_14])))))))));
    }
    /* LoopNest 2 */
    for (signed char i_17 = 1; i_17 < 24; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    var_38 *= ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_17 - 1] [i_18] [i_19]))) : (-5874957615895000502LL)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) != ((~(3707335494743941473LL)))))))));
                    var_39 = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 2984561945U))))) >> (((((/* implicit */int) (signed char)-83)) + (114)))))));
                    arr_66 [i_17] = 1682693809U;
                }
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
                {
                    arr_70 [i_20] [i_20] [i_20] [i_17 - 1] = (-(2659579948U));
                    arr_71 [2U] [i_20] [i_20] [i_20] = ((/* implicit */signed char) arr_1 [i_17]);
                    var_40 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2126554522U)) ? (arr_1 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (max((((/* implicit */long long int) (unsigned char)17)), (arr_2 [i_17 - 1] [20U]))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 4294967295U)) ? (2659579948U) : (2659579948U))))))));
                    var_41 = ((/* implicit */unsigned int) min((var_41), (3897364607U)));
                }
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
                {
                    arr_75 [i_21] [i_18] [i_21] = min(((-((~(44760225U))))), (44197670U));
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 3; i_22 < 23; i_22 += 3) 
                    {
                        for (long long int i_23 = 1; i_23 < 23; i_23 += 2) 
                        {
                            {
                                arr_82 [21U] [16U] [i_18] [i_21] [i_21] [i_22] [i_23] = ((/* implicit */unsigned int) arr_63 [i_23] [1U] [14U] [(unsigned char)3]);
                                arr_83 [i_21] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) 1635387348U);
                            }
                        } 
                    } 
                    arr_84 [i_21] [i_18] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_67 [i_17] [i_17 - 1] [i_17 - 1]) < (arr_6 [i_17] [i_17 + 1] [i_17] [i_21]))))));
                }
                arr_85 [10U] [i_18] = ((/* implicit */unsigned int) (+(8064232938199753416LL)));
            }
        } 
    } 
}
