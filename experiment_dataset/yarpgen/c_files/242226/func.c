/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242226
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
    var_20 = ((/* implicit */unsigned int) ((((4ULL) * (((7ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << (((((/* implicit */int) min((((/* implicit */short) var_3)), (var_6)))) % ((-(var_4)))))));
    var_21 += ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (signed char)119)), (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))) ? (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) var_19)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 0U)))))) : ((~(547350017625366248ULL)))));
        arr_3 [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned short)2)), (1259792535223131948ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_4)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_14);
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_24 += ((/* implicit */long long int) ((max((arr_12 [(short)8] [i_1 - 1] [(short)8]), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_5))))))) == (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-20315)) * (((/* implicit */int) (signed char)-119))))), (arr_12 [(signed char)14] [(short)6] [(signed char)14])))));
                        arr_13 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-6154)) | (((/* implicit */int) (unsigned short)60145))))), (((((/* implicit */_Bool) (signed char)-108)) ? (4044163295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_2 - 1]), ((signed char)32))))) & (1462597415877758646LL)))) / (arr_0 [(unsigned char)4]))))));
                    }
                } 
            } 
            var_26 += ((/* implicit */short) ((((/* implicit */unsigned long long int) var_18)) <= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) (unsigned short)27175)) - (27152)))))) ? (((((/* implicit */_Bool) 0)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) arr_1 [(unsigned char)4]))))));
            arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((max((arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))) >= ((~(((/* implicit */int) (signed char)14))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) var_10);
                arr_19 [i_0] [3U] [i_1] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (3435907049346254415LL) : (((/* implicit */long long int) arr_1 [i_0])));
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 148802712)) >= (arr_10 [i_0 + 1] [i_0 + 1])));
            var_29 += arr_20 [i_5];
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_30 += ((/* implicit */signed char) (~(var_16)));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [(signed char)13])) + (-331654951)));
                        var_32 = ((/* implicit */signed char) arr_20 [i_0]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_10] [i_9] [i_9 - 2] [i_6] [i_0 - 1])) ? (arr_33 [i_0] [i_6] [i_9] [i_10] [i_9 - 3]) : (((/* implicit */long long int) arr_20 [i_9 + 1]))));
                        var_34 = ((/* implicit */short) var_7);
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((unsigned int) var_6)) - (((/* implicit */unsigned int) ((/* implicit */int) (short)13806))))))));
                        arr_35 [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 1])) ? (((/* implicit */int) arr_17 [i_0 - 2])) : (((/* implicit */int) (signed char)31))));
                    }
                } 
            } 
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (var_15) : (282565910)));
            arr_36 [i_0] [i_0] = (short)30174;
            var_37 = ((/* implicit */int) var_9);
        }
    }
    for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 3) /* same iter space */
    {
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((short) (short)13853)))));
        var_39 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) > (((((/* implicit */_Bool) (short)-32177)) ? (20) : (((/* implicit */int) (signed char)-32))))));
        var_40 += ((/* implicit */signed char) (unsigned char)234);
        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (25ULL)))) ? (3548111405U) : (((/* implicit */unsigned int) arr_8 [i_11 + 1] [i_11 - 1] [i_11 - 1]))))) ? (((/* implicit */long long int) arr_37 [i_11 - 1])) : (min((arr_23 [i_11]), (((/* implicit */long long int) (+(1929143044)))))))))));
    }
    var_42 += ((min((((/* implicit */unsigned long long int) 250803996U)), (18446744073709551599ULL))) ^ (((/* implicit */unsigned long long int) var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_43 = ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)));
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (unsigned int i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                for (int i_15 = 1; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_50 [i_12] [i_12] [i_14] [i_15] = ((/* implicit */signed char) var_19);
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((-8514001918912208065LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_16 = 2; i_16 < 15; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                arr_55 [i_12] [i_16] [i_12] = 9254736549441131615ULL;
                /* LoopNest 2 */
                for (short i_18 = 3; i_18 < 18; i_18 += 4) 
                {
                    for (int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        {
                            var_45 += arr_57 [i_19] [i_18] [i_18] [i_16 + 4] [i_12 - 2];
                            arr_62 [i_12] [i_16 + 2] [i_12] [i_18 - 1] [i_19] [i_19] [i_19] = ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_20 = 3; i_20 < 17; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        {
                            arr_69 [(short)17] [(short)17] [i_17] [i_17] [i_12] [3ULL] [14] = ((/* implicit */unsigned int) arr_43 [i_16] [i_16 + 2]);
                            var_46 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20656))))) % (((unsigned long long int) var_0))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */short) (~(1929143054)));
                arr_70 [i_12] [i_12] = ((/* implicit */unsigned short) arr_58 [(unsigned char)18] [i_16] [i_17] [i_17] [10] [i_12 - 1]);
            }
            for (short i_22 = 1; i_22 < 18; i_22 += 1) 
            {
                var_48 = ((/* implicit */unsigned long long int) var_2);
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    for (short i_24 = 2; i_24 < 18; i_24 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_54 [i_16 + 2] [i_16 + 2] [i_22] [16LL]))))));
                            var_50 += ((/* implicit */short) (-(var_4)));
                            arr_79 [i_16] [i_16] [i_12] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_12] [i_12 - 2] [i_16 - 1] [i_16 + 3] [i_16])) ? (((/* implicit */int) arr_66 [i_12] [i_16] [i_16 - 1] [i_16] [i_16 + 3])) : (((/* implicit */int) arr_66 [i_12] [i_16 + 3] [i_12 - 1] [i_16] [i_16 + 3]))));
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 19; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 3) 
                {
                    {
                        arr_85 [i_26] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) arr_57 [i_26] [(signed char)2] [(signed char)2] [(signed char)8] [12LL]);
                        var_52 = ((/* implicit */int) (unsigned char)27);
                        arr_86 [i_12] = ((/* implicit */unsigned int) ((unsigned long long int) arr_77 [i_12 - 1] [i_16 + 1]));
                    }
                } 
            } 
        }
        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_12] [i_12 + 1] [i_12] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */int) arr_60 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 1] [14LL] [i_12])) : (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (signed char i_27 = 0; i_27 < 19; i_27 += 3) 
        {
            for (signed char i_28 = 1; i_28 < 16; i_28 += 2) 
            {
                for (signed char i_29 = 0; i_29 < 19; i_29 += 3) 
                {
                    {
                        var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_93 [i_12 - 2] [i_12 - 2] [i_27] [i_27])))))));
                        arr_95 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (unsigned char)225);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_30 = 2; i_30 < 18; i_30 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_31 = 3; i_31 < 16; i_31 += 1) 
        {
            for (long long int i_32 = 3; i_32 < 17; i_32 += 2) 
            {
                {
                    var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) (~(((/* implicit */int) arr_97 [i_30])))))));
                    arr_104 [i_31] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_44 [i_30]))) + (((/* implicit */int) ((((/* implicit */_Bool) (short)3336)) && (((/* implicit */_Bool) (unsigned short)14089)))))));
                    arr_105 [i_30] [i_31] [i_32] [14ULL] = (+(((/* implicit */int) (signed char)-5)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_33 = 3; i_33 < 18; i_33 += 2) 
        {
            for (short i_34 = 0; i_34 < 19; i_34 += 4) 
            {
                {
                    arr_111 [i_30] [i_33 - 3] [i_34] [i_33] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(7431439785197864245ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_49 [i_30] [i_30] [i_33] [i_34] [i_34])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (signed char)-66)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4278057500U)))));
                    var_56 = ((/* implicit */signed char) max((var_17), (max((arr_40 [i_33 - 3]), (((/* implicit */unsigned long long int) var_11))))));
                    arr_112 [i_30] [9LL] [i_33] [i_34] = ((/* implicit */short) (!(((/* implicit */_Bool) max((3152699760U), (((/* implicit */unsigned int) (signed char)-14)))))));
                }
            } 
        } 
    }
}
