/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192400
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 += max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (min((((unsigned long long int) -3811393332214503141LL)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)93))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1] [i_2 + 2]))), (((unsigned long long int) -9124163252355451002LL)))) * (1143914305352105984ULL)));
                    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [20ULL] [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 - 1])) ? (((1024007401) - (((/* implicit */int) (unsigned char)167)))) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2] [i_2 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2 + 2] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) 6060492373885488950ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)167))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_16))))))) >> (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)104)))) : (((arr_11 [i_3] [i_4]) & (arr_12 [i_4 - 1]))))) - (9296814200579984375ULL)))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned long long int) min((((unsigned long long int) (signed char)-57)), (arr_0 [(unsigned short)6])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(4248163237537733247ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (6814104139321086472LL)))));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_5]))));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_19 [i_6] = ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_6] [i_6]))));
        var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) arr_8 [i_6] [i_6] [i_6] [i_6]))) ? (-963651202) : (((/* implicit */int) var_6))))));
        var_25 = ((/* implicit */signed char) max((((unsigned long long int) max((6056746460407511744ULL), (((/* implicit */unsigned long long int) var_11))))), (((((/* implicit */_Bool) (+(13593340859030589886ULL)))) ? (14198580836171818375ULL) : (var_9)))));
    }
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        arr_22 [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)22))) : (6878568056152498032LL)))) | (arr_7 [i_7]))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_7] [3U] [i_7] [i_7])) && (((/* implicit */_Bool) var_2))))) << (((((unsigned int) arr_8 [i_7] [i_7] [i_7] [i_7])) - (4281033820U)))));
    }
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
    {
        arr_27 [20ULL] [i_8] = arr_8 [i_8] [i_8] [i_8] [i_8];
        arr_28 [i_8] = ((/* implicit */signed char) var_9);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9072)) / (((/* implicit */int) (unsigned char)167))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((7529225707953992899ULL) | (((/* implicit */unsigned long long int) ((long long int) var_15))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11] [i_11]))) : (4248163237537733241ULL)));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)58)) || (((/* implicit */_Bool) var_1))));
                        var_30 = ((/* implicit */unsigned long long int) (+(-964751240)));
                    }
                    arr_43 [i_8] [(unsigned short)8] [i_8] [i_8] [i_8] [0ULL] = ((/* implicit */int) (+(var_9)));
                    arr_44 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) 2147483647);
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17770267830178660499ULL)))))));
                }
                arr_45 [i_8] [i_9] [i_11] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9]))) : (var_9))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)1333))))));
                arr_50 [15ULL] [i_14] [(unsigned char)17] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 4248163237537733240ULL)) && (((/* implicit */_Bool) var_11)))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8]))) : (((((/* implicit */_Bool) -2147483642)) ? (arr_25 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(arr_47 [(unsigned char)18] [i_9] [i_15]))))));
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)28783)) : (((/* implicit */int) var_14)))))));
                var_36 = 1099511627775ULL;
            }
            var_37 = ((/* implicit */unsigned char) ((signed char) arr_18 [i_8]));
            var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_9]))));
        }
        for (unsigned char i_16 = 3; i_16 < 19; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (int i_18 = 4; i_18 < 18; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
                        {
                            arr_63 [i_8] [i_17] [8ULL] [(signed char)16] [i_17] |= ((/* implicit */signed char) 6814104139321086464LL);
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (((-2147483647 - 1)) - (arr_59 [i_19 + 2] [11ULL] [i_19 + 2] [12ULL] [i_19 - 1] [i_19 - 1])))) ? (arr_59 [i_19 + 2] [i_19 + 2] [i_19] [i_19] [i_19 - 1] [i_19 - 1]) : (min((arr_59 [i_19 - 1] [i_19 + 1] [(signed char)1] [15U] [i_19] [i_19 + 2]), (((/* implicit */int) var_13)))))))));
                        }
                        for (unsigned char i_20 = 1; i_20 < 19; i_20 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))));
                            arr_66 [i_8] [(unsigned char)3] [(unsigned char)3] [i_16] = ((/* implicit */unsigned char) ((int) ((short) (+(var_3)))));
                            var_41 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) var_13)))))), (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 31LL)))) : (((((/* implicit */_Bool) arr_34 [i_8] [i_18] [i_20 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12)))))));
                            arr_67 [i_8] [i_16 - 2] [15] [i_16] [i_16] = ((/* implicit */signed char) var_2);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 349603325694846208LL))) ? (((((/* implicit */_Bool) arr_53 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_16 + 1] [i_20 + 2]))) : (((var_9) % (arr_38 [(unsigned short)2] [4U] [i_17] [(unsigned short)15] [(unsigned short)19] [7ULL]))))) : (((unsigned long long int) (-(((/* implicit */int) var_8)))))));
                        }
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) var_14))));
                        var_44 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((var_15), (((/* implicit */int) (signed char)(-127 - 1))))) + (-786131190)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_16])) / (((/* implicit */int) arr_2 [i_18] [(unsigned char)11] [(unsigned char)11]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_17] [2ULL]))) : (arr_49 [i_18]))) : (var_0)))));
                        arr_68 [i_16] [i_16] [8LL] [i_16 - 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) % (((((/* implicit */_Bool) -2147483620)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_8]))) : (13943160919328736931ULL))))));
                    }
                } 
            } 
            arr_69 [i_16] = ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483647)))))) : (((unsigned long long int) (-(296965940U)))));
            arr_70 [i_16] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) (~(((1132184686U) >> (((((/* implicit */int) arr_46 [(signed char)5] [(signed char)5])) - (61766)))))))) : ((+(((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6770))) : (12970263304255959269ULL)))))));
        }
        for (unsigned short i_21 = 2; i_21 < 18; i_21 += 3) 
        {
            var_45 = (+((((!(((/* implicit */_Bool) arr_1 [i_21] [i_21])))) ? (((int) arr_57 [i_8] [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4248163237537733244ULL))))))));
            arr_74 [i_21] [(unsigned short)13] = ((/* implicit */short) var_5);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 4) 
        {
            for (unsigned short i_23 = 2; i_23 < 20; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 4; i_24 < 20; i_24 += 2) 
                {
                    {
                        var_46 = ((/* implicit */signed char) ((((30ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >= ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (arr_35 [i_24 - 2] [i_23 - 2] [i_22])))))));
                        var_47 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (arr_5 [i_8]))))));
                        arr_84 [i_8] [i_8] [i_23] [i_24] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+(arr_48 [18] [i_22] [i_23 - 1] [i_24 - 3]))))));
                        arr_85 [i_23] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)1207)), ((-(14198580836171818371ULL)))));
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5257)) ? (-1998829735) : (((/* implicit */int) arr_52 [i_8] [i_8] [i_8] [i_8])))))));
    }
}
