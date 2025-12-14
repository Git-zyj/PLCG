/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/370
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_12)))) ? (((((((/* implicit */_Bool) 486624835316728553ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) << ((((~(((/* implicit */int) var_18)))) + (48))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_21 &= ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) -3434360786154366326LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_18)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) 3434360786154366325LL)) ? (((/* implicit */unsigned long long int) 9223372036854775781LL)) : (17960119238392823062ULL))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 3434360786154366325LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (9393622864683833403ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((var_1) + (-3434360786154366326LL)));
                            var_24 -= ((/* implicit */int) ((short) arr_12 [i_4] [i_4 - 1] [(signed char)7] [i_4] [i_4 - 3]));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_25 += ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_2 [i_0 + 1]));
                            var_26 += ((/* implicit */signed char) (unsigned short)61718);
                        }
                        var_27 |= ((/* implicit */unsigned short) 3434360786154366316LL);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_2))))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        var_29 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 9393622864683833379ULL))))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) var_18);
                        var_31 = ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) var_14)), (var_12))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (short)-21077))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0 - 1] [i_2] [i_9]))) ? (arr_23 [i_0] [i_0 - 1] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_33 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_18)) % (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)64098)) ? (((/* implicit */long long int) -231797640)) : (-3434360786154366326LL)))))) % ((~(max((((/* implicit */unsigned long long int) (unsigned short)1437)), (9053121209025718194ULL)))))));
                            var_34 ^= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) -9223372036854775772LL)), (17960119238392823092ULL))), (((max((arr_24 [(_Bool)0] [(_Bool)0] [i_2]), (((/* implicit */unsigned long long int) -5605457422380138442LL)))) | (((/* implicit */unsigned long long int) min((-3434360786154366326LL), (((/* implicit */long long int) (unsigned short)65535)))))))));
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 2) 
                        {
                            var_35 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) != (9393622864683833415ULL)))), ((+(-5605457422380138442LL)))));
                            var_36 -= ((((/* implicit */_Bool) 1834282800175317569ULL)) ? (((/* implicit */int) (signed char)-5)) : (-1757619839));
                        }
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [i_8 + 1])) << (((((/* implicit */int) (unsigned short)65534)) - (65529)))))) ? ((~(9393622864683833412ULL))) : ((~(var_13)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            var_38 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775783LL)))));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (12846287837958693681ULL)));
                        }
                        var_40 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1)), (4178595888324910151ULL)))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_18)), (var_19))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            var_41 += ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)1448))))));
                            var_42 = ((unsigned int) ((arr_0 [i_0 + 1]) - (9393622864683833422ULL)));
                            var_43 = ((/* implicit */_Bool) min(((short)-1), (max((((/* implicit */short) var_14)), ((short)6757)))));
                            var_44 = max((((/* implicit */unsigned short) ((unsigned char) (short)0))), (arr_6 [i_0]));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                        {
                            var_45 = ((/* implicit */signed char) ((unsigned short) var_18));
                            var_46 = ((/* implicit */unsigned int) (+(var_12)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)1455)) : (((/* implicit */int) arr_32 [i_0 - 1] [i_0] [(signed char)0] [i_0])))) == (((((/* implicit */int) var_18)) + (((/* implicit */int) (unsigned short)64068)))))))) * (((min((((/* implicit */unsigned long long int) var_16)), (34359214080ULL))) >> ((+(((/* implicit */int) (short)10))))))));
                            var_48 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */unsigned long long int) min((((long long int) (short)10)), (((/* implicit */long long int) (short)0))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                        {
                            var_49 &= ((/* implicit */short) max((((arr_7 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (unsigned char)255)))))))), (((/* implicit */long long int) -1535062249))));
                            var_50 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35963))) != (17570134131142752888ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13221643933042591358ULL))))) : (((((/* implicit */int) var_2)) - (((((/* implicit */int) (short)-15)) + (((/* implicit */int) (unsigned short)63805))))))));
                        }
                    }
                }
                var_51 ^= max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), ((+(((((/* implicit */_Bool) var_19)) ? (arr_25 [i_0] [3ULL] [i_0] [i_1] [i_0] [i_0]) : (17960119238392823073ULL))))));
            }
        } 
    } 
}
