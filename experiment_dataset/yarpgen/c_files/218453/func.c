/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218453
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
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)111)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) var_0)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [(_Bool)1])), ((unsigned short)62984))))))) : (min((min((((/* implicit */unsigned int) var_6)), (var_3))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_6 [i_1] [i_0])), (arr_1 [i_0]))))))));
                arr_7 [i_0] [(unsigned short)0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)34)), (arr_3 [i_1])))) | (min((arr_2 [i_1]), (((/* implicit */long long int) arr_4 [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-24618)), ((unsigned short)26370)))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (var_4)))) ? (((/* implicit */int) ((arr_6 [i_3] [i_0]) || (((/* implicit */_Bool) arr_9 [6ULL] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (_Bool)1))));
                        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [i_0] [i_3]))));
                        var_18 = ((/* implicit */_Bool) arr_3 [i_3]);
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) * ((-(var_3)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned char) var_10));
                            arr_18 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2550)) & (((/* implicit */int) (unsigned short)14))));
                            var_21 = ((/* implicit */_Bool) arr_3 [i_0]);
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 1196336447U)), (((arr_8 [i_0] [i_2]) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) != (arr_8 [i_0] [i_1]))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3251155121540077022ULL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)65523))));
                        var_23 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_6] [i_6] [i_6])) < (((/* implicit */int) ((signed char) (unsigned char)17)))));
                        arr_24 [i_6] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1]))))))) ? (min((min((arr_8 [i_5] [i_0]), (2053139691436819910ULL))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)231)))) : (((((/* implicit */int) (signed char)-64)) - (((/* implicit */int) (unsigned char)51)))))))));
                        arr_25 [i_0] [i_0] [i_6] [(short)1] = ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned int) (unsigned short)62164)), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28267)) ? (var_4) : (((/* implicit */int) var_6))))))) ^ (((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_23 [6U] [i_1] [i_5] [i_1])))) ^ (max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_25 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_1] [i_5])) : (((/* implicit */int) arr_0 [i_1] [i_7])))) | (((/* implicit */int) (unsigned short)65521))));
                        /* LoopSeq 2 */
                        for (int i_8 = 3; i_8 < 9; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((var_14) || (((/* implicit */_Bool) arr_28 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 + 2] [i_8])))))));
                            var_27 = ((/* implicit */unsigned char) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */short) ((unsigned long long int) (signed char)-69));
                            arr_34 [i_0] [i_1] [i_5] [i_1] [i_1] [4ULL] |= var_9;
                            arr_35 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_0] [i_7] [i_5] [i_5] [4U]))));
                            arr_36 [i_7] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            var_29 = ((/* implicit */unsigned short) ((unsigned char) 3596872834908165673ULL));
                        }
                        arr_37 [i_7] [i_1] [i_7] [i_7] [i_1] [i_0] = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_14 [i_0] [i_7] [i_5] [i_7] [(short)8])));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (1518158012U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9] [i_5] [i_1] [i_7])))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((-8989090810300745129LL) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), ((unsigned char)17)))))))))))));
                        var_32 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_12)) + (2147483647))) >> ((((~(((/* implicit */int) var_5)))) + (33))))) >> (((/* implicit */int) (unsigned short)6))));
                        arr_40 [i_10] [2U] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                        arr_41 [i_0] = var_14;
                        arr_42 [i_0] = ((/* implicit */unsigned char) (short)-24863);
                    }
                    arr_43 [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)15)))), (((/* implicit */int) (unsigned short)11))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */int) arr_32 [i_0] [i_12] [i_11] [(short)10] [i_12]);
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_12])))) : (2776809284U))))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_50 [i_0] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13] [i_1] [i_11] [i_13])) ? (var_4) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) ((_Bool) arr_21 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_33 [i_0] [i_11] [i_11])))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)24545)))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)41)) <= (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_13] [i_1]))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1]))))) * (((int) arr_49 [1U] [i_13] [i_11] [i_1] [i_0] [i_0]))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)60)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_14) && (arr_6 [i_0] [i_1]))))))) || (((/* implicit */_Bool) 9858880718891699636ULL))));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_14] [i_0])))) | (var_3)))));
                        arr_53 [i_0] [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned short)65527))))) ? (((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)58029)) : (1399913765)))))), (((/* implicit */unsigned int) (!(min((var_5), (var_2))))))));
                    }
                    var_38 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)151))));
                    arr_54 [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)-116);
                    arr_55 [(_Bool)1] = (~(((/* implicit */int) (unsigned short)1043)));
                }
            }
        } 
    } 
}
