/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40461
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), (min((max((var_1), (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */int) max((-7560411438036217893LL), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) var_8)) ? (max((((var_3) & (((/* implicit */int) var_11)))), (min((var_2), (((/* implicit */int) (short)-20300)))))) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_5)))));
                        var_16 = ((/* implicit */long long int) (unsigned char)25);
                    }
                    for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) -7306630199348423458LL))));
                        var_18 *= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [20]);
                        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_4 - 1] [i_2] [i_0]), (arr_6 [i_0] [i_4 - 1] [i_2] [i_0]))))) - (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4 + 1] [i_2] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((unsigned short) arr_4 [i_5] [i_0] [i_0])))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((int) -1055848259)) + (2147483647))) >> (((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)28615))))) - (28597)))))) ? (((/* implicit */int) ((arr_3 [12]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((int) ((((/* implicit */unsigned int) var_3)) / (var_6)))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_4))) * (((((/* implicit */_Bool) (short)28615)) ? (((/* implicit */long long int) var_1)) : (var_4))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) (short)-20289)) : (((/* implicit */int) (short)1037)))), (((/* implicit */int) (unsigned short)30613))))))))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) max(((_Bool)0), ((_Bool)1)));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) var_3)) / (var_4))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-8281)))))));
                        var_25 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (short)4336))))) : (min((((/* implicit */int) (_Bool)1)), (4095))))));
                        var_26 = ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -32768)), (var_10)))), (34359738367ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((7306630199348423457LL) != (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_6])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        var_27 = (i_0 % 2 == 0) ? (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)-14)), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) > (((((-7560411438036217893LL) + (9223372036854775807LL))) << (((arr_3 [i_0]) - (3775986259852952520LL))))))))))) : (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)-14)), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) > (((((-7560411438036217893LL) + (9223372036854775807LL))) << (((((arr_3 [i_0]) - (3775986259852952520LL))) - (856528263686273397LL)))))))))));
                        var_28 = ((/* implicit */unsigned char) min(((_Bool)1), (((((/* implicit */int) (!(((/* implicit */_Bool) 8106372825156100728ULL))))) != (min((var_1), (((/* implicit */int) (short)-10936))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_5);
                            var_29 = ((/* implicit */int) var_7);
                            arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), ((unsigned short)35132)))) ? (((((/* implicit */int) arr_11 [i_1] [i_7])) - (((/* implicit */int) arr_11 [i_0] [i_1])))) : (arr_9 [i_2] [i_7])));
                            arr_26 [i_1] [i_0] [i_8] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_2] [i_8])) ^ (2819769953U))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned int) ((min((min((arr_0 [i_0] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) var_4)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_1] [i_0] [i_0] [i_0])))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_10))));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37616)) ? (max((((/* implicit */unsigned long long int) arr_17 [i_0])), (2251799813685247ULL))) : (((/* implicit */unsigned long long int) ((((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -301427631)) || (((/* implicit */_Bool) (signed char)-106)))))) : (var_4))))));
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) -13);
                                arr_32 [i_0] [i_0] = ((_Bool) (+(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    var_34 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [2])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))) : (var_10)));
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_11 + 2] [i_11] [i_11 + 3] [i_11 + 3] [i_11 - 1] [i_11])) % (((/* implicit */int) arr_22 [i_1] [i_11 - 3] [i_11] [i_11 - 1] [i_11 + 1] [i_11] [i_11]))));
                    /* LoopSeq 4 */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((int) arr_18 [i_0] [i_11 - 4] [i_11] [i_1] [i_12] [i_12]));
                        var_37 &= ((arr_14 [i_11 - 3] [(short)16] [i_11 - 4] [i_11 + 1] [i_11]) / (arr_21 [i_11 - 3] [i_11 + 1] [i_11 - 4] [i_11 + 1] [i_11]));
                        var_38 = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned short i_13 = 4; i_13 < 20; i_13 += 4) 
                    {
                        var_39 ^= ((/* implicit */unsigned short) ((((((var_10) - (7560411438036217892LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) (short)11174))) - (11135)))));
                        var_40 ^= ((/* implicit */_Bool) 10LL);
                        var_41 = ((/* implicit */unsigned char) ((short) (_Bool)0));
                        var_42 = ((/* implicit */long long int) (-(((int) 1341227009))));
                    }
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_43 *= ((/* implicit */long long int) ((-301427627) >= (12)));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? (((16323303340905860143ULL) / (((/* implicit */unsigned long long int) arr_14 [i_11] [i_0] [i_11] [i_14] [i_1])))) : (((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */int) var_0)))))));
                        var_45 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_11] [i_14])) ? (((/* implicit */int) var_5)) : (-5)))) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned short)20])) : (((((/* implicit */unsigned long long int) var_10)) - (16870045416524411651ULL)))));
                        var_46 &= ((/* implicit */_Bool) 157951569);
                    }
                    for (int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_47 = ((unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) arr_39 [i_15] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-20))));
                        var_48 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_45 [i_1] [i_1] [i_11] [i_15])) % (((/* implicit */int) var_9)))));
                    }
                    var_49 = ((/* implicit */signed char) ((int) (short)26912));
                }
                var_50 = (+(((min((var_4), (((/* implicit */long long int) 0U)))) | (((/* implicit */long long int) arr_41 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1])))));
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((4294967281U), (((/* implicit */unsigned int) (signed char)-105)))) : (((/* implicit */unsigned int) ((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) - (((/* implicit */int) max(((unsigned char)29), (((/* implicit */unsigned char) (signed char)31))))))))));
            }
        } 
    } 
    var_52 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (signed char)-91)) ? (1576698657185139945ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))) << (((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)12288)))))) - (53228)))));
    var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21336))) : (3970585871U)))), (min((((/* implicit */long long int) var_3)), (var_10)))))) ? (var_2) : (((/* implicit */int) (_Bool)1))));
}
