/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193395
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (2309186945087764479LL)));
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) (unsigned char)11);
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), ((-((~(((/* implicit */int) arr_4 [i_1]))))))));
        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56701)))), (min((((/* implicit */unsigned long long int) var_10)), (0ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_3 [i_1]), (((/* implicit */unsigned char) (signed char)2))))), (max(((unsigned short)38709), (((/* implicit */unsigned short) arr_2 [i_1] [i_1])))))))) : (min((max((((/* implicit */unsigned int) (signed char)-3)), (var_4))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)186)), ((short)-32746)))) : (((/* implicit */int) max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)1))))))) : (var_10)));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_7), (var_7)))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (short)14196)))) : (((/* implicit */unsigned long long int) arr_8 [i_2])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-83)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_14 [i_3] [(short)2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1292967325U) ^ (1376062171U)))) ? (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (short)-27097)))) : (((/* implicit */unsigned long long int) ((((((int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
        var_16 *= ((/* implicit */unsigned int) arr_9 [i_3] [i_3]);
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_19 [(signed char)7] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)20)) ? (72057589742960640LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [(_Bool)1] [(signed char)8]))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_3] [(short)1] [i_4])))))));
            /* LoopSeq 3 */
            for (long long int i_5 = 3; i_5 < 8; i_5 += 4) 
            {
                /* LoopSeq 4 */
                for (int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    arr_25 [i_6 + 1] [i_5] [i_3] [6LL] [i_3] = ((/* implicit */unsigned char) var_6);
                    var_17 = ((/* implicit */unsigned char) (short)-7080);
                }
                for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    var_18 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_16 [i_5 + 2] [i_7 + 1])), (6235080532717028594ULL)))));
                    var_19 *= ((/* implicit */short) arr_18 [i_3]);
                }
                for (long long int i_8 = 2; i_8 < 6; i_8 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) (signed char)94);
                    var_21 = ((/* implicit */_Bool) min(((~(arr_16 [i_3] [(unsigned short)3]))), ((-(((((/* implicit */_Bool) (unsigned char)205)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))))));
                }
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                {
                    arr_35 [i_4] &= ((/* implicit */short) (!(var_8)));
                    arr_36 [i_3] [i_4] [i_5] [i_9 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_24 [i_3] [i_5]), (arr_24 [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) max((3095681725373553184LL), (min((9223372036854775807LL), (9223372036854775807LL)))))) : (min((((((/* implicit */_Bool) (unsigned char)170)) ? (arr_28 [i_3] [i_3] [(unsigned short)1] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9566))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_3] [i_4] [(short)3] [(short)3])))))))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)20))));
                    arr_37 [i_4] [i_5 + 1] [i_4] &= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4])) | (arr_34 [i_3] [i_4] [i_5 + 2] [i_4])))));
                }
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (short i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)8))))) / (arr_21 [i_3] [i_4] [i_11 + 1] [i_11 + 1])))), (min((((/* implicit */long long int) min((664561812), (958547475)))), (max((((/* implicit */long long int) (signed char)31)), (25769803776LL)))))));
                            arr_44 [i_3] [i_4] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])), (var_5)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)237)), (8237220257595520092ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) -5)) - (7928948137652022489LL))), (((/* implicit */long long int) min(((unsigned short)51719), (((/* implicit */unsigned short) (short)-10992))))))))));
                            var_24 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)35))))) ^ (((((/* implicit */_Bool) 9852984427541065473ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38709))) : (5794832447915043130ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) * (((/* implicit */int) (short)10989))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (-25769803773LL)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_12 = 3; i_12 < 6; i_12 += 3) 
            {
                arr_48 [i_3] [i_3] [i_4] = var_5;
                var_25 = ((((/* implicit */int) arr_9 [i_12 + 3] [i_12])) % (var_10));
                arr_49 [i_3] [i_3] [i_3] [i_12] = ((/* implicit */unsigned short) (+(arr_34 [i_12 + 2] [i_12] [i_12] [i_3])));
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    arr_53 [i_4] [i_3] [8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) | (-9223372036854775807LL)));
                    var_26 = ((/* implicit */signed char) 9223372036854775807LL);
                }
                arr_54 [i_3] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (unsigned short)9617))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                arr_57 [i_3] [i_4] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)11009))));
                arr_58 [i_3] = ((/* implicit */_Bool) var_2);
                var_27 += arr_33 [i_3] [i_4] [i_4];
            }
            var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) == ((~(var_6))))))) | (arr_23 [i_4] [i_4] [i_4] [i_4] [i_3] [i_3])));
        }
        var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6584822161701423013ULL)))));
        var_30 = max((min((arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), (arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]));
    }
    var_31 += (-(((/* implicit */int) (short)32767)));
    var_32 |= (((~(((-2148117691973856785LL) & (((/* implicit */long long int) ((/* implicit */int) (short)11009))))))) / (((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_11))))) - (-4349924477895399744LL))));
}
