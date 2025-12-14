/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249963
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57553)) ? (((/* implicit */int) var_12)) : (var_11)))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) 16368U))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [(unsigned short)8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_0]), (arr_0 [i_0] [i_0])))) == (((int) var_8))))), (min((min((var_7), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_5))))));
        var_14 *= ((/* implicit */short) max((((/* implicit */unsigned short) arr_3 [(_Bool)1])), (((unsigned short) arr_2 [2ULL]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2097151ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 4294950905U))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) max(((~(((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((unsigned long long int) arr_5 [i_0]))));
            arr_9 [10] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (1732958009U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219)))))), (max((((/* implicit */long long int) ((signed char) arr_5 [i_0]))), (min((((/* implicit */long long int) arr_3 [i_1])), (arr_7 [i_1])))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((signed char) 18U))), ((-2147483647 - 1)))), (((((((/* implicit */_Bool) (unsigned char)220)) && (((/* implicit */_Bool) 7369726762863893605ULL)))) ? (((/* implicit */int) var_9)) : (1773740015)))));
            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) var_12)))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (var_7)))) | (max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [(short)4]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32754)), (2147483647)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 4; i_4 < 10; i_4 += 2) 
                {
                    arr_21 [i_0] [i_2] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) arr_14 [(unsigned char)2]);
                    var_19 = (~(arr_5 [i_0]));
                }
                arr_22 [i_3] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (4294950927U)))) ? (((/* implicit */int) ((arr_1 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_29 [i_2] [5ULL] [i_5] [i_0] [i_2] [9U] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-2147483647 - 1))))) : (var_6))));
                            var_20 = ((/* implicit */int) var_6);
                            arr_30 [i_5] [i_5] = ((/* implicit */_Bool) 4294950922U);
                        }
                    } 
                } 
                arr_31 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(signed char)1] [i_0] [i_2] [i_3]))) <= (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) * (arr_6 [i_2] [i_2])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) var_9);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_12 [i_3] [i_2]) : (arr_12 [i_0] [i_7])));
                }
            }
            for (short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0])) ? (max((((/* implicit */unsigned int) ((short) var_10))), (min((var_7), (((/* implicit */unsigned int) var_2)))))) : (((unsigned int) arr_2 [i_0]))));
                var_24 ^= ((/* implicit */long long int) 16800933168597041674ULL);
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_25 = ((/* implicit */_Bool) (short)-10799);
                arr_38 [i_0] [11U] [i_0] [i_9] = ((unsigned int) arr_27 [i_9] [i_9] [2] [i_2] [i_9] [i_9]);
            }
            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                arr_41 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~((~(4294967292U))))) + (((/* implicit */unsigned int) ((int) var_12)))));
                var_26 = ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (int i_12 = 2; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_47 [i_2] [i_11] = ((/* implicit */short) (~((+(var_1)))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_46 [i_12 + 2] [(short)2] [i_10] [i_11] [10ULL])), (arr_17 [i_12 + 2] [i_2] [i_2] [i_11] [i_12])))) ? (max((((/* implicit */int) min((arr_3 [i_11]), (arr_19 [i_12 + 2] [i_12 + 2])))), (arr_27 [i_0] [i_0] [i_12] [i_12 + 2] [i_12 + 1] [i_12]))) : (((((/* implicit */_Bool) ((var_8) ? (3U) : (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_12]))))) : (((((/* implicit */int) arr_13 [i_11])) & (((/* implicit */int) arr_26 [i_0])))))))))));
                            var_28 = ((/* implicit */unsigned long long int) arr_8 [(_Bool)1]);
                        }
                    } 
                } 
            }
            arr_48 [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned short)56592))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) | (((((/* implicit */_Bool) var_0)) ? (arr_36 [(_Bool)1] [(_Bool)1] [6U]) : (16370U)))))));
            var_29 = ((/* implicit */signed char) (~(1174252685)));
        }
        /* vectorizable */
        for (short i_13 = 1; i_13 < 8; i_13 += 3) /* same iter space */
        {
            arr_52 [i_0] [i_0] = ((((/* implicit */_Bool) ((short) var_3))) || (((/* implicit */_Bool) (unsigned char)4)));
            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) ((_Bool) arr_2 [i_13]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551589ULL)))))))));
            var_31 += ((/* implicit */int) ((arr_25 [(unsigned short)2] [i_0] [i_0] [i_0] [i_13]) % (arr_25 [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 1])));
        }
        for (short i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6785))) & (arr_54 [6U] [(unsigned short)10] [(unsigned short)10])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((arr_7 [i_14]), (((/* implicit */long long int) arr_26 [i_14]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_19 [i_14] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_43 [8U] [i_0] [8ULL]), (((/* implicit */unsigned short) var_0)))))) : (((var_8) ? (arr_20 [i_14] [5LL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14] [11ULL] [i_0])))))))));
            arr_55 [i_0] [(_Bool)1] [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_3)))))) + (var_3)));
            arr_56 [i_0] = ((/* implicit */short) ((((unsigned long long int) arr_8 [i_14 + 3])) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [10] [i_14 + 1] [2U]))))))));
            /* LoopNest 3 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_65 [i_0] [i_16] [i_17] = max((((unsigned int) arr_6 [4] [i_16])), (((unsigned int) arr_3 [(short)9])));
                            arr_66 [i_0] [i_14] [i_0] [i_16 - 1] [i_16] = ((/* implicit */_Bool) max((((arr_19 [i_15 - 1] [i_14 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_16] [i_0] [i_14] [(unsigned char)7] [i_16] [9LL])))))) : (arr_23 [i_0] [i_14 + 1] [i_14 + 1] [i_16]))), (((/* implicit */unsigned int) arr_16 [i_15] [i_15] [i_17]))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) max((((/* implicit */long long int) max((arr_14 [i_15 - 1]), (((/* implicit */unsigned char) arr_19 [i_16 - 2] [10]))))), ((~(var_6))))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0])) | (((/* implicit */int) var_8))))), ((~(8653388041909108869LL))))), (((/* implicit */long long int) (+(((unsigned int) var_9))))))))));
                            arr_67 [i_0] [i_0] [i_15 - 1] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_23 [i_16 - 2] [i_16 - 2] [i_16] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_14 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) arr_20 [9] [i_14] [i_14 + 3] [i_14]))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_35 = ((/* implicit */int) var_4);
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) var_9))));
}
