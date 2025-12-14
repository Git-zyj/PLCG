/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32161
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (var_6)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_14 &= ((/* implicit */int) (signed char)(-127 - 1));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (unsigned short)33243))))));
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_11))))));
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(var_2)))), (min((((/* implicit */unsigned long long int) (unsigned char)3)), (var_3))))))));
                            var_17 = ((/* implicit */unsigned char) 2134657621);
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)33275)))), ((~(((/* implicit */int) (unsigned short)33237)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (min((max((var_4), (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)32281))))));
        arr_19 [i_5] [10ULL] |= ((/* implicit */unsigned long long int) 1189730002U);
        arr_20 [i_5] = ((/* implicit */unsigned short) var_8);
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) var_10);
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (min((14741287943868415806ULL), (((/* implicit */unsigned long long int) var_6)))))))));
            var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32291)))))))) ? ((~(((/* implicit */int) (signed char)-78)))) : (((/* implicit */int) var_12))));
            var_22 = ((/* implicit */int) max((16646144U), (2170831540U)));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_2), ((_Bool)1)))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */short) max((var_24), (var_8)));
            arr_29 [i_6] [i_8] = ((/* implicit */int) max((var_9), (((/* implicit */signed char) var_2))));
            arr_30 [i_8] = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)-62)), (3502662935U)));
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) var_4);
            arr_33 [i_6] [i_6] [i_6] |= ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 10303806806254699453ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)51))))), (var_7))))) : (2198771469U))))));
                arr_36 [i_6] [i_9] = (unsigned char)83;
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 17967477681145771677ULL))))), (var_9))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 19; i_14 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(max((var_4), (((/* implicit */int) var_6)))))))));
                                arr_49 [i_6] [i_11] [i_11] [i_13] [i_11] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-92)), (var_1))))))))));
                                var_29 = ((/* implicit */unsigned short) max((min((var_11), (((/* implicit */unsigned long long int) (signed char)-127)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_0), (((/* implicit */short) var_7))))), (var_10))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) var_12);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 4) 
        {
            var_32 = min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)32281)))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33253))) : (16646128U))));
            var_33 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_12), (var_12))))));
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            var_34 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (min((min((1122504157U), (((/* implicit */unsigned int) (unsigned short)32297)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
            var_35 *= ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
            {
                arr_61 [i_6] [i_17] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_8)))))));
                arr_62 [i_6] [i_6] [i_17] [(unsigned char)17] = ((/* implicit */short) 18446744073709551615ULL);
            }
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 2; i_20 < 19; i_20 += 1) 
                {
                    for (short i_21 = 2; i_21 < 19; i_21 += 4) 
                    {
                        {
                            arr_71 [i_6] [i_6] [(unsigned char)5] [2] [i_17] [i_17] [i_6] = ((/* implicit */unsigned char) var_6);
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3279454041U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned short)32329)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17087)))))))));
                            var_37 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)17087)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)0))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 2) 
                    {
                        {
                            arr_78 [i_22] [i_17] [i_19] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (1787974809U))))));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_7))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned short) (~(var_4)));
                arr_81 [i_6] [i_17] [i_17] [(unsigned short)3] = ((/* implicit */int) 2620159743930267895ULL);
            }
            for (unsigned short i_25 = 2; i_25 < 20; i_25 += 4) 
            {
                var_40 &= ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)42)), (4503599627370495LL)));
                arr_84 [i_6] [i_17] = ((/* implicit */unsigned char) (+(((var_2) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) 3172463138U))));
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) var_2))));
                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (unsigned char)208))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_10), (16646158U)))));
            }
            var_44 = ((/* implicit */unsigned int) var_4);
            /* LoopNest 2 */
            for (unsigned char i_26 = 4; i_26 < 20; i_26 += 1) 
            {
                for (unsigned long long int i_27 = 1; i_27 < 19; i_27 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) min((10537084158964189446ULL), (((/* implicit */unsigned long long int) var_1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_28 = 1; i_28 < 17; i_28 += 2) 
                        {
                            arr_93 [(signed char)9] [3LL] [i_26] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -213019036)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))));
                            var_46 = ((/* implicit */unsigned char) (unsigned short)4975);
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) var_10))));
                        }
                    }
                } 
            } 
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_4), (((/* implicit */int) (unsigned char)131))))))) ? (((/* implicit */int) (unsigned short)4994)) : ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)75))))))));
            var_49 = ((/* implicit */unsigned short) var_4);
        }
    }
    for (short i_29 = 0; i_29 < 21; i_29 += 1) /* same iter space */
    {
        arr_96 [i_29] = ((/* implicit */unsigned int) min((min((var_11), (var_3))), (((/* implicit */unsigned long long int) var_12))));
        arr_97 [i_29] = (signed char)38;
        var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)29625))))));
        /* LoopNest 2 */
        for (unsigned char i_30 = 0; i_30 < 21; i_30 += 1) 
        {
            for (unsigned short i_31 = 1; i_31 < 20; i_31 += 3) 
            {
                {
                    var_51 = ((/* implicit */unsigned short) var_11);
                    arr_102 [i_31] [i_30] [i_29] = ((/* implicit */long long int) var_7);
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)32704))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8188)) ? (1605827907U) : (2170831540U)))) : (min((((/* implicit */unsigned long long int) (unsigned short)65473)), (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2785318145U)));
                    arr_103 [i_29] [i_30] [(unsigned short)4] = ((/* implicit */long long int) (~(var_4)));
                }
            } 
        } 
        var_53 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-103)), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)10))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
}
