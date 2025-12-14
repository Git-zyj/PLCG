/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198107
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
    var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1149127349) : (((/* implicit */int) (unsigned char)163))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-1149127349) : (-1149127350)))) : (((unsigned int) (_Bool)1))))));
    var_17 = ((/* implicit */_Bool) max((max((3376354080U), ((-(11545153U))))), (((/* implicit */unsigned int) var_9))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */unsigned int) (-2147483647 - 1))) / (1700059587U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (var_14)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) * (max((((2147483647) / (((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)24)) || (((/* implicit */_Bool) (unsigned char)252)))))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_4 [i_1] [i_1 + 2] [i_1]), (arr_4 [i_0] [i_1 - 1] [i_1])))) ^ (((/* implicit */int) min((arr_4 [i_0] [i_1 + 2] [i_1]), (arr_4 [i_0] [i_1 + 1] [i_1]))))));
        }
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_22 = ((((/* implicit */_Bool) min((736818114), (arr_6 [i_2 - 1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_2])) ? (arr_6 [i_2 - 1] [i_2] [i_3]) : (arr_6 [i_2 - 1] [i_2] [i_3]))) : (((arr_6 [i_2 - 1] [i_2] [i_3]) / (2147483647))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1369250280)) ? (((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_0] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_0] [i_2 + 2] [i_2 + 2]))));
                    var_24 |= ((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) (unsigned short)28181))));
                }
                var_25 ^= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1369250281)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)13)))) : (((/* implicit */int) (unsigned short)0))))), ((+((((_Bool)0) ? (3376354078U) : (266936343U))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (2147483623) : (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_3] [i_3] [i_3])))) : (3518579289U))))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((2183276133U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((arr_13 [i_0] [i_2] [i_5]) - (((/* implicit */int) (short)(-32767 - 1)))))))))) / (max((((/* implicit */unsigned long long int) 3233301271U)), (((arr_3 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (493089492)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_5])) / (((/* implicit */int) (unsigned char)8))))) : (max((arr_3 [i_5]), (((/* implicit */unsigned long long int) arr_7 [i_5])))))), (max((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_5])), (arr_3 [i_5]))), (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_2] [i_5] [i_0] [i_0]))))))))))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_29 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) max((arr_0 [i_5]), (((/* implicit */int) arr_14 [i_6] [i_6] [i_6])))))), (0U)));
                    var_30 &= ((((/* implicit */_Bool) ((231578746U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_5] [i_2] [i_2])) != (13061048830460988023ULL)))))))) ? (((1662482756U) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)248))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_5])) & (((/* implicit */int) (unsigned char)151))))))));
                    arr_16 [i_0] [i_0] [i_6] = min((((/* implicit */unsigned int) arr_7 [i_0])), (4294967279U));
                }
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) -393951855)), (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_0] [i_2] [i_2])), (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) min(((unsigned char)64), (arr_14 [i_0] [i_2 + 1] [i_0]))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)248))))) > (((((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62958))) : (((((/* implicit */_Bool) 4294967295U)) ? (-2715190237225536533LL) : (((/* implicit */long long int) 429691726))))))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                var_32 *= ((/* implicit */unsigned int) (unsigned char)0);
                var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) / (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1]))))) ? (max((((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 1])), (2147483647))) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_4 [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_3 [i_10]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)54))))))))));
                        var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_6 [i_0] [i_2] [i_8]) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_2])))) + (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (signed char)-121))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7982968543381763497ULL)) ? ((+(((/* implicit */int) arr_21 [i_9] [i_8] [i_8])))) : (((int) (_Bool)0))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_36 = ((/* implicit */int) (unsigned char)251);
                        arr_33 [i_0] [i_9] [i_8] [i_0] [i_2] = ((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0])));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) (signed char)-117);
                        var_38 *= ((/* implicit */long long int) (+(((((/* implicit */int) arr_8 [(signed char)14])) - (((/* implicit */int) (short)-31562))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned long long int) (+(2147483647)));
                        var_40 = arr_32 [i_2 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_9] [i_9 + 1];
                    }
                    arr_42 [i_0] [i_2] [i_8] [i_9] [i_8] [i_0] = ((/* implicit */signed char) (+(9223372036854775807LL)));
                    arr_43 [i_0] [i_2] = 2147483632;
                }
                for (int i_14 = 3; i_14 < 17; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_15 = 4; i_15 < 17; i_15 += 1) 
                    {
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) max((((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_49 [i_0] [i_15 - 3] [i_8] [i_14] [i_15] [i_15] [i_14 - 1]) : (arr_49 [i_14] [i_15 - 3] [i_8] [i_14] [i_15] [i_2] [i_14 - 1]))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) 4194303))))))))))));
                        var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(unsigned short)2]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) >> (((3081954552U) - (3081954532U))))))));
                        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_2] [i_8] [i_14] [i_15] [i_15]))));
                        var_44 = ((/* implicit */unsigned int) (!(arr_17 [i_0])));
                    }
                    for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (min((((/* implicit */unsigned int) (signed char)-115)), (arr_41 [i_8 + 1] [i_8] [i_8] [i_14] [i_14 + 2]))) : (((((/* implicit */_Bool) arr_41 [i_8 + 1] [i_8] [i_14] [i_14] [i_14 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (arr_41 [i_8 + 1] [i_14] [i_14] [i_14] [i_14 + 2])))));
                        var_46 = ((/* implicit */unsigned char) -4628604932803260306LL);
                        var_47 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)65535)), (min((((((/* implicit */_Bool) (unsigned char)152)) ? (arr_13 [i_0] [i_2] [i_8]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) != (((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_14] [i_14])))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_48 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) 2524606917U)) ? (((/* implicit */int) arr_7 [8U])) : (((/* implicit */int) arr_7 [(_Bool)0])))), (((/* implicit */int) max(((unsigned char)226), (arr_7 [2U]))))));
                        var_49 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_56 [i_0] [i_2] [i_2] [i_2] [i_8] [i_14] [i_17]), (((((/* implicit */_Bool) 2792397352U)) ? (((/* implicit */unsigned int) 1674845147)) : (1543133643U)))))) ? (((((/* implicit */_Bool) ((arr_13 [(unsigned short)8] [i_14] [i_17]) / (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (unsigned char)240)))) : (-545088101)));
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)228);
                        var_50 = ((/* implicit */unsigned short) (short)-14962);
                        var_51 = ((/* implicit */int) min((var_51), (((((/* implicit */_Bool) 2356730066U)) ? (-723622690) : (((/* implicit */int) arr_30 [i_0] [i_14 - 3]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        var_52 += ((/* implicit */int) ((unsigned char) ((unsigned short) (~(((/* implicit */int) arr_1 [i_19]))))));
                        var_53 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) / (509570629U))), (((/* implicit */unsigned int) (signed char)-91)))))));
                        var_54 = ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_8 + 1])) ? (((/* implicit */unsigned int) 31457280)) : (1610612736U)));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        arr_66 [i_0] [i_2] [i_8] [i_0] [i_20] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)233), (((/* implicit */unsigned char) (signed char)-116)))))) : (min((((/* implicit */unsigned long long int) (short)8160)), (arr_46 [i_0] [i_2] [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90)))))) > (max((165262776U), (((/* implicit */unsigned int) arr_62 [i_0] [i_20] [i_20] [i_14] [i_20])))))))));
                        var_55 = ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_2])) | (arr_13 [i_0] [i_2 + 2] [i_8]))) <= (((/* implicit */int) min((((/* implicit */short) (signed char)91)), ((short)-8160))))));
                    }
                    arr_67 [i_0] [i_2] [i_8] [i_14] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_21 = 3; i_21 < 17; i_21 += 2) /* same iter space */
                {
                    var_56 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2] [i_8])) ? (min((((((/* implicit */_Bool) (unsigned short)40203)) ? (((/* implicit */unsigned int) -1040631760)) : (arr_18 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -218637229)) ? (((/* implicit */int) arr_31 [i_0] [i_2] [i_2] [i_8] [i_21])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)6), ((unsigned char)174)))))));
                    var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((((-801510883) + (2147483647))) >> (((-1) + (27))))))));
                }
                arr_71 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)239)))), (((((/* implicit */_Bool) 31112772U)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)38)))))), (((((/* implicit */_Bool) (~(724199287U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_2] [i_8])))) : (((/* implicit */int) (unsigned char)31))))));
            }
        }
        arr_72 [i_0] = ((_Bool) (unsigned char)243);
    }
    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (short)-25779)))))))) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) var_11))));
}
