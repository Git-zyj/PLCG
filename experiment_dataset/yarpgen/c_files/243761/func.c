/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243761
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)125))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) & ((~(var_5))))) + (((/* implicit */int) ((2147483647) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (arr_8 [i_1 - 1] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3788))) != (var_14)))) & (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [(unsigned short)14] [i_0 + 1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)61735))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (var_0)))))) : (((unsigned long long int) var_12))));
                arr_16 [(signed char)23] [i_1] = ((/* implicit */unsigned long long int) ((short) ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1 + 3] [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = (signed char)127;
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 19; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((signed char) arr_8 [i_7] [i_5]))), (max((((/* implicit */unsigned long long int) -2147483641)), (var_1))))) | (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 - 1]))) * (16777215ULL))) * (min((14825033705396791159ULL), (((/* implicit */unsigned long long int) (signed char)127))))))));
                            var_24 |= ((/* implicit */unsigned char) ((signed char) min((8192ULL), (arr_25 [i_5] [(unsigned short)4] [i_7 + 3] [i_7]))));
                            var_25 &= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_7] [i_6] [i_5]))) & (arr_25 [i_6 - 2] [16] [i_6 - 3] [i_7 + 3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) arr_21 [i_5] [i_5] [i_5])), ((unsigned char)0))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) % (max((((/* implicit */int) arr_1 [i_5])), (-535760853)))))));
                            arr_28 [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 72022409665839104ULL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned short)3788)))))))), (var_16)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_33 [i_5] [i_6] [i_9] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_14)));
                        arr_34 [i_5] [i_5] [i_9] [i_5] = ((/* implicit */int) (!((((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        arr_39 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned long long int) arr_21 [i_11] [i_6 + 2] [i_5])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3946022513U)))))))) ? (min(((((_Bool)1) ? (((/* implicit */unsigned int) var_18)) : (arr_6 [i_11] [i_9] [i_6]))), (((/* implicit */unsigned int) arr_36 [i_5] [i_6] [i_9] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5]))))))));
                        var_27 = ((/* implicit */signed char) (_Bool)1);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = max((((/* implicit */short) arr_42 [(unsigned char)11] [i_9] [(unsigned short)13] [(unsigned short)13] [i_6 - 3] [i_6])), (((short) min(((short)-17129), (((/* implicit */short) arr_17 [i_9] [i_9]))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_29 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (unsigned short)32035)))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)5] [15LL]))) | (var_16))), (((/* implicit */unsigned long long int) arr_36 [i_5] [i_13] [i_9] [i_13]))))));
                            var_30 += ((/* implicit */short) min((((/* implicit */unsigned long long int) 2771948377U)), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)511)), ((unsigned short)65518)))), (var_14)))));
                            arr_45 [i_9] [i_6] [i_6] [(unsigned char)9] [i_6 - 3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_4)), (var_0))) / (var_0)))), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_17)))));
                            arr_46 [i_5] [i_6 - 3] [i_9] [i_12] [i_9] [i_13] = (!(((((/* implicit */int) (!(arr_10 [i_9])))) >= (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))));
                        }
                        arr_47 [i_5] [2U] [(unsigned char)10] [i_12] &= ((/* implicit */int) arr_35 [i_5] [i_6] [i_9] [i_12]);
                        var_31 = ((/* implicit */_Bool) arr_6 [i_5] [i_12] [i_9]);
                    }
                    for (int i_14 = 1; i_14 < 19; i_14 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_5] [i_5] [i_6 + 1] [(_Bool)1] [i_9])) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_50 [i_5] [i_9] [5U] [i_14] [12] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_12 [i_9] [i_6 - 3] [i_14] [i_14] [i_14 - 1] [i_14]))) % (((/* implicit */int) ((unsigned char) arr_35 [i_6 + 2] [i_14 - 1] [i_14 + 2] [i_14 - 1])))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_22 [i_14 - 1] [i_6 - 3] [i_6 + 2]))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_34 |= ((/* implicit */_Bool) var_4);
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_43 [i_5] [i_6] [i_9] [i_15] [(unsigned char)16]), (arr_43 [i_5] [i_5] [i_9] [i_15] [10U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_5] [i_6] [i_9] [i_15] [(signed char)10])) && (((/* implicit */_Bool) arr_43 [i_5] [i_6] [i_9] [i_15] [14]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_9] [8ULL] [0ULL])) && (((/* implicit */_Bool) 72022409665839104ULL))))))))));
                        var_36 ^= ((/* implicit */signed char) ((arr_35 [i_15] [i_9] [(_Bool)1] [i_5]) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned short)29914))));
                    }
                    var_37 |= ((/* implicit */unsigned long long int) (((~(18374721664043712512ULL))) > (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_9 [i_9] [19ULL] [i_9] [i_9])), (arr_41 [i_6 - 2] [11] [i_9] [i_6 - 2] [i_5] [10]))) * (((/* implicit */unsigned int) -1641998845)))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_38 = max((((((/* implicit */_Bool) arr_48 [i_17] [i_6 - 2] [i_6] [i_6 - 3])) ? (((/* implicit */long long int) arr_11 [(unsigned char)10] [(unsigned char)10] [i_17] [i_6 + 2] [i_5] [(unsigned char)10])) : (arr_51 [i_17] [i_16] [i_6] [i_6 + 2] [i_6] [i_6 - 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)18] [i_6] [i_6] [i_6 - 3] [i_5] [(unsigned short)18]))))));
                        arr_59 [i_5] [i_6 + 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5])) == (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) 2469276812U)) : (4004167340170344996ULL)))));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (arr_51 [i_5] [i_6] [i_17] [i_17] [i_17] [i_6])))) ? (min((arr_32 [i_5] [i_6] [i_16] [i_16] [i_16] [i_17]), (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 72022409665839104ULL)) ? (((/* implicit */int) arr_58 [i_6 - 3] [i_6 + 1] [i_6])) : (((/* implicit */int) (unsigned short)5)))))))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)5)))))));
                    }
                    for (int i_18 = 4; i_18 < 19; i_18 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_65 [i_5] [(_Bool)1] [i_6] [i_5] [(unsigned char)20] [i_6] = ((/* implicit */unsigned short) ((arr_10 [i_18]) ? (((unsigned long long int) (short)-17129)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))));
                            var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_8)))));
                        }
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                        {
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((min((arr_64 [(_Bool)1]), (((/* implicit */unsigned long long int) max(((short)17119), (((/* implicit */short) var_2))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) (short)-17120)))))))))));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_30 [i_5] [i_18] [i_18] [i_20])) - (108)))))), (arr_37 [i_6] [i_18] [i_6] [i_6 - 3] [i_6 + 2])))) ? (min((arr_8 [i_6 - 2] [2LL]), (arr_8 [i_6 + 1] [i_6 + 1]))) : (min((arr_11 [i_18] [i_20 + 1] [i_20 + 1] [i_20] [i_18 - 3] [i_18]), (arr_11 [i_18] [i_20] [i_20] [i_20] [i_18 + 2] [i_18]))))))));
                            var_44 = ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) arr_26 [i_20 + 1] [i_18 - 2] [i_16] [i_6] [i_5] [(unsigned short)16]))), (arr_0 [i_5])))), (((((/* implicit */int) min((((/* implicit */short) arr_58 [i_20] [i_5] [i_5])), (var_13)))) * (((((/* implicit */int) arr_43 [i_18] [20] [i_16] [i_6 - 2] [i_18])) - (((/* implicit */int) (unsigned char)252))))))));
                        }
                        var_45 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    arr_68 [i_5] [i_6] [i_16] = (!((!((!(arr_56 [i_16] [(unsigned char)15] [i_16] [(unsigned short)5] [(unsigned short)5] [i_5]))))));
                }
                arr_69 [i_6] [i_6] [i_5] = ((/* implicit */int) ((max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) & (var_12)))))) > (((((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_5] [i_5] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_6])) ? (var_7) : (((/* implicit */int) (short)0))))) : (min((var_16), (((/* implicit */unsigned long long int) arr_5 [16LL]))))))));
                arr_70 [i_5] = max(((!(((((/* implicit */_Bool) arr_18 [i_6])) && (((/* implicit */_Bool) arr_31 [i_5])))))), (((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_26 [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 1])))));
            }
        } 
    } 
}
