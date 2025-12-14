/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52534
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
    var_17 *= ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) (signed char)63);
            var_19 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((362611996) << (((1510448210) - (1510448208)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29248)) ? (arr_4 [i_0 + 1]) : (arr_4 [i_1]))))))), (var_4)));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) > (((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */long long int) ((max((arr_8 [i_0 + 2] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_22 = ((/* implicit */unsigned short) ((((arr_4 [i_0 + 1]) - (arr_4 [i_0 + 1]))) - (((((/* implicit */int) (_Bool)1)) + (arr_4 [i_0 + 2])))));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) arr_6 [i_0] [i_0]);
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0])) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (arr_5 [i_0] [i_0 + 2] [11]))))));
            var_25 = arr_0 [i_0];
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_6 [i_0 + 1] [i_0])))) | (((/* implicit */int) arr_6 [i_0 - 1] [i_0]))));
                var_27 = ((/* implicit */short) ((max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_5])))))) * (((/* implicit */int) arr_7 [i_5]))));
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) arr_12 [i_0 + 1])) ? (arr_12 [i_0 + 1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                var_29 = ((/* implicit */unsigned long long int) (~(var_1)));
                var_30 = (short)-4702;
            }
            for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 4) 
            {
                var_31 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 1])) - (((/* implicit */int) arr_15 [i_6 - 1] [i_4] [i_6 - 4])))));
                var_32 = ((/* implicit */signed char) min((((unsigned long long int) arr_12 [i_0 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -551148530)) ^ (682579558613262239ULL)))) ? (((/* implicit */int) arr_16 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_4] [i_4] [i_4] [i_9 + 2])) == (((/* implicit */int) arr_7 [i_0]))))) * (((/* implicit */int) arr_25 [i_0 - 1] [i_4] [i_9 - 1] [i_7] [i_7]))))));
                            var_34 = ((/* implicit */unsigned int) 551148538);
                            var_35 = ((/* implicit */int) max(((short)6510), (((/* implicit */short) var_12))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) <= (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 2]))));
                            var_37 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)17489)) ? (arr_8 [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_8 [i_10] [i_12])))));
                            var_38 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)44993)))));
                            var_39 = 1073741792;
                        }
                    } 
                } 
            } 
        }
        var_40 = var_6;
    }
    for (short i_13 = 1; i_13 < 19; i_13 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_14 = 3; i_14 < 19; i_14 += 3) 
        {
            for (int i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 1; i_17 < 20; i_17 += 2) 
                        {
                            {
                                var_41 = ((((((/* implicit */_Bool) arr_37 [i_13 + 2])) ? (((/* implicit */int) arr_37 [i_13 + 2])) : (((/* implicit */int) arr_29 [i_13] [i_13])))) / (((((/* implicit */int) (unsigned char)91)) * (((/* implicit */int) arr_29 [i_13 + 2] [i_13])))));
                                var_42 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (signed char)-69)) - (((/* implicit */int) ((unsigned char) var_12))))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_13] [i_14 + 1] [i_15])) <= (arr_24 [i_13 - 1] [i_13 - 1]))) ? (((/* implicit */int) ((-551148538) > (((/* implicit */int) (short)-25169))))) : ((-(((/* implicit */int) arr_5 [i_13] [i_13] [i_13]))))));
                    var_44 *= ((/* implicit */unsigned short) arr_46 [i_13 + 2] [i_15] [18] [i_15] [i_14] [i_13 + 1] [i_13]);
                }
            } 
        } 
        var_45 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))))), (((((/* implicit */int) arr_20 [i_13 + 1] [i_13] [i_13] [i_13])) - (((/* implicit */int) arr_29 [i_13 + 2] [i_13]))))));
    }
    /* vectorizable */
    for (short i_18 = 1; i_18 < 19; i_18 += 2) /* same iter space */
    {
        var_46 = ((/* implicit */int) var_12);
        var_47 = ((arr_12 [i_18 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [12] [i_18 + 2] [12]))));
    }
    for (short i_19 = 1; i_19 < 19; i_19 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 1; i_22 < 17; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 4; i_23 < 20; i_23 += 2) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44531)) / (-523702472)));
                                var_49 = ((/* implicit */signed char) ((int) var_0));
                                var_50 = ((/* implicit */unsigned long long int) ((((arr_60 [i_23] [i_22] [i_23 - 1] [i_21] [i_22] [i_21]) >= (arr_60 [i_23 - 2] [i_22] [i_23 - 1] [i_22] [i_22] [i_21]))) && (((/* implicit */_Bool) var_6))));
                                var_51 = var_12;
                                var_52 = (~(((arr_24 [i_23 + 1] [i_21]) ^ (arr_24 [i_23 - 3] [i_20]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 1; i_24 < 18; i_24 += 4) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 21; i_25 += 4) 
                        {
                            {
                                var_53 = ((/* implicit */unsigned long long int) arr_29 [i_20] [i_25]);
                                var_54 = ((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_19 + 1] [i_25]))))) && (((((((/* implicit */_Bool) arr_35 [i_25] [i_20])) && (((/* implicit */_Bool) (unsigned char)165)))) && ((!(((/* implicit */_Bool) arr_18 [i_20] [i_20] [i_20] [i_20]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_55 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) var_16))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_26 = 1; i_26 < 15; i_26 += 4) 
    {
        var_56 = ((((/* implicit */_Bool) (-(-551148544)))) ? (min((((/* implicit */int) arr_65 [i_26])), (var_6))) : (((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_26 - 1])))))));
        var_57 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) / (((4423328284191445898LL) - (((/* implicit */long long int) 1073741792))))));
        /* LoopNest 3 */
        for (unsigned char i_27 = 0; i_27 < 17; i_27 += 2) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                for (signed char i_29 = 0; i_29 < 17; i_29 += 2) 
                {
                    {
                        var_58 = ((/* implicit */int) (signed char)107);
                        var_59 = ((/* implicit */unsigned short) min(((~(min((7529005381621546748ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_38 [i_26])) ? (((/* implicit */int) arr_5 [i_26] [i_27] [i_28])) : (((/* implicit */int) (_Bool)1)))) | (max((var_6), (((/* implicit */int) arr_34 [i_26 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_30 = 0; i_30 < 14; i_30 += 2) /* same iter space */
    {
        var_60 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_10)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_48 [i_30]))))));
        var_61 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-89))));
    }
    for (int i_31 = 0; i_31 < 14; i_31 += 2) /* same iter space */
    {
        var_62 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) -4423328284191445899LL)), (min((((/* implicit */unsigned long long int) var_11)), (1023ULL)))))));
        var_63 |= ((/* implicit */signed char) (-2147483647 - 1));
    }
}
