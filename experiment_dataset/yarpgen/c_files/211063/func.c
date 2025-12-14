/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211063
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!((!(((((/* implicit */int) (signed char)96)) > (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 += arr_4 [i_1] [i_1];
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */int) arr_4 [i_1] [i_1])), (((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_5 [i_1] [i_1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))))));
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), ((-(((/* implicit */int) (signed char)15))))))) % (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))))) % (((((/* implicit */_Bool) 7762139019357379070LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_13)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 6; i_5 += 3) 
                    {
                        for (signed char i_6 = 4; i_6 < 7; i_6 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_5])) / (((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)3))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned short) (signed char)120);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_14))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_25 [i_2 - 2] [i_3] [i_4] [(signed char)2] [i_8])))) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_3 - 3] [i_4] [i_7] [i_8])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_8 [i_2 - 1])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(arr_3 [i_3 - 1] [i_3 + 1]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((((/* implicit */int) arr_23 [i_2] [i_2] [i_9] [i_10] [i_10] [i_10])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_10] [i_9] [i_10] [i_10])) + (65))))) & ((-(((/* implicit */int) var_10)))))))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((var_11) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_9] [i_9] [i_9] [i_10]))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_9] [i_10]))))))));
            }
            for (long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_11])) ? (((/* implicit */int) arr_4 [i_9] [i_9])) : (((/* implicit */int) (unsigned short)0)))) | (((/* implicit */int) (unsigned short)65535)))))));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_25 [i_2] [i_2 - 1] [i_9] [i_12] [i_12])))) ? (((/* implicit */int) ((signed char) arr_17 [i_2] [i_9] [i_11]))) : ((~(((/* implicit */int) arr_23 [i_12] [i_11] [i_11] [i_9] [i_9] [i_2]))))));
                    var_30 += ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)127)))) | (((/* implicit */int) arr_7 [i_12]))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        var_31 += ((/* implicit */signed char) (unsigned short)0);
                        var_32 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_26 [i_2 + 1]))));
                    }
                    for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
                    {
                        var_33 += ((/* implicit */long long int) (+((-(((/* implicit */int) var_0))))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)62))))) + (((((/* implicit */_Bool) arr_32 [i_11] [i_9] [i_11])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2 - 1] [i_9] [i_11] [i_12] [i_14]))))))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+((-(((/* implicit */int) var_7)))))))));
                    }
                    var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12]))) + (var_3)))) ? (((((/* implicit */_Bool) arr_26 [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_12] [i_9])) : (((/* implicit */int) arr_7 [i_11])))) : (((/* implicit */int) var_7))));
                }
                for (unsigned short i_15 = 3; i_15 < 8; i_15 += 3) 
                {
                    var_37 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_11 [i_2] [i_9] [i_11] [i_15 - 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        var_38 += ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (unsigned short)65024)))));
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (signed char)-46))));
                        var_40 = ((/* implicit */long long int) max((var_40), (((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_15] [i_15 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_16 - 1] [i_11] [i_16 - 1] [i_15 - 1] [i_11] [i_2 - 1]))) : (arr_27 [i_2 - 1] [i_11] [i_15 - 2])))));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)63752)))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) && (((/* implicit */_Bool) -5534762293274621753LL))))))))));
                    }
                    var_42 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)96)) % (((/* implicit */int) (signed char)-62)))));
                }
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((arr_50 [i_2] [i_9] [i_11] [i_17]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_47 [i_2] [i_9] [i_11] [i_17])) : (((/* implicit */int) var_1)))))))));
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (+(arr_24 [i_2 - 2] [i_9] [i_11] [i_17] [i_11]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 7; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) arr_0 [i_2] [i_9]))));
                            var_46 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? ((+(((/* implicit */int) arr_20 [i_2 + 1] [i_9] [i_11] [i_18] [i_19])))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) arr_22 [i_18]))));
                            var_48 += ((/* implicit */unsigned short) arr_46 [i_2] [i_2 + 1] [i_9] [i_9] [i_11] [i_18] [i_19]);
                        }
                    } 
                } 
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)1783)))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_11] [i_9] [i_9] [i_9] [i_9]))))))))));
            }
            for (long long int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
            {
                var_50 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (arr_27 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_27 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_2 + 1] [i_9] [i_20] [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_2 - 1]))))) ? (((/* implicit */int) arr_8 [i_2 - 2])) : ((-(((/* implicit */int) (unsigned short)1782))))));
            }
            var_52 += ((/* implicit */unsigned short) (~(arr_24 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2])));
        }
        for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            var_53 += ((/* implicit */unsigned short) arr_37 [i_2] [i_21] [i_21] [i_2] [i_21] [i_21] [i_21]);
            /* LoopNest 3 */
            for (unsigned short i_22 = 2; i_22 < 9; i_22 += 2) 
            {
                for (signed char i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_54 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_23] [i_23] [i_22 - 2] [i_2 - 1])) && (((/* implicit */_Bool) (signed char)-59))));
                            var_55 += arr_60 [i_22] [i_22 - 1] [i_22 + 1];
                            var_56 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65531)) + (((/* implicit */int) arr_53 [i_2 + 1] [i_21] [i_22 - 2] [i_22]))));
                            var_57 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_22 - 2] [i_23] [i_24])) ? (((/* implicit */int) (unsigned short)63751)) : (((((/* implicit */_Bool) arr_46 [i_2] [i_2 + 1] [i_2] [i_21] [i_22 - 1] [i_23] [i_24])) ? (((/* implicit */int) arr_34 [i_2 - 1] [i_21] [i_23] [i_23])) : (((/* implicit */int) (unsigned short)63752))))));
                            var_58 += ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)1787)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
            {
                var_59 += ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_25] [i_25] [i_2 - 1] [i_2 + 1])) * (((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned short)59489)) - (59461)))))));
                var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_2] [i_2] [i_2 + 1] [i_21] [i_25] [i_25])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_14 [i_2]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [(signed char)2] [i_21] [i_25]))) / (-5534762293274621753LL))))))));
                /* LoopSeq 2 */
                for (long long int i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) var_12))));
                    var_62 += ((/* implicit */signed char) (+((+(((/* implicit */int) var_2))))));
                }
                for (long long int i_27 = 0; i_27 < 10; i_27 += 4) /* same iter space */
                {
                    var_63 += ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)64629))))));
                    var_64 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_47 [i_27] [i_27] [i_27] [i_2])))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29729)))))));
                    var_65 = -9223372036854775801LL;
                    var_66 += ((/* implicit */unsigned short) var_11);
                    var_67 = ((/* implicit */unsigned short) min((var_67), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5534762293274621743LL)) ? (((/* implicit */int) arr_35 [i_27] [i_21] [i_2 - 2] [i_27] [i_27])) : (((/* implicit */int) arr_35 [i_27] [i_21] [i_2 - 2] [i_2 + 1] [i_27])))))));
                }
            }
            for (signed char i_28 = 2; i_28 < 7; i_28 += 4) 
            {
                var_68 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_28])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (arr_56 [i_2] [i_2] [i_21] [i_21] [i_21] [i_28 + 2] [i_28 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_69 += ((/* implicit */unsigned short) var_4);
            }
            for (unsigned short i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                var_70 += ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2] [i_21] [i_29] [i_21])) % ((+(((/* implicit */int) (signed char)-56))))));
                var_71 += ((/* implicit */signed char) arr_43 [i_2] [i_2] [i_29]);
                var_72 += ((/* implicit */signed char) (+(((((/* implicit */int) arr_31 [i_2 + 1] [0LL] [i_29])) - (((/* implicit */int) arr_82 [i_2 - 1] [i_21] [i_29]))))));
                var_73 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (677607178922731062LL) : (var_3))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)62418)))))));
            }
        }
        var_74 += ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_73 [i_2 + 1] [i_2] [i_2] [i_2 + 1])))) * (((/* implicit */int) arr_74 [i_2] [i_2] [i_2 - 2] [i_2 + 1]))));
    }
    for (signed char i_30 = 0; i_30 < 16; i_30 += 3) 
    {
        var_75 += arr_85 [i_30];
        var_76 += ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_30] [i_30])) && (((/* implicit */_Bool) var_9))))), (arr_5 [i_30] [i_30]))))));
    }
    /* LoopNest 3 */
    for (signed char i_31 = 2; i_31 < 10; i_31 += 1) 
    {
        for (long long int i_32 = 0; i_32 < 12; i_32 += 3) 
        {
            for (long long int i_33 = 1; i_33 < 10; i_33 += 1) 
            {
                {
                    var_77 += ((/* implicit */signed char) (~(max((((/* implicit */long long int) ((((/* implicit */int) arr_91 [i_32] [i_33])) ^ (((/* implicit */int) var_8))))), (min((((/* implicit */long long int) arr_5 [i_33] [i_32])), (arr_84 [i_33])))))));
                    var_78 += ((/* implicit */long long int) arr_85 [i_33]);
                    var_79 = ((/* implicit */unsigned short) max((var_79), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) arr_88 [i_31])), ((~(((/* implicit */int) arr_89 [i_31]))))))))));
                }
            } 
        } 
    } 
    var_80 = ((/* implicit */signed char) min((var_80), (((/* implicit */signed char) max((var_3), (((long long int) min((var_13), (((/* implicit */long long int) (unsigned short)63736))))))))));
}
