/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221171
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [(signed char)8] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1])))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8351105470321362586LL)) ? (var_8) : (((/* implicit */unsigned long long int) 4585688119552920442LL))))) || (((((/* implicit */int) arr_1 [i_0] [i_1 + 2])) >= (((/* implicit */int) (signed char)2)))))))));
                    var_11 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (2004388961) : (((/* implicit */int) (unsigned char)215)))))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2 - 1])))) : (max((((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_2])), (((((/* implicit */_Bool) arr_0 [i_0] [10ULL])) ? (((/* implicit */int) arr_1 [(unsigned short)3] [i_1])) : (((/* implicit */int) (unsigned short)52078)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_12 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)75))));
        arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_11 [i_3]) : (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3])))) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) max((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) arr_1 [i_3] [i_3])) >> (((((/* implicit */int) var_0)) - (204)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)37))))) : (((((/* implicit */_Bool) var_3)) ? (-6822268180332541345LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_13 = ((/* implicit */signed char) arr_4 [i_3] [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4])) - (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_4])), (17946921181024226770ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_4])))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    {
                        arr_23 [i_4] [i_5] [i_6 - 3] [i_7] &= max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)59793)) >= (2147483647)))), (min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)183))))), ((unsigned char)85))));
                        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_3 [i_6 - 3]) % (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_7 - 2] [i_7 - 1] [i_7] [i_7] [i_7])))))), (((unsigned long long int) arr_3 [i_6 - 2]))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) var_6)) % (((/* implicit */int) (unsigned char)215)))) != ((~(((/* implicit */int) (unsigned short)44464))))))))));
                        arr_24 [i_6] [i_7 - 2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_6] [i_7 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_6 + 1])))))))))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 5988300238224595235LL)))))) >= (((unsigned int) 2199023255551ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1])), (max((((/* implicit */unsigned short) (unsigned char)25)), (arr_1 [i_6 + 1] [i_5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)26323))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44299))) : ((+(arr_2 [i_4] [(_Bool)1])))))));
                    }
                } 
            } 
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4])) ^ (((/* implicit */int) arr_15 [i_5]))))) ? (var_9) : (((((/* implicit */_Bool) (short)-24870)) ? (((/* implicit */long long int) min((447228951), (((/* implicit */int) (unsigned short)44300))))) : (-117406907157009181LL))));
            var_19 = ((/* implicit */unsigned short) min(((-((-(arr_21 [i_5]))))), ((+(var_3)))));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
        {
            arr_28 [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)312)) ^ (((/* implicit */int) arr_17 [i_4] [i_4]))))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((((((/* implicit */int) arr_22 [(unsigned short)1] [(unsigned char)8] [i_4] [i_4] [i_4] [(unsigned char)8])) | (((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) arr_27 [i_4])))))) : (((((/* implicit */_Bool) (unsigned char)37)) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_27 [i_4]))))))));
            arr_29 [(_Bool)1] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)72)) <= (((/* implicit */int) (unsigned char)163))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                var_20 &= ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)20))))));
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) var_4))))))), (((/* implicit */long long int) var_0))));
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_8] [i_10] [i_8])) - (min((min((arr_32 [i_10] [i_9] [i_8] [i_4]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)31872)) - (31872))))))))));
                }
                for (signed char i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    var_23 &= ((unsigned long long int) (-(1982737467831166329LL)));
                    var_24 = ((/* implicit */unsigned short) var_8);
                    arr_37 [i_9] [i_9] [i_9] [i_9] = (~(min((((/* implicit */long long int) ((arr_8 [i_4]) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)254))))), (((var_9) - (((/* implicit */long long int) arr_30 [i_4] [i_8] [i_9])))))));
                    arr_38 [i_11] [i_9] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) var_0))) || ((!(((/* implicit */_Bool) 117406907157009168LL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_33 [i_4] [i_8] [i_8] [i_8])), (((unsigned short) var_7)))))));
                    arr_39 [i_4] [(unsigned char)7] [i_8] [i_9] [i_11] [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8] [i_11])) && (((/* implicit */_Bool) (short)28672)))))));
                }
                for (signed char i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                {
                    arr_42 [i_4] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)41895)) ? (((/* implicit */int) (unsigned char)37)) : ((+(-1685480761)))))));
                    var_25 &= ((/* implicit */unsigned char) (-(min((arr_7 [i_12] [i_8] [i_4]), (((((/* implicit */_Bool) (short)-28667)) ? (((/* implicit */int) (signed char)69)) : (var_5)))))));
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                arr_47 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483627)) ? (((/* implicit */int) var_6)) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) arr_25 [i_13] [i_8] [i_4])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_0))));
                var_26 = (((!(((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) arr_34 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) max((arr_34 [i_4] [i_4] [i_8] [i_13]), (((/* implicit */unsigned short) arr_4 [i_4] [i_4] [i_4]))))));
            }
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
            {
                var_27 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (var_3) : (arr_21 [i_4]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (signed char i_16 = 1; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_36 [i_8] [i_8] [i_16 + 2] [i_16] [i_16 + 1] [i_16])), (var_6)))) ? ((-(((/* implicit */int) arr_52 [i_4] [i_15] [i_16 + 1] [i_16] [i_16 + 1] [(signed char)4])))) : (((arr_52 [i_14] [i_14] [i_16 - 1] [i_16] [i_16 - 1] [i_14]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-10))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max(((unsigned short)23630), (((/* implicit */unsigned short) var_7))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) : ((((~(((/* implicit */int) var_0)))) - ((~(((/* implicit */int) arr_16 [i_14] [i_15] [i_15])))))))))));
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_16] [i_15] [i_4] [i_14] [i_8] [i_4])), (arr_40 [0LL] [7U] [i_8] [i_14] [i_15] [i_16])))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_10 [i_14])))) >= (((/* implicit */int) var_1))));
            }
            for (int i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_4]))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (7568775357288011173LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21401))))))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)91)))))));
                    arr_63 [i_4] [i_4] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_8] [i_8]))) - (min((var_9), (((/* implicit */long long int) (unsigned char)51)))))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_17])), ((+(0U))))))));
                }
                for (signed char i_19 = 0; i_19 < 14; i_19 += 1) 
                {
                    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    var_35 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_19] [i_8] [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)24))))) >= (((/* implicit */unsigned long long int) arr_51 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                    var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4])) != (-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_17] [8])))))))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (2147483647) : (1685480760))) : (min((var_5), (arr_5 [i_8] [i_8] [i_8])))));
                    arr_66 [i_4] [i_19] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)181))))) ? (var_3) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) / ((-(((5140497704372010014ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        {
                            var_37 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1084212560)) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (arr_19 [i_4])))) ? (((/* implicit */int) arr_9 [i_17] [(signed char)23] [i_4])) : (((/* implicit */int) arr_22 [i_4] [i_8] [i_8] [(signed char)5] [i_17] [(unsigned short)1]))))));
                            arr_73 [i_4] [i_8] [i_8] [i_20] [i_17] &= ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_45 [i_4] [i_8] [i_20])) ? (var_2) : (arr_2 [i_8] [i_21]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_41 [i_4] [13ULL] [i_4]) : (((/* implicit */int) (unsigned char)204))))))), (((max((var_3), (((/* implicit */unsigned long long int) -2137959896)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8))))))));
                            var_38 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1255711344)) ? (min((((/* implicit */int) (unsigned short)23630)), (-1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41905))))))))));
                        }
                    } 
                } 
            }
            for (int i_22 = 0; i_22 < 14; i_22 += 2) /* same iter space */
            {
                var_39 = ((((/* implicit */_Bool) min((arr_19 [i_8]), (((/* implicit */int) ((((/* implicit */int) var_4)) > (arr_19 [i_22]))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) >= (var_8))) ? (min((((/* implicit */int) var_1)), (arr_54 [i_4] [i_4] [i_8] [i_22] [(short)5]))) : (((((/* implicit */_Bool) arr_11 [i_22])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_57 [i_4] [0] [i_22] [i_22])))))) : ((~(((/* implicit */int) (signed char)-57)))));
                arr_76 [i_4] [i_4] [i_4] [i_22] = ((/* implicit */unsigned long long int) arr_1 [i_22] [i_22]);
            }
        }
    }
}
