/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249130
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)26509)) ? (-7397863350651143980LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) : (((/* implicit */long long int) (+(0U))))))));
                var_17 = ((/* implicit */short) ((unsigned long long int) (signed char)(-127 - 1)));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-(max((((/* implicit */unsigned long long int) 0U)), (var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) 4294967294U)))) ? (((/* implicit */int) arr_1 [i_0] [5U])) : (var_2)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26536))))) : (arr_2 [i_2 + 1] [i_2 + 1])))));
                    var_20 = ((/* implicit */long long int) 4294967293U);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_12 [(signed char)2] [i_0] [(signed char)2] = ((/* implicit */short) var_4);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 16789220313891807799ULL);
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [(short)0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (9223372036854775780LL)))) ? (-387902717) : (((/* implicit */int) (signed char)-127))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                arr_18 [i_4] [(signed char)7] [(unsigned short)9] = ((/* implicit */unsigned char) arr_17 [i_5] [i_5 + 1] [i_5 + 1]);
                arr_19 [8] [i_5] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_5 + 2] [8LL])) : (((/* implicit */int) (_Bool)0))))) * (min((12822826601991780936ULL), (((/* implicit */unsigned long long int) (short)14670))))));
                arr_20 [i_5] [i_5 + 2] [i_5] = ((/* implicit */long long int) 4066488447U);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 += ((/* implicit */int) (_Bool)0);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1470)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39007))) : (9223372036854775807LL)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((10232700194771291016ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    arr_29 [(_Bool)1] [14ULL] [i_8] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 302960913U)))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_26 [4] [4] [i_7]))))));
                    var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)101))))) ? (8214043878938260594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_27 [16] [i_7] [i_7]))))))));
                    arr_30 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) 10232700194771291016ULL))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) 1477007758);
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_10 = 3; i_10 < 18; i_10 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) arr_23 [i_6] [i_9] [(short)17]);
                var_27 = 268435328U;
                /* LoopSeq 4 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9222246136947933184ULL)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_5)))) ^ (((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) arr_22 [3ULL])) - (1)))))) ? (((/* implicit */int) arr_26 [i_10] [i_11] [4])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    var_29 |= ((/* implicit */short) arr_27 [(unsigned short)13] [i_11] [(short)2]);
                    arr_40 [i_6] [i_6] [i_9] [i_11] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-14671)))))));
                    var_30 = ((/* implicit */short) min(((-(min((((/* implicit */unsigned long long int) arr_35 [i_6] [i_10] [i_10])), (0ULL))))), (((/* implicit */unsigned long long int) 123959125U))));
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    arr_44 [0LL] [0LL] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_43 [i_6 + 2] [10LL] [i_9] [(unsigned short)4] [2LL]))))));
                    var_31 = ((/* implicit */short) 3415492066U);
                    var_32 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4026531966U)) ? (10232700194771291046ULL) : (502320097515437428ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2)) | (min((3415492048U), (((/* implicit */unsigned int) arr_23 [i_9] [i_10] [i_12])))))))));
                    arr_45 [(short)1] [i_9] [i_9] [9] [i_6] = (+(((/* implicit */int) ((signed char) var_11))));
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_6 - 1] [i_6 - 1] [(_Bool)1] [i_10] [16])) && (((/* implicit */_Bool) arr_34 [2U])))))) != (((unsigned long long int) (signed char)-108))))), ((((+(var_10))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-9))))))))))));
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    var_34 -= 123959125U;
                    var_35 = ((/* implicit */unsigned int) (!(arr_23 [i_6 + 2] [i_10 - 1] [i_10 + 1])));
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_10 - 3] [i_6 - 1])) ? (8498302186646409619ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (1241454292))))));
                        arr_53 [i_9] [i_6] [i_9] [i_10] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((short) var_11));
                        var_38 = ((/* implicit */long long int) arr_31 [i_6 + 2]);
                    }
                    for (long long int i_16 = 2; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        arr_61 [i_6 + 1] [i_9] [i_10 + 2] [i_6] [i_13] [i_16 - 1] [i_16] = ((/* implicit */short) arr_39 [(unsigned short)9] [i_10 - 3] [i_13] [i_16 + 1]);
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                        arr_62 [(_Bool)1] [i_16] [i_10] [(unsigned short)18] |= ((/* implicit */unsigned short) ((((long long int) (short)32256)) & (((long long int) (_Bool)1))));
                        arr_63 [i_6] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-32763))))));
                    }
                    for (long long int i_17 = 2; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        arr_66 [i_6] [i_9] [7U] [7] [1] = ((/* implicit */_Bool) 5159422870455371052ULL);
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_25 [i_6 + 2] [i_17 - 1]))));
                    }
                    var_41 |= arr_28 [16U] [6] [6] [i_6];
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [i_10 + 2] [14] [i_10 - 3]))))))));
                }
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    arr_70 [i_6] [i_6] [i_10 - 1] [1ULL] = ((/* implicit */int) (short)32263);
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        arr_74 [i_19] [i_9] [i_9] [i_6] [3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3215057758U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)32764)))))) ? (((/* implicit */int) (unsigned short)41690)) : (((/* implicit */int) ((arr_64 [i_18] [i_18] [(_Bool)1] [(_Bool)1] [i_18]) >= (((/* implicit */unsigned int) 715166993)))))));
                        arr_75 [i_9] [i_6] [i_9] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38509)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) (_Bool)1);
                        var_44 = ((/* implicit */signed char) (-(arr_64 [i_6 - 1] [i_6 - 1] [(unsigned char)1] [i_6 + 2] [i_6])));
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 1; i_21 < 19; i_21 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) arr_21 [i_6]);
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((arr_65 [i_9] [i_9]) ? (((/* implicit */long long int) arr_78 [i_6] [18LL] [6ULL] [i_10] [i_18] [i_21 - 1])) : (var_12))) <= (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_6] [i_9] [i_10] [i_18] [(unsigned short)6] [i_6 + 1]))))))));
                    }
                    var_47 = arr_32 [i_6 - 1];
                    var_48 = ((/* implicit */unsigned short) (((+(arr_64 [i_6] [i_9] [i_10] [i_10] [i_18]))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)30360)), ((unsigned short)16005)))))));
                }
                var_49 = ((/* implicit */unsigned int) 3365096822404844918LL);
                arr_81 [i_6] [i_9] [i_10] = ((/* implicit */unsigned long long int) (-(-715166994)));
            }
            /* vectorizable */
            for (unsigned char i_22 = 2; i_22 < 19; i_22 += 1) 
            {
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (((_Bool)1) ? (arr_37 [i_22 - 1] [(_Bool)1]) : (arr_37 [i_22 - 1] [i_22 + 1]))))));
                arr_85 [i_6] [i_9] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [13LL] [i_6] [i_22] [i_9] [i_22]))))) ? (((/* implicit */int) (short)17057)) : (((/* implicit */int) var_1))));
                /* LoopSeq 3 */
                for (unsigned int i_23 = 2; i_23 < 17; i_23 += 1) 
                {
                    var_51 = ((/* implicit */int) 3574057902U);
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_23 + 2] [i_6 + 1])) ? (((((/* implicit */int) arr_21 [i_6])) * (((/* implicit */int) (signed char)83)))) : (715166997)));
                    var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) (unsigned char)1))));
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        arr_92 [i_6] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-111))));
                        var_54 = ((/* implicit */unsigned short) ((arr_64 [10LL] [i_6 - 1] [i_22 + 1] [i_24 + 1] [i_23 + 1]) - (arr_64 [i_6] [i_6 + 1] [i_22 + 1] [i_24 + 1] [i_23 - 2])));
                    }
                    for (unsigned long long int i_25 = 1; i_25 < 19; i_25 += 4) 
                    {
                        var_55 = ((/* implicit */int) arr_56 [i_6] [9] [16ULL] [i_23] [i_25]);
                        arr_97 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] = ((/* implicit */_Bool) var_1);
                        arr_98 [i_22] [i_22] [i_6] [(_Bool)1] [i_22] [10LL] = (short)-16190;
                    }
                    for (unsigned short i_26 = 1; i_26 < 19; i_26 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15463)) ? (((((/* implicit */_Bool) (unsigned short)39027)) ? (-1725893195708771588LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_22])))));
                        var_57 = ((/* implicit */int) ((((/* implicit */int) var_5)) != ((+(((/* implicit */int) arr_28 [(signed char)19] [i_6] [i_22 - 2] [i_23]))))));
                        var_58 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-32764)))) ? (((/* implicit */int) ((short) (short)19407))) : (((/* implicit */int) arr_73 [(unsigned short)5] [i_26 - 1] [i_26 + 1] [i_26 - 1] [i_26 - 1]))));
                        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) arr_101 [i_6] [i_22] [i_23] [i_9] [i_26 + 1] [2LL]))));
                    }
                }
                for (unsigned int i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    var_60 ^= ((/* implicit */short) arr_47 [10] [(unsigned char)4] [(short)6] [10]);
                    var_61 = ((/* implicit */int) (short)9543);
                    arr_106 [i_6] [18ULL] [i_6] [i_6] = ((/* implicit */short) arr_91 [i_6] [(unsigned short)5] [i_9] [i_22] [i_27]);
                }
                for (unsigned short i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    var_62 = ((/* implicit */unsigned int) (+(arr_76 [i_6 - 1] [i_6 - 1] [i_22 - 1] [i_22 + 1])));
                    var_63 = ((/* implicit */_Bool) 1582379603);
                    arr_111 [i_6] [i_6] [i_22] [(unsigned short)18] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6] [i_9] [i_22]))))))));
                    var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) (+(((/* implicit */int) arr_32 [(unsigned short)5])))))));
                }
            }
            arr_112 [i_6] [1ULL] = ((/* implicit */short) -1233661506525273957LL);
        }
    }
}
