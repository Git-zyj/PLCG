/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48230
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (signed char)-15))));
        var_12 = ((/* implicit */signed char) (+((+(var_1)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (var_10)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [(short)12] = (~(((/* implicit */int) (unsigned short)39121)));
                var_13 += ((/* implicit */unsigned char) (short)0);
            }
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(8ULL)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2))));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_11 [18ULL] [i_1] [(signed char)18] [i_0] = ((((/* implicit */int) (short)11)) <= (((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */long long int) -777693243))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) (+(((arr_2 [i_0]) + (((/* implicit */int) arr_13 [i_4] [i_4] [i_3] [i_4] [i_0] [i_4]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_4] [i_4] [(unsigned short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [19]))) : (var_1)));
                        arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) (short)-18443)) : (-777693243)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_17 *= ((/* implicit */_Bool) ((unsigned short) arr_13 [8U] [i_1] [i_3] [i_4] [i_1] [i_6]));
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -777693249)) ? (777693243) : (((/* implicit */int) arr_12 [11ULL] [i_3] [i_4] [i_6]))));
                    }
                }
                for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    arr_24 [i_0] [i_0] [4U] [4U] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)65276)) ? (777693243) : (777693244))) / (((((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_3] [i_7] [(unsigned short)2])) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) var_2))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)-6))));
                }
                var_20 = ((/* implicit */int) arr_5 [i_0] [i_1]);
            }
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(777693249)))) & (((((/* implicit */_Bool) (short)-32444)) ? (11169238950515745255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))))));
                var_22 = ((/* implicit */int) var_7);
            }
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
            {
                var_23 += ((/* implicit */short) (unsigned short)51231);
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_8))));
            }
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) ((short) 777693244));
                arr_31 [i_0] [i_10] [7] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [(unsigned short)7] [i_1] [i_10]);
                arr_32 [i_0] [i_1] [(unsigned short)7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -777693249)) ? (arr_9 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_16 [i_0])))))));
                var_26 *= ((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned short)60472)));
            }
            /* LoopSeq 4 */
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_13 [(unsigned short)20] [i_1] [i_1] [i_11] [i_0] [i_0])) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-77))))) : (var_3)));
                arr_36 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0])) > (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    arr_40 [i_0] [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_12] [i_0])))) >= (((/* implicit */int) var_5))));
                    var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 20U)) ? (((/* implicit */int) (unsigned short)5064)) : (((/* implicit */int) (unsigned short)0))))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 3; i_13 < 22; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) (short)-6);
                        arr_44 [i_0] [(signed char)8] [i_11] [(unsigned short)10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_13] [i_1] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)7)) <= (((/* implicit */int) arr_14 [(signed char)9] [i_12] [i_12] [i_11] [i_1] [i_0])))))) : (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [(unsigned short)7] [i_11] [i_12] [(unsigned char)22] [i_1]))) : (var_8)))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [14U] [(unsigned char)2] [14U])) ? (((6580468696561621830LL) >> (((((/* implicit */int) (unsigned short)46001)) - (45981))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_11])))));
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] [i_13] = ((/* implicit */short) (~((~(var_7)))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_12] [i_0] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_12] [i_12])) : (arr_37 [i_13 - 2])));
                    }
                    for (unsigned short i_14 = 1; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) ((arr_47 [i_14 - 1] [(unsigned char)22] [(unsigned char)22] [i_14 + 2] [i_14 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-10648)))));
                        var_34 = ((/* implicit */int) (~(var_3)));
                        arr_48 [i_0] [i_1] [i_11] [i_14] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
                        var_35 = ((/* implicit */unsigned short) (~(arr_35 [(unsigned short)3] [i_1] [i_0])));
                        var_36 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_13 [i_0] [1ULL] [1ULL] [(unsigned short)9] [i_14] [i_14]))) | (((/* implicit */int) arr_30 [i_14 - 1] [i_14 + 2] [9] [i_0]))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) -20))));
                        var_38 = ((/* implicit */unsigned short) ((((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21625))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))))));
                        var_39 = ((/* implicit */int) min((var_39), ((~(((/* implicit */int) arr_34 [i_15] [i_15 + 1] [i_15 + 3]))))));
                    }
                }
                arr_51 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_49 [i_11] [2U]);
            }
            for (int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-6)) == (((((/* implicit */_Bool) arr_41 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)60472)) : (((/* implicit */int) arr_43 [(short)0])))))))));
            }
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
            {
                arr_57 [i_0] [4] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                var_42 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_35 [i_0] [i_0] [i_0]))));
            }
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
            {
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) -777693245)) || (((/* implicit */_Bool) arr_2 [17])))))));
                arr_61 [22] [22] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_0);
                var_44 = ((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [(unsigned short)8] [i_1])) * (((/* implicit */int) arr_4 [i_0])));
                arr_62 [i_0] [i_0] [i_18] = ((/* implicit */int) var_4);
            }
        }
        for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */short) var_9);
                arr_69 [i_0] [19ULL] [i_0] = ((/* implicit */signed char) (unsigned short)16376);
                var_46 = ((/* implicit */short) (~(((/* implicit */int) arr_46 [i_0] [i_19] [i_0] [i_19] [i_19] [i_20] [i_20]))));
                var_47 = ((/* implicit */signed char) 777693260);
                var_48 = ((/* implicit */long long int) ((_Bool) (signed char)-127));
            }
            for (signed char i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    var_49 = ((/* implicit */unsigned short) (-((~(8589934591ULL)))));
                    var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) arr_56 [i_21]))));
                }
                for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) 
                {
                    arr_79 [(short)22] [21U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_15 [i_0] [i_19] [i_21] [i_21] [i_23])));
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_35 [(signed char)18] [i_21] [i_19]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_0] [(signed char)1] [i_19] [i_21] [i_21] [i_23])))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_64 [(unsigned char)7] [i_0])))) : (((/* implicit */int) ((13167612015127034246ULL) != (((/* implicit */unsigned long long int) var_3)))))));
                }
                arr_80 [i_0] = ((/* implicit */long long int) var_6);
            }
            for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 2) 
            {
                var_52 = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_0])) * ((+(((/* implicit */int) arr_73 [(signed char)18] [16U]))))));
                arr_84 [i_0] [i_19] [i_0] [(unsigned char)16] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)26303)) >= (((/* implicit */int) (unsigned short)0)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [10LL] [i_19] [10LL] [i_0]))) : (arr_35 [i_0] [i_19] [(unsigned char)17]))) : (17015648596095994529ULL)));
                var_53 = ((/* implicit */short) (~(arr_78 [i_0] [(short)11] [20] [i_19] [i_24])));
                /* LoopSeq 2 */
                for (unsigned short i_25 = 2; i_25 < 20; i_25 += 2) 
                {
                    var_54 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [22ULL] [7] [22ULL]))) : (var_1)))) ? (((/* implicit */int) (unsigned short)39231)) : (((((/* implicit */_Bool) arr_28 [11U] [i_24] [(unsigned short)17])) ? (((/* implicit */int) (unsigned char)27)) : (arr_55 [i_19] [(unsigned short)0] [i_24])))));
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1233908562)) ? (((((/* implicit */_Bool) (short)32767)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30434))))) : (((/* implicit */unsigned long long int) arr_22 [i_25 + 2] [i_19]))));
                    var_56 = ((((/* implicit */int) (short)-15)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                    arr_87 [i_0] [i_24] [i_0] = ((/* implicit */unsigned long long int) arr_78 [i_0] [i_24] [13ULL] [i_0] [i_0]);
                    var_57 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)229)) ^ (((/* implicit */int) arr_34 [(unsigned char)22] [i_19] [i_24]))))) : (((((/* implicit */_Bool) arr_6 [8U] [(unsigned char)13] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_25]))) : (var_4)))));
                }
                for (int i_26 = 1; i_26 < 21; i_26 += 2) 
                {
                    var_58 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_0] [i_19] [i_19] [(signed char)22] [(short)22]))));
                    var_59 = ((/* implicit */int) arr_83 [(unsigned short)2] [i_24] [(unsigned short)17]);
                    var_60 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [22ULL] [i_26])) ? ((~(18446744073709551590ULL))) : (((/* implicit */unsigned long long int) arr_15 [i_26 - 1] [10ULL] [i_26 + 1] [i_26 - 1] [8]))));
                    arr_91 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_68 [i_26 + 1] [i_0] [i_26 + 1] [i_24])) > (((/* implicit */int) arr_12 [i_0] [i_19] [i_0] [i_26 - 1]))));
                    var_61 = ((/* implicit */short) 3911696053836475611ULL);
                }
                arr_92 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)0);
            }
            arr_93 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            var_62 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_65 [(short)13] [i_19] [2] [2])) : (((/* implicit */int) (unsigned short)4323))))) ? (4294967274U) : (var_7)));
        }
        var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) (~(var_7))))));
    }
    var_64 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) ? (30ULL) : (((/* implicit */unsigned long long int) -1168495551))));
}
