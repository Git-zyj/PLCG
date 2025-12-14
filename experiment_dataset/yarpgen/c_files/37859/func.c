/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37859
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
    var_14 = ((/* implicit */_Bool) max((var_14), (var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33827))) - (-1718639812253388642LL)))))), ((+(max((((/* implicit */unsigned long long int) var_6)), (var_3))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1]))) & (arr_3 [i_1 - 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [(unsigned char)7]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((arr_3 [i_0] [i_1 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1 + 1]))))))))));
                    var_18 = ((/* implicit */_Bool) ((long long int) (+(0U))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1718639812253388651LL))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) var_12)))) >= ((~(((/* implicit */int) arr_4 [i_0]))))));
                        arr_12 [2] [i_4] [i_3 - 2] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((arr_0 [i_1 - 1]) >> (((/* implicit */int) (_Bool)1))));
                        arr_13 [i_4] = ((/* implicit */unsigned int) (~(arr_7 [i_1 + 1] [i_1] [(unsigned char)6])));
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1718639812253388650LL)) ? (-5904576422654967266LL) : (-1718639812253388651LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 2]))) : (((var_9) * (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) arr_4 [i_0]);
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_24 = ((unsigned short) ((arr_2 [i_0]) << (((arr_7 [(_Bool)1] [i_6] [i_1 - 1]) - (17921524435082557716ULL)))));
                            arr_21 [i_0] [i_0] [i_6] = ((short) 15573674404427240122ULL);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((arr_4 [i_3 - 1]) ? (((/* implicit */int) (unsigned short)20951)) : (((/* implicit */int) arr_4 [i_3 - 2]))));
                            var_26 = ((/* implicit */unsigned short) ((_Bool) arr_11 [i_3 + 1] [i_3 + 3] [i_6] [i_3 + 4] [i_3 + 1]));
                            arr_26 [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_3 - 2] [i_1 + 1] [i_1 + 1])) ? (arr_5 [i_3 + 3] [i_3 - 2] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) 1057510120U))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 1057510120U)) || (((/* implicit */_Bool) var_6))))))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) (!(var_2))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_6] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(unsigned char)7] [(short)2])) ? (((/* implicit */unsigned long long int) -1718639812253388651LL)) : (arr_3 [i_1 - 2] [i_1 - 2])));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) arr_27 [i_1 + 1] [i_1 - 1]))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) 1718639812253388657LL);
        var_32 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_30 [i_10])) ? (5486147651054383367LL) : (((/* implicit */long long int) arr_30 [i_10])))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1718639812253388657LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
        arr_32 [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2757764660U)) ? (-1718639812253388649LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        var_33 = ((/* implicit */short) 1718639812253388670LL);
        var_34 = (_Bool)1;
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 1; i_12 < 17; i_12 += 4) 
    {
        for (signed char i_13 = 3; i_13 < 16; i_13 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    for (long long int i_15 = 2; i_15 < 17; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            {
                                var_35 = (i_12 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((arr_47 [i_12 + 1] [i_13 - 3] [i_12] [i_16]) - (2172304182U)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((arr_47 [i_12 + 1] [i_13 - 3] [i_12] [i_16]) - (2172304182U))) - (1872835439U))))));
                                var_36 = max((max(((+(1718639812253388626LL))), (arr_39 [i_15 - 2] [i_12] [i_12]))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_0)))))));
                                arr_50 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (-(((int) (!((_Bool)1))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (arr_41 [i_12] [i_12] [i_12 + 1]))))));
                    arr_53 [i_12] [i_13] [i_13] [i_17 - 1] = ((/* implicit */unsigned char) (-(arr_47 [(unsigned char)13] [i_13 - 3] [i_12] [i_17 + 3])));
                }
                for (short i_18 = 2; i_18 < 16; i_18 += 4) 
                {
                    var_38 = ((/* implicit */unsigned char) ((arr_47 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 1]) - (((arr_47 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 1]) | (arr_47 [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1])))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_11))) && (((((/* implicit */_Bool) 1718639812253388674LL)) || ((!(((/* implicit */_Bool) arr_52 [i_12] [i_13] [i_18 + 1] [i_13 - 1]))))))));
                }
                arr_58 [i_12] [i_12] [(unsigned short)11] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 5686485909244310162LL)) ? (-5686485909244310184LL) : (((/* implicit */long long int) 1298894144))))))), (((unsigned long long int) ((long long int) var_5)))));
                /* LoopSeq 2 */
                for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_34 [i_12])) + (1718639812253388643LL))) / (arr_42 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1])));
                    /* LoopNest 2 */
                    for (long long int i_20 = 2; i_20 < 16; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 4) 
                        {
                            {
                                var_41 *= ((/* implicit */signed char) 1718639812253388670LL);
                                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)41456), (((/* implicit */unsigned short) arr_46 [i_12] [i_13 - 2]))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)11), (((/* implicit */unsigned char) arr_41 [i_21] [i_20] [i_12]))))) ? (3237457175U) : (min((arr_40 [i_12] [i_21] [i_19]), (((/* implicit */unsigned int) var_12)))))))));
                                var_43 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) var_12)));
                                var_44 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_12 - 1] [i_21] [i_13 - 2] [i_20] [i_13] [i_20])) ? (((var_1) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44254))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) / (((unsigned long long int) (_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
                        {
                            {
                                arr_76 [i_12] [i_12] = ((/* implicit */short) max((((((/* implicit */int) arr_74 [i_13 - 1] [i_13] [i_13 - 1] [i_12 + 1] [i_23])) * (((/* implicit */int) arr_74 [i_13 - 2] [i_13] [(signed char)12] [i_12 + 1] [i_23])))), ((+(((/* implicit */int) arr_74 [i_13 - 1] [i_13 - 1] [i_19] [i_12 - 1] [i_22]))))));
                                var_45 ^= ((/* implicit */_Bool) (unsigned short)65514);
                                var_46 = ((/* implicit */unsigned short) arr_75 [i_12] [i_12] [(short)0] [i_12] [i_12 - 1] [i_12]);
                                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) 1718639812253388651LL))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    var_48 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (unsigned short)41448)))));
                    /* LoopNest 2 */
                    for (short i_25 = 1; i_25 < 14; i_25 += 2) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 1593198003))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20009)) ^ (((/* implicit */int) arr_67 [i_13 - 2] [i_26]))))) : (var_7)));
                                var_50 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_67 [i_12 + 1] [i_13]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 18; i_28 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned short) var_1);
                            var_52 |= ((/* implicit */unsigned char) ((long long int) (-(((24U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            var_53 = ((/* implicit */unsigned char) max((((unsigned int) (unsigned char)62)), (((/* implicit */unsigned int) var_5))));
                            var_54 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((unsigned int) (signed char)63)) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_55 = ((/* implicit */int) (-(var_3)));
}
