/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247519
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
    var_10 |= min((((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_4)));
    var_11 -= ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [14LL] [i_1] [i_1] [14LL] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), ((((_Bool)1) ? (981401898509788774LL) : (((/* implicit */long long int) arr_12 [i_3] [i_1] [(unsigned short)11] [i_1] [i_1] [i_0])))))) : (((/* implicit */long long int) arr_10 [(unsigned short)4] [i_1] [i_2] [i_3] [i_1]))));
                            arr_14 [i_3 + 1] [(unsigned char)3] [(unsigned char)3] [(unsigned short)2] [i_1] = ((/* implicit */unsigned short) -1LL);
                        }
                        var_13 = ((/* implicit */short) ((((var_2) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_0)))) - (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            arr_17 [(unsigned char)4] [i_1] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(536836527)))))) || (((/* implicit */_Bool) (((-(6054791021206890676LL))) + (max((5LL), (((/* implicit */long long int) 1955558404)))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_12 [i_0] [i_1] [i_2] [i_5 + 1] [i_2] [i_0 + 1]))) > (max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)183)), (var_8))))))));
                        }
                        arr_18 [(_Bool)1] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-98)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [(signed char)8] [12] [i_3] [2LL])) : (((/* implicit */int) arr_5 [(unsigned short)8])))))), (((/* implicit */int) ((unsigned char) ((signed char) var_2))))));
                    }
                    for (short i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))))))) / (((((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [(signed char)6] [(signed char)6]))))) ^ (((/* implicit */unsigned int) (~(-1))))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))))));
                            var_17 &= ((/* implicit */unsigned long long int) max((arr_10 [(unsigned short)12] [(signed char)6] [i_2] [i_1] [(unsigned short)12]), (min((arr_16 [i_0] [4ULL] [i_6] [i_6] [(unsigned char)16]), (((/* implicit */int) arr_8 [i_0 - 1] [i_1 + 1] [16LL] [i_6 + 3]))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
                        {
                            var_18 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (arr_26 [i_1] [i_8] [i_2] [i_8] [18LL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (8447891854724628945ULL)))))))));
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_1] [(unsigned char)17] [i_1] [i_1] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3905))) - (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))))), (((/* implicit */long long int) var_8))));
                            arr_27 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (arr_16 [i_0] [(unsigned short)13] [(unsigned short)13] [i_2 - 2] [i_1]))))));
                            arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(536836527)))) ? (((/* implicit */int) (short)-21937)) : (((/* implicit */int) (unsigned short)39523))));
                            arr_32 [(unsigned char)10] [i_1] [i_1] [(unsigned short)10] [i_1] [2ULL] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_25 [(unsigned short)2])))));
                            var_20 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)8))))) || (((/* implicit */_Bool) arr_28 [6U] [(unsigned char)6] [i_2 - 3] [i_9])))), (((arr_23 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]) >= (((/* implicit */long long int) var_6))))));
                        }
                        var_21 = ((/* implicit */signed char) ((981401898509788774LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [7LL] [i_2] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_0 + 1] [(unsigned char)3] [i_1])))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        arr_35 [i_0 + 2] [i_1] [i_1] [i_1] [(signed char)7] [(unsigned short)2] = ((/* implicit */short) ((((((var_9) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)203)))) ^ (((/* implicit */int) ((unsigned char) arr_11 [i_0 + 2] [(_Bool)1] [i_2 - 2] [i_1]))))) >> (((max((((/* implicit */long long int) -590123245)), (35184372086784LL))) - (35184372086759LL)))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2 + 1])))))));
                        arr_36 [(short)8] [12] [(unsigned short)0] [i_10 - 2] &= ((/* implicit */long long int) ((var_6) ^ (((/* implicit */int) ((_Bool) (unsigned char)151)))));
                        /* LoopSeq 2 */
                        for (short i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((((var_7) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-8982941938373480280LL) == (((/* implicit */long long int) ((/* implicit */int) arr_37 [(signed char)14] [i_10] [(signed char)14]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-9561))) ^ (arr_20 [(unsigned short)8] [i_10] [i_2 - 1] [i_1] [(unsigned short)8])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [12LL] [i_11 + 1] [12LL])) || (((/* implicit */_Bool) 992U))))) : ((-(((/* implicit */int) min(((unsigned short)25268), (((/* implicit */unsigned short) var_4)))))))))));
                            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-79)) - (((((/* implicit */int) var_4)) / (((int) var_4))))));
                            arr_41 [i_11] [i_11] [i_1] [i_11] [i_11 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)25101)))), (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))), (3118310860U)));
                            arr_42 [i_0] [i_0] [i_1] [i_0] [i_11] = ((/* implicit */_Bool) 485659110);
                        }
                        for (short i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))));
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1102114154)), (arr_23 [(unsigned short)14] [i_10 - 2] [(unsigned short)14])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [14] [i_10 - 3] [i_10])) || (((/* implicit */_Bool) arr_23 [4] [i_10 - 1] [4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(unsigned char)16] [i_10 - 3] [16LL])))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_2))));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((_Bool)1)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) (unsigned short)16487))))), (((arr_26 [i_0] [i_0] [i_0] [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12 - 2] [i_1] [i_2]))) | (807400767U)))))));
                        }
                    }
                    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            var_29 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (-341944748588633325LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)20806)) && (((/* implicit */_Bool) 992U))))) : (((/* implicit */int) var_0)))));
                            var_30 = max((((max((((/* implicit */int) var_9)), (arr_44 [(short)6] [i_1] [i_13] [i_1] [(short)6] [(short)6] [(short)6]))) & (((var_9) ? (((/* implicit */int) arr_50 [i_1])) : (((/* implicit */int) arr_38 [i_0] [i_1 + 1] [i_1] [i_13] [i_14])))))), ((+(((/* implicit */int) (unsigned short)13535)))));
                        }
                        var_31 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [(unsigned char)12] [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (max((max((2143289344U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_0))));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 4; i_16 < 18; i_16 += 3) 
                        {
                            var_33 |= ((/* implicit */unsigned char) (((+(var_6))) % (((((/* implicit */_Bool) ((967U) ^ (((/* implicit */unsigned int) arr_16 [i_0] [14U] [i_2] [i_15 + 2] [(unsigned char)6]))))) ? (((/* implicit */int) arr_52 [(short)18] [(short)18] [(short)18] [(_Bool)1] [i_0] [i_1 - 1] [i_2])) : ((+(((/* implicit */int) arr_13 [i_0] [i_0] [(_Bool)1] [i_15] [i_16]))))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_15]))) >= (((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_53 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [(unsigned short)10]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                            arr_57 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (short)31194);
                        }
                        for (long long int i_17 = 3; i_17 < 18; i_17 += 3) 
                        {
                            var_35 -= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */int) var_2)) / (((/* implicit */int) var_3)))) != (((/* implicit */int) ((signed char) (unsigned char)128))))))));
                            var_36 = ((/* implicit */signed char) var_1);
                            var_37 += (+(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (1176656432U))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2048))) - (-533959796294620153LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (arr_49 [i_0] [i_1 - 1] [i_2] [i_0] [i_1]))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_18 = 2; i_18 < 17; i_18 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 1; i_19 < 18; i_19 += 1) 
                        {
                            var_39 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_63 [i_18 - 1] [i_1] [i_2 + 1] [12] [i_1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((+(1273410860330548754LL)))))));
                            arr_66 [i_2] [i_1] [i_2 - 2] [i_18] [i_19] = ((((/* implicit */_Bool) min(((~(4503591037435904ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_3))))))) || (((((/* implicit */_Bool) -1273410860330548766LL)) || (((/* implicit */_Bool) 5921752994385204490LL)))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (((((((/* implicit */_Bool) var_6)) ? (-533959796294620181LL) : (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) : (arr_19 [i_0] [i_1] [i_1] [i_0] [i_1]))))))));
                        }
                        var_41 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)249));
                    }
                    var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_63 [8] [(unsigned short)2] [(_Bool)1] [i_1] [i_1] [i_1]), (((/* implicit */int) var_9)))), (((/* implicit */int) arr_5 [0ULL]))))) || (var_2)));
                }
            } 
        } 
    } 
}
