/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231160
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) > (4813380028433741295ULL)))), (((((/* implicit */_Bool) 4813380028433741318ULL)) ? (9750625506121990441ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32747))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2328736357U)) && (((/* implicit */_Bool) 1414497370U)))))) : (((((/* implicit */unsigned long long int) -2)) - (arr_0 [i_0] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2328736379U)) ? (9750625506121990456ULL) : (((/* implicit */unsigned long long int) 5211434340914818393LL)))))))))));
        var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (8219558458840556353ULL) : (((/* implicit */unsigned long long int) -4069791915030906054LL)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 6; i_3 += 2) 
                {
                    {
                        arr_11 [9U] [i_0] [i_1] [i_2] [i_3 - 1] [i_3] = ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_3 - 1]))))) ? (((((/* implicit */_Bool) 2328736376U)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [7U] [i_2 - 1] [i_3 + 1] [i_0])) : (arr_6 [0U]))) : (((/* implicit */long long int) -13))));
                        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_5 [i_1] [8U] [0ULL])), (1966230918U))))))));
                        var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1179309214U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 782227487U)))) : ((+(arr_2 [i_0])))))));
                        arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 11512568862512092611ULL)) ? (arr_0 [i_1] [8ULL]) : (11512568862512092626ULL))))) ^ (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9132461873729605734ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0])) ? (((/* implicit */long long int) -2)) : (arr_6 [i_0 + 2])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12776))) : (9750625506121990448ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (-9223372036854775807LL - 1LL)))) > (8696118567587561174ULL)))))));
            arr_15 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (max((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0 + 2] [i_1]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1661864910)) < (arr_9 [i_0] [i_1])))), (9750625506121990445ULL)))));
        }
        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) <= (arr_9 [i_0] [i_0])))) % ((+(((/* implicit */int) (short)-32764)))))));
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 7; i_6 += 1) 
                {
                    arr_25 [i_0] [i_4] [i_0] [i_0] [i_0] [i_4] = (+((+(arr_19 [i_6] [i_6 + 3] [i_4 + 1]))));
                    var_16 *= ((/* implicit */short) (-(((int) arr_8 [7ULL] [i_4 - 1] [i_5] [i_5] [i_6 + 1] [i_6 + 3]))));
                }
            }
            for (short i_7 = 1; i_7 < 7; i_7 += 2) 
            {
                arr_29 [i_0] [i_4] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_21 [i_0 + 2] [5U] [i_4] [5U])))))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 13185057895975670036ULL)) ? (3613886307U) : (((/* implicit */unsigned int) (~(1704818098))))))));
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1442666080384803347ULL)) ? (((/* implicit */long long int) 2885555186U)) : (arr_19 [i_0] [i_0 + 2] [i_4 - 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (short)-32759)))))) <= (18446744073709551615ULL))))));
                            var_19 = ((/* implicit */unsigned char) (~((+(10017331528384504427ULL)))));
                            arr_36 [i_0] [4ULL] [i_7] [4ULL] [i_8] [i_9] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) + ((+(((/* implicit */int) (!((_Bool)1))))))));
                        }
                    } 
                } 
                arr_37 [i_0 - 1] [(short)2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) ((_Bool) 3401201234326488667ULL))) : (((/* implicit */int) ((_Bool) 786589792U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_24 [i_4] [i_7 + 2] [i_7] [i_7 + 3])))) : (2242087143688579198LL)));
                arr_38 [i_0] [i_4] [i_0] = ((/* implicit */short) (+((-(1717421106U)))));
            }
            var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_4 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [(short)9] [i_0]))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3788429266U))))))));
            var_21 = ((/* implicit */long long int) ((unsigned int) ((int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_4 - 1] [i_4])));
        }
        for (long long int i_10 = 1; i_10 < 9; i_10 += 3) /* same iter space */
        {
            arr_41 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_10 + 1]))));
            var_22 = (-(((((/* implicit */_Bool) (unsigned char)83)) ? (arr_0 [i_0] [i_10 + 1]) : (arr_0 [i_0] [i_10 - 1]))));
            arr_42 [i_0] [i_10] [2U] = (+(arr_10 [i_0 + 2] [i_0]));
        }
        arr_43 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) (_Bool)1)), (arr_30 [i_0] [i_0] [i_0] [2] [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (3835919652353795027ULL)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_20 [i_0] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10850)))))))))));
    }
    for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 4; i_13 < 16; i_13 += 4) 
            {
                {
                    arr_51 [i_11] [i_13] [i_13 - 4] |= ((/* implicit */short) ((786589797U) << (16ULL)));
                    var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_11] [i_13])) ? (14610824421355756600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [17] [9U])))))) ? (arr_47 [i_13 - 1]) : (((/* implicit */unsigned int) (((_Bool)1) ? (arr_50 [i_12]) : (((/* implicit */int) (_Bool)1))))))));
                    arr_52 [i_11] [i_12] [i_11] [8LL] = ((/* implicit */unsigned char) ((long long int) ((arr_47 [i_13 - 4]) << (((1469537497) - (1469537491))))));
                }
            } 
        } 
        arr_53 [i_11] [i_11] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (arr_45 [i_11 - 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (arr_45 [i_11 - 2] [4])))));
    }
    var_24 = max((((/* implicit */unsigned long long int) (short)0)), (var_7));
    /* LoopSeq 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_56 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_46 [i_14] [i_14]) < (786589792U))))) ^ (((arr_46 [i_14] [i_14]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1042643471U))))) : (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1920))))))) : (((unsigned long long int) ((((/* implicit */_Bool) 2300360629U)) ? (((/* implicit */long long int) arr_46 [i_14] [i_14])) : (arr_55 [i_14]))))));
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 382066178U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (min((arr_46 [i_14] [i_14]), (((/* implicit */unsigned int) (short)-1924)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14])))))) : (((((/* implicit */_Bool) arr_48 [(short)4] [i_14] [i_14])) ? (arr_54 [i_14]) : ((+(2972611134199999369LL)))))));
        arr_58 [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_54 [i_14]) : (arr_55 [i_14]))) > (((arr_54 [i_14]) ^ (arr_54 [i_14])))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        arr_61 [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_59 [i_15] [1])))));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 3; i_17 < 9; i_17 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [1LL]))) : (arr_55 [i_15])))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_16]))) : (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14610824421355756607ULL)) || (((/* implicit */_Bool) 9750625506121990454ULL))))))));
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_54 [10LL])) ? (arr_59 [4ULL] [i_16]) : (((/* implicit */unsigned long long int) 641501362112172969LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            }
            var_27 = ((/* implicit */_Bool) (-(arr_49 [i_15] [i_15])));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned long long int) arr_65 [(short)10] [(short)10])) : ((+(arr_62 [4U]))))))));
            var_29 &= (-(26ULL));
        }
    }
}
