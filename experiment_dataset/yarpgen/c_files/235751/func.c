/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235751
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((var_10), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_21 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (max((((/* implicit */unsigned int) max((arr_2 [22]), (arr_2 [8U])))), (var_1))) : (((/* implicit */unsigned int) arr_1 [(unsigned short)2]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            var_22 = var_12;
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (70368744177656LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
            var_24 = ((/* implicit */int) 70368744177667LL);
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] = ((/* implicit */_Bool) (unsigned char)39);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_4 [i_0]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 544955896)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-21617))));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)25)) : (arr_1 [(unsigned char)17]))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))));
                /* LoopSeq 1 */
                for (signed char i_7 = 4; i_7 < 22; i_7 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_7 - 3] [i_7 - 1] [(unsigned short)2] [i_7 - 2] [i_7] [i_7 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 - 4] [i_7] [6LL] [i_7 - 2] [6LL] [i_7 - 2])))));
                    arr_22 [i_6] [(short)14] [i_6] |= ((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 2] [i_7 - 1]);
                }
            }
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
            {
                arr_25 [i_0] [4ULL] [i_8] [(unsigned short)12] &= ((/* implicit */long long int) ((int) var_15));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (var_19)));
                var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) + (arr_24 [i_0] [i_2] [i_0])));
                arr_26 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (~(arr_8 [i_0] [(signed char)22] [i_2])));
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            arr_36 [i_0] [i_2] [i_0] [i_10] [i_11] = ((/* implicit */unsigned int) ((short) arr_19 [i_0] [i_2] [i_10] [i_0]));
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_10] [i_2] [i_9] [i_10] [i_11] [i_10] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_12])) ? (((/* implicit */int) arr_15 [i_0] [i_2])) : (((/* implicit */int) arr_15 [i_0] [i_13]))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_15 [i_0] [i_2])) : (((/* implicit */int) var_6))));
                            var_35 = ((/* implicit */unsigned long long int) (+(((int) var_13))));
                            var_36 *= ((/* implicit */unsigned long long int) (unsigned char)159);
                        }
                    } 
                } 
                var_37 = (~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)21] [(short)4])));
            }
            var_38 = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_2]);
        }
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_39 -= ((/* implicit */long long int) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_2 [2U]) : (((/* implicit */int) arr_7 [(signed char)12]))))));
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                var_40 *= (unsigned char)200;
                /* LoopSeq 1 */
                for (unsigned char i_16 = 3; i_16 < 21; i_16 += 3) 
                {
                    var_41 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (~(var_5)))), (arr_27 [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16 - 2])))));
                    var_42 = var_17;
                }
                var_43 = ((/* implicit */unsigned short) ((int) 2061699044));
            }
            var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_48 [i_0] [i_14])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])), ((unsigned char)95)))) : ((~(((/* implicit */int) arr_42 [i_0] [i_0])))))) ^ (((/* implicit */int) (unsigned char)161))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_17 = 3; i_17 < 22; i_17 += 1) 
            {
                var_45 -= ((/* implicit */short) (-(((/* implicit */int) arr_11 [(signed char)8]))));
                var_46 += ((signed char) arr_43 [i_17 + 1] [i_17 - 2] [16]);
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (_Bool)1))));
                var_48 = ((/* implicit */unsigned short) arr_19 [i_17 - 3] [i_17 + 1] [i_17 - 1] [i_0]);
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        {
                            var_49 -= ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)1))))));
                            var_50 = ((unsigned char) arr_6 [i_0]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 23; i_20 += 1) 
            {
                var_51 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) arr_40 [14U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_17)))));
                arr_57 [i_0] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_14] [i_0])) ? (arr_39 [i_0] [12] [(unsigned char)3] [19U] [i_14] [(short)14] [i_20]) : (arr_39 [i_0] [i_0] [(_Bool)1] [i_14] [i_14] [i_14] [i_20])));
            }
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                var_52 = ((((/* implicit */_Bool) -5089797683789590519LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) -2048)) ? (arr_28 [(unsigned short)16] [i_14] [i_0] [(short)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0]))))));
                var_53 = ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]));
            }
        }
        /* vectorizable */
        for (unsigned int i_22 = 3; i_22 < 19; i_22 += 3) 
        {
            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63222)) ? (arr_27 [i_22 + 2] [i_22 - 2] [i_22 + 4] [i_22 + 3]) : (arr_27 [i_22 + 1] [i_22 - 2] [i_22 - 2] [i_22 - 3])));
            /* LoopSeq 2 */
            for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                var_55 = ((/* implicit */unsigned long long int) (unsigned short)29235);
                var_56 = ((/* implicit */short) arr_21 [i_0] [i_0]);
                var_57 -= (-(((/* implicit */int) arr_38 [i_0] [0])));
            }
            for (int i_24 = 1; i_24 < 20; i_24 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_25 = 2; i_25 < 22; i_25 += 2) 
                {
                    var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) (~(((/* implicit */int) arr_51 [i_24] [i_24 + 1] [i_25] [(unsigned char)6])))))));
                    var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) (_Bool)1))));
                }
                var_60 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0]))));
                var_61 = ((/* implicit */unsigned int) ((signed char) arr_65 [i_22 + 2]));
            }
            arr_70 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_22 + 1] [i_22 + 2] [i_0])) && (((/* implicit */_Bool) arr_50 [i_22 - 2] [i_22 - 3] [i_0]))));
        }
        var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) var_1))));
        var_63 = ((/* implicit */int) max((((unsigned int) arr_17 [i_0] [i_0] [(unsigned char)14] [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((signed char) arr_27 [i_0] [i_0] [i_0] [i_0]))) : ((-(((/* implicit */int) var_3)))))))));
    }
    for (short i_26 = 0; i_26 < 20; i_26 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_27 = 0; i_27 < 20; i_27 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_28 = 0; i_28 < 20; i_28 += 1) 
            {
                for (short i_29 = 0; i_29 < 20; i_29 += 2) 
                {
                    {
                        var_64 &= ((/* implicit */_Bool) ((short) max((((/* implicit */long long int) var_0)), (min((arr_43 [i_26] [i_27] [i_29]), (((/* implicit */long long int) var_11)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_30 = 0; i_30 < 20; i_30 += 2) 
                        {
                            arr_87 [i_26] [i_26] [i_26] = (unsigned short)63222;
                            var_65 = (+(((/* implicit */int) (unsigned short)41990)));
                            var_66 = ((/* implicit */signed char) (~(((/* implicit */int) arr_75 [i_26]))));
                            var_67 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44250))));
                        }
                        var_68 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_52 [i_26] [(_Bool)1] [i_28] [i_27]))))), (((unsigned char) arr_65 [18]))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_39 [i_26] [i_27] [i_27] [i_28] [i_28] [i_26] [i_29])), (var_1))))) : (((int) arr_23 [i_29]))));
                    }
                } 
            } 
            var_69 = ((/* implicit */long long int) max((var_69), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)115)))), (((/* implicit */int) min((arr_49 [i_26] [i_27]), (((/* implicit */unsigned short) arr_41 [(signed char)9])))))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_81 [i_26] [i_26] [i_26] [(unsigned short)12])))))));
        }
        var_70 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_71 [i_26]))))), (max((arr_24 [i_26] [i_26] [i_26]), (((/* implicit */unsigned long long int) arr_71 [i_26]))))));
    }
    for (int i_31 = 1; i_31 < 23; i_31 += 3) 
    {
        var_71 *= (+((-(var_15))));
        var_72 += ((/* implicit */long long int) ((((/* implicit */int) arr_90 [(unsigned char)20])) == (((/* implicit */int) min((arr_89 [i_31 + 1]), (arr_89 [i_31 + 2]))))));
    }
    var_73 = ((/* implicit */signed char) var_18);
    var_74 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_18)), (var_2))), (max((var_19), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)25490))))))) : (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (var_15)))), (var_10)))));
}
