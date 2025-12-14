/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193435
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_12 [i_2] = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)112)), ((~(((/* implicit */int) (signed char)52))))))) ? (((int) var_3)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))));
                    var_14 *= ((/* implicit */unsigned int) arr_3 [i_1]);
                    var_15 = var_13;
                    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)53)) && (arr_8 [i_0 - 1] [5U] [i_0 + 1]))))) == (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 + 3])), (var_3)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)33689))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_6)))) : (((var_1) >> (((var_8) - (1383745604U))))))));
    /* LoopSeq 4 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)31835)), (11269240091268374009ULL)));
        var_18 = var_0;
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_4] [i_4])), (var_0)))) > (max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7228)))))))));
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            arr_20 [2U] [2U] [i_4] = ((/* implicit */long long int) arr_17 [i_4] [i_5]);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_14 [i_4])))))) ? ((~(arr_13 [i_6]))) : (((/* implicit */long long int) (~(var_2))))));
                        var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != (arr_21 [i_4] [i_5] [i_6] [i_4])))), (max((((/* implicit */unsigned int) var_10)), (arr_23 [2U] [i_6] [2U]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_6] [i_4]))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_21 += ((/* implicit */unsigned int) var_7);
                        var_22 = ((/* implicit */short) ((_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_23 [i_4] [i_4] [i_9]) : (((/* implicit */unsigned int) var_5))))));
                        var_23 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_5] [i_5] [i_4]))) <= (var_11)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 2; i_10 < 10; i_10 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 4; i_12 < 10; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_43 [i_10] [i_11] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_4)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))))))));
                            var_24 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) ((var_6) != (((/* implicit */long long int) var_2))))), (min((((/* implicit */unsigned long long int) arr_36 [i_10] [i_10])), (var_12))))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == ((+(var_3))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (int i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)-54))));
                            var_27 += ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_28 *= (!(((/* implicit */_Bool) ((unsigned char) min(((signed char)29), (((/* implicit */signed char) (_Bool)1)))))));
                var_29 += ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_19 [i_10 - 1] [i_10 + 1])))));
                var_30 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((2006770754U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [1U] [i_10] [1U]))) / (arr_29 [i_4] [i_10] [8U]))))), (arr_23 [i_4] [i_4] [i_10])));
            }
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max(((+(arr_26 [i_10 + 1] [i_10 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4]))) : (arr_29 [i_4] [i_4] [i_16]))))))))))));
                var_32 = ((unsigned int) min((arr_28 [i_10 - 1] [3U] [i_16] [i_16]), (arr_28 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])));
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                arr_52 [6U] [6U] |= ((/* implicit */unsigned int) ((((int) (unsigned char)209)) >= (((/* implicit */int) (unsigned short)31816))));
                arr_53 [i_4] [i_10] [9U] [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)197))));
                var_33 = ((/* implicit */int) arr_36 [i_4] [i_10]);
            }
            var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_0))) || ((!(((/* implicit */_Bool) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_10 + 1])) && (((/* implicit */_Bool) arr_30 [i_10 - 1])))))) : (((((/* implicit */_Bool) arr_44 [i_10] [1] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4])))))) : (arr_14 [i_10])))));
            arr_54 [i_4] [i_10] = ((/* implicit */unsigned long long int) (~((~(((arr_19 [i_10] [i_10]) ? (-2147483637) : (var_2)))))));
        }
        for (unsigned short i_18 = 1; i_18 < 8; i_18 += 3) 
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (long long int i_20 = 4; i_20 < 8; i_20 += 3) 
                {
                    for (unsigned short i_21 = 1; i_21 < 8; i_21 += 3) 
                    {
                        {
                            arr_66 [i_18] [i_18] [i_21 + 2] [i_18] [i_21 + 3] [i_21 + 2] [i_21] = (~(((((/* implicit */int) (unsigned short)65347)) + (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)108)), ((unsigned short)63488)))))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min((min((min((((/* implicit */long long int) var_8)), (var_6))), (((/* implicit */long long int) (~(var_9)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))))));
                            arr_67 [i_20 - 3] [i_18] [i_18] = ((/* implicit */long long int) min((((arr_19 [i_21 + 2] [i_21 + 2]) ? ((~(arr_50 [i_4] [i_4]))) : ((~(var_13))))), (max((((/* implicit */int) arr_59 [i_18] [(unsigned short)5] [i_19] [i_20])), (arr_50 [8LL] [(unsigned char)6])))));
                            var_36 = ((/* implicit */_Bool) arr_65 [i_4] [i_18 + 3] [i_18 + 3] [i_4] [i_18 + 3] [i_21]);
                            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2098544774U))));
                        }
                    } 
                } 
            } 
            arr_68 [i_18] [(short)10] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_24 [i_18 + 3] [i_18 - 1] [i_18 + 1] [i_18])) ? (((/* implicit */int) arr_24 [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_18])) : (((/* implicit */int) arr_24 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_4])))));
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_13 [i_22])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (max((var_1), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [(unsigned short)6] [i_22])))));
        arr_71 [i_22] [i_22] = var_9;
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)52)), ((unsigned short)18633)))) && (((/* implicit */_Bool) ((unsigned char) arr_27 [i_23] [i_23] [i_23]))))))) : (max((((((/* implicit */_Bool) arr_21 [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))));
        var_40 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_49 [i_23] [i_23] [i_23] [i_23]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (arr_17 [i_23] [i_23]))), (var_8)));
        var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_58 [i_23] [i_23])) : (((/* implicit */int) arr_58 [i_23] [i_23]))))) & ((~(min((((/* implicit */unsigned long long int) (unsigned char)51)), (18446744073709551596ULL)))))));
        var_42 = var_5;
    }
    /* LoopNest 2 */
    for (short i_24 = 0; i_24 < 19; i_24 += 3) 
    {
        for (unsigned short i_25 = 0; i_25 < 19; i_25 += 3) 
        {
            {
                var_43 = ((/* implicit */unsigned char) ((unsigned int) ((int) arr_78 [i_25])));
                /* LoopNest 3 */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        for (unsigned int i_28 = 0; i_28 < 19; i_28 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((var_12) - (15474815745133576586ULL)))))) ? (((/* implicit */int) var_7)) : (arr_82 [i_26] [i_25] [i_26 - 1] [i_27])))) : (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_77 [i_26] [i_25] [i_24])), (arr_80 [i_24])))), (((arr_84 [6U] [(_Bool)1] [(_Bool)1]) & (((/* implicit */unsigned int) var_13)))))))))));
                                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((int) (unsigned char)70)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) var_13))), ((~(var_11)))))) : (max((((/* implicit */unsigned long long int) (+(var_2)))), (var_12)))));
}
