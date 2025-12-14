/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211698
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (signed char)23);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 524985700U))));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_12 -= ((/* implicit */short) ((_Bool) var_0));
                            var_13 = (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) -6401655487546804211LL)));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (-(arr_6 [i_1] [i_1])));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 4; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) || (((/* implicit */_Bool) arr_1 [i_5 + 1]))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((unsigned long long int) (short)19143))));
                        }
                    } 
                } 
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_0)));
                arr_27 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) << (((2147483647) - (2147483647)))))) ? (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [i_9 + 1] [i_9 + 1]);
                            var_18 -= (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : ((+(var_0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 + 4])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_12 + 4] [i_12 + 4] [i_12] [i_12 + 4])))));
                            var_20 = ((/* implicit */_Bool) var_11);
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 10417967360713702078ULL)) ? (661956846042838968LL) : (((/* implicit */long long int) 1854669202U)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
                {
                    var_22 = ((((/* implicit */_Bool) 3615679786U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 2) /* same iter space */
                    {
                        arr_47 [i_1] [i_1] = ((/* implicit */short) ((long long int) ((674639270040073407LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29017)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)5425))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_14 - 1] [2ULL] [2ULL]))) : (var_11))))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_8);
                        var_25 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) * (var_11)));
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 22; i_16 += 2) /* same iter space */
                    {
                        arr_54 [i_16 + 1] [i_1] [i_8 - 1] [i_1] [i_1] [21U] = ((/* implicit */short) ((unsigned char) (unsigned char)154));
                        var_26 = 1642253106;
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)74))));
                }
                for (unsigned int i_17 = 1; i_17 < 21; i_17 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */int) ((arr_33 [i_0] [19] [i_17 - 1] [i_8 + 1] [12ULL]) % (arr_33 [i_0] [i_1] [i_17 + 2] [i_8 - 1] [i_8])));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        arr_60 [i_1] [i_1] [i_1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)4158)) : (((/* implicit */int) (unsigned short)41930))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_0))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (-2147483633) : (((/* implicit */int) (unsigned char)52))))) && (((/* implicit */_Bool) var_6))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_19 = 1; i_19 < 21; i_19 += 1) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) % (var_11)));
                        var_32 = ((/* implicit */long long int) var_5);
                        arr_63 [i_0] [i_1] [i_8 - 1] [i_1] [i_17 + 1] [2ULL] [i_1] = ((/* implicit */int) ((_Bool) ((unsigned int) -661956846042838968LL)));
                    }
                    for (unsigned char i_20 = 4; i_20 < 20; i_20 += 2) 
                    {
                        arr_67 [i_0] [(_Bool)1] [i_8 + 1] [i_1] [(_Bool)1] = ((_Bool) (short)12969);
                        arr_68 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3636599959006593456LL)) ? (661956846042838968LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (-1682035856) : (((/* implicit */int) (short)23295))));
                    }
                }
            }
            for (long long int i_21 = 0; i_21 < 23; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) (-(arr_33 [i_0] [i_1] [i_21] [i_22] [i_23])));
                            arr_76 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (1ULL) : (((/* implicit */unsigned long long int) var_4))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_4))))));
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)67))));
                /* LoopSeq 4 */
                for (unsigned int i_24 = 1; i_24 < 21; i_24 += 2) 
                {
                    var_36 ^= ((((/* implicit */int) ((unsigned char) -2541916353963588996LL))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)47224)) == (((/* implicit */int) (unsigned char)183))))));
                    arr_79 [i_0] [i_0] [i_1] [i_24] = ((/* implicit */unsigned int) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_24] [(unsigned char)6] [i_24] [i_24] [i_24 - 1] [i_24] [i_1])))));
                    var_37 = ((((/* implicit */_Bool) 2914134142343832891LL)) || (((/* implicit */_Bool) 7882103432360554550LL)));
                }
                for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    var_38 = ((/* implicit */signed char) ((long long int) (_Bool)0));
                    var_39 = ((/* implicit */signed char) 0U);
                }
                for (short i_26 = 3; i_26 < 21; i_26 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((short) var_9));
                        arr_88 [i_0] [i_1] [i_21] [i_1] = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                        var_41 ^= ((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                    var_42 = ((/* implicit */unsigned long long int) ((180100038383550515LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (long long int i_28 = 3; i_28 < 20; i_28 += 4) 
                {
                    arr_91 [i_0] [5] [(signed char)8] [i_28] [i_1] [i_1] = ((/* implicit */_Bool) 13449636881334195699ULL);
                    var_43 = ((/* implicit */int) ((unsigned long long int) ((_Bool) (_Bool)1)));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_21]))));
                }
            }
        }
    }
    var_45 = ((/* implicit */_Bool) ((unsigned char) var_4));
    var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-3008)) >= (((/* implicit */int) ((short) ((_Bool) var_7))))));
}
