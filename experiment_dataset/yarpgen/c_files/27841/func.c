/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27841
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
    var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((var_16) ? (((/* implicit */long long int) var_9)) : (-5184294426301357027LL))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [(_Bool)1] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) max((var_8), (5184294426301357031LL)))) : (((unsigned long long int) 5184294426301357023LL)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) arr_5 [0] [i_1]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1])) ? (-5153906007452120945LL) : (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_1])))), (((/* implicit */long long int) ((unsigned int) arr_3 [i_0]))))));
                        arr_10 [i_0 + 1] [i_1] [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_3])) ? (min((((((/* implicit */_Bool) 9248697482315051919ULL)) ? (arr_1 [i_0 + 1] [i_3]) : (4312910973282347083ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (-5184294426301357031LL)))))) : (((/* implicit */unsigned long long int) ((int) arr_6 [17LL] [i_1] [i_1]))));
                        var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_5 [i_3] [i_3])) & (var_3)))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [(_Bool)1])) ? ((-(arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2437748867847102872ULL))))))))));
                    }
                }
            } 
        } 
        arr_11 [18U] &= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (-5184294426301357045LL) : (5184294426301357026LL)));
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_19 [i_5] [i_6] [i_7]))), ((~((~(arr_19 [i_4] [i_5] [i_6])))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) ((arr_20 [i_6] [i_6]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1652)))));
                            arr_27 [i_6] = ((/* implicit */_Bool) (+(max((arr_12 [i_5] [i_8]), (arr_12 [i_6] [i_7])))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) ((arr_26 [i_4] [i_5] [i_6]) == (((/* implicit */unsigned long long int) ((-5184294426301357045LL) & (((/* implicit */long long int) ((/* implicit */int) (short)27862))))))))) - ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) > (arr_20 [19U] [i_7]))))))));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) 5184294426301357045LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (((short) 2179501500U)))))) : (((((1526109620721283850ULL) + (arr_19 [i_4] [i_6] [i_9]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_32 [i_9] [i_7] [i_6] [i_5] [5ULL] = ((/* implicit */int) arr_31 [i_9] [i_7] [i_9] [(_Bool)1] [i_6] [i_5]);
                            arr_33 [i_9] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((-5184294426301357027LL) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (max((((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_19 [i_4] [i_7] [i_9]) : (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5184294426301357026LL))))))));
                            arr_34 [i_4] [i_5] [i_4] [i_7] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_14 [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_18 [i_4])))))));
                            arr_35 [i_4] [i_4] [i_6] = ((((((/* implicit */unsigned long long int) -5184294426301357021LL)) != (arr_29 [i_4] [(_Bool)1] [(_Bool)1] [i_4] [i_4]))) ? ((+(((var_7) ? (17220876682075985264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6]))))))) : (((arr_22 [i_4] [i_5] [i_6] [i_6] [i_7] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (max((arr_20 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_5] [i_6])))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_39 [i_10] [i_7] [(unsigned char)13] [i_4] &= ((/* implicit */long long int) max(((-(((/* implicit */int) min((var_14), (arr_23 [i_6] [i_7] [i_6] [i_5] [i_4])))))), (((/* implicit */int) (_Bool)0))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_30 [i_4] [i_5] [i_6] [i_6] [i_10]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_38 [i_5] [i_10])) ? (arr_38 [i_5] [i_6]) : (arr_38 [i_5] [4]))))))));
                            var_29 -= ((/* implicit */unsigned long long int) (((((-(5184294426301357025LL))) + (9223372036854775807LL))) >> ((((-(arr_29 [i_6] [i_6] [i_7] [i_7] [i_7]))) - (4516963949626061002ULL)))));
                        }
                        arr_40 [4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_20 [i_4] [i_5]);
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */short) (((!(var_16))) ? (((/* implicit */long long int) min((1344870078), (((/* implicit */int) ((_Bool) arr_16 [i_4] [i_4] [i_4])))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [i_4]))) : (-5184294426301357027LL)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            {
                arr_46 [i_11] = ((/* implicit */signed char) ((unsigned long long int) var_6));
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            {
                                arr_54 [i_15] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_11]))))))))) != (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5184294426301357027LL)))) | (((arr_0 [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_11] [(signed char)0] [i_13] [(signed char)0] [i_15]))) : (5184294426301357045LL)))))));
                                var_31 = (~(min((arr_25 [i_15] [i_14 + 1] [i_14 - 1]), (arr_19 [i_14 - 1] [i_14 - 1] [i_14]))));
                            }
                        } 
                    } 
                    var_32 ^= ((/* implicit */_Bool) (short)32767);
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32760))))) & (((((/* implicit */_Bool) arr_48 [i_11] [i_12] [i_12] [i_12])) ? (arr_1 [i_13] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        for (short i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_34 |= ((/* implicit */unsigned int) arr_47 [(short)1] [i_12] [i_12] [i_12]);
                                var_35 += ((/* implicit */signed char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_25 [i_13] [i_12] [i_11])))) ? (((/* implicit */int) ((5184294426301357045LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_16] [i_16])))))) : (((/* implicit */int) arr_47 [i_17 + 2] [i_16 - 1] [i_11] [i_11]))))), (min((5184294426301357026LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_13]))) > (arr_57 [i_13] [i_16]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            {
                                var_36 ^= ((/* implicit */long long int) (((-(min((((/* implicit */unsigned long long int) 5184294426301357026LL)), (arr_25 [i_11] [i_12] [i_19]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_11] [i_11] [i_11] [i_11] [i_11]))) ? (((/* implicit */unsigned int) 237557316)) : (((unsigned int) arr_8 [i_19] [(_Bool)1] [i_13] [i_12] [i_11] [i_11])))))));
                                arr_67 [i_11] [i_19] [i_12] [4] [i_18] [i_18] [i_13] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) arr_36 [i_19] [i_18] [i_13] [i_12]))))) & (5184294426301357045LL)));
                                arr_68 [i_11] = (+(5184294426301357044LL));
                                var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_41 [i_12]) % (((/* implicit */long long int) 1344870078))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_20 = 2; i_20 < 10; i_20 += 2) 
                {
                    arr_73 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((var_14) ? (((/* implicit */int) (unsigned short)59741)) : (((/* implicit */int) var_6))))));
                    arr_74 [i_12] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65161))) / (-5184294426301357045LL)))) ? (min((((/* implicit */long long int) var_6)), (arr_9 [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_20 - 2] [i_20 - 2] [i_20 - 1]))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_11] [i_12] [i_12] [i_12] [i_12] [i_12] [13ULL]))) ^ (var_3)))))) : (arr_59 [i_11] [i_20 + 2] [(unsigned short)1] [5] [i_11] [i_12])));
                    var_38 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [i_20]))));
                    var_39 ^= ((short) (!(((/* implicit */_Bool) arr_38 [i_20 + 1] [i_20 + 1]))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    var_40 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_12))))));
                    var_41 -= ((/* implicit */_Bool) (-(arr_25 [i_11] [i_11] [i_11])));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) arr_45 [i_11] [i_12] [i_21])) : (-5184294426301357026LL)))) ? (arr_72 [i_11] [i_12] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 5184294426301357026LL))))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)0))))))) : (5184294426301357045LL))))));
                }
            }
        } 
    } 
}
