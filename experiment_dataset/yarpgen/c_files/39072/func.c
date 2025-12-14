/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39072
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
    var_16 = ((/* implicit */unsigned long long int) -8713533030205371883LL);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (14965099100551847454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_17 = ((/* implicit */signed char) min((min((min((8713533030205371890LL), (((/* implicit */long long int) (unsigned char)8)))), (((/* implicit */long long int) (unsigned char)107)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0]))))), (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) 2333453184U))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 18446744073709551607ULL)))));
                            var_18 -= ((/* implicit */unsigned long long int) arr_0 [i_4]);
                        }
                        for (int i_5 = 4; i_5 < 20; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_3] [10U] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_8))))) ? (2333453184U) : (((/* implicit */unsigned int) -207222101)))) : (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_5]))));
                            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (min((arr_9 [i_0] [i_1] [i_2] [i_3]), (arr_9 [(unsigned char)6] [i_0] [(unsigned char)6] [(signed char)5]))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8191ULL)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) == (min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_5)))))))));
                            var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1 + 1] [i_5 - 3] [i_1 + 1] [i_1 + 1])) - (14965099100551847463ULL))) + (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)244))));
                            var_21 = min((((/* implicit */unsigned long long int) arr_10 [i_2] [(signed char)21] [i_2] [i_2] [i_0])), (min((((/* implicit */unsigned long long int) arr_8 [i_1 - 1])), (var_13))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_1 + 1] [(short)3] [i_1 - 1] [i_1 - 1] [i_2]), (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 1] [i_3]))))) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) > (min((var_2), (((/* implicit */unsigned long long int) (unsigned short)8257))))))))))));
                            arr_22 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1])) : (arr_20 [i_0] [i_0] [i_0]))) <= (((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])) - (18446744073709551615ULL))))))) : (((((/* implicit */_Bool) (short)15)) ? (((((/* implicit */_Bool) arr_21 [i_2])) ? (6801524951188931521LL) : (var_11))) : (((/* implicit */long long int) min((-1708104925), (((/* implicit */int) (signed char)99)))))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_2] [i_2] [i_3] [i_7] [i_2] = ((/* implicit */int) var_13);
                            arr_27 [i_0] [i_7] [i_3] [i_1] [11] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((8759141678566141900LL), (((/* implicit */long long int) arr_11 [(_Bool)1] [i_3] [i_2] [i_1] [i_0])))), (32767LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) min((235694751), (((/* implicit */int) (unsigned char)141))))) != (((((/* implicit */_Bool) var_8)) ? (2344732230U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19744)))))))) : (((/* implicit */int) arr_5 [i_0]))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_1 + 1] [i_3] [i_7])) <= (2350352033U))))));
                            var_23 = ((/* implicit */unsigned int) min((((13265477395526316709ULL) >> (((15473564264212314801ULL) - (15473564264212314769ULL))))), (((/* implicit */unsigned long long int) 289291558))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            arr_33 [i_0] [(short)13] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_8]) : (1241316798))) == (((/* implicit */int) var_3))));
                            arr_34 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_29 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])) : (-8565905760058857315LL)));
                            arr_35 [i_0] [i_0] [i_2] [i_3] [11LL] = ((/* implicit */unsigned long long int) ((63) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 1] [i_3]))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((289291558) / (arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]))))));
                        }
                        for (unsigned char i_9 = 4; i_9 < 19; i_9 += 1) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_0] [17ULL] [i_2] [i_3] [i_9])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) | (18446744073709551607ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)157))))) : (arr_2 [i_0] [i_3]))) : (min((((/* implicit */long long int) var_1)), (arr_2 [i_0] [i_1])))));
                            arr_40 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((min((var_11), (((/* implicit */long long int) -266484877)))) != (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)134), (arr_24 [i_0] [13] [i_1] [i_2] [i_0] [i_9])))))))) : (((/* implicit */int) (unsigned char)74))));
                            var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) arr_8 [i_0])), (arr_6 [i_3] [i_2] [i_1] [i_0]))), (min((((/* implicit */unsigned short) (unsigned char)10)), (arr_15 [i_0] [i_1 - 1] [i_0] [i_3])))));
                            arr_41 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_9 - 1] [i_3] [(_Bool)1] [(unsigned char)7] [i_0]);
                            var_26 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_3] [i_9 + 1]);
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            arr_44 [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_0] = min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_6)), (arr_6 [i_0] [i_1] [i_3] [15])))), (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_1 - 1]))))));
                            arr_45 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = ((12LL) | (((/* implicit */long long int) ((/* implicit */int) (short)127))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_8 [i_3]))));
                        arr_46 [i_3] [i_0] [i_0] [(short)9] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_37 [18U] [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_2] [i_3])))), (((/* implicit */int) min(((short)136), (((/* implicit */short) arr_37 [i_0] [i_1 + 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1] [i_3])))))));
                        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) -1763508893)) && (((/* implicit */_Bool) 7593590880117149427LL))))), (-542024906)))) + (min((((((/* implicit */_Bool) var_2)) ? (7940212452750460164LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6302941432764282654ULL)) && (((/* implicit */_Bool) var_3)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                    {
                        var_28 = ((((/* implicit */int) (unsigned short)32219)) & (-266484877));
                        arr_51 [i_0] [i_0] [i_2] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (-1337402863) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)250)) : (arr_11 [i_0] [5LL] [i_2] [i_11] [i_1 - 1])))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        arr_54 [i_12] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)54))));
                        var_29 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) arr_0 [i_2])) <= (-1854916481858186415LL))));
                    }
                }
            } 
        } 
    } 
}
