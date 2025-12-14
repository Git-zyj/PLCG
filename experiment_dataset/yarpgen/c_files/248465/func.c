/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248465
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 13021846920829695012ULL);
            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)19))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]))))) <= (((/* implicit */int) (short)-23))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) var_1);
                var_11 = (!(((/* implicit */_Bool) 132120576)));
            }
        }
        var_12 = (+(((arr_0 [i_0] [i_0]) << (((/* implicit */int) ((arr_7 [i_0] [(signed char)0]) >= (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_13 = ((/* implicit */short) min((((/* implicit */int) (signed char)-92)), (262143)));
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_4]))))))));
            var_15 = ((((/* implicit */_Bool) arr_11 [i_4] [i_3])) ? (((((9223372036854775807LL) < (((/* implicit */long long int) 262142)))) ? (((/* implicit */int) (unsigned short)42678)) : (((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) arr_3 [i_4] [i_3] [i_3])));
        }
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)103)) == (((/* implicit */int) ((unsigned char) min((864989709), (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))))))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))))) & (arr_0 [i_5] [i_5])))) : (((((/* implicit */_Bool) max((arr_16 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_12 [i_5] [(unsigned short)22] [i_5]))))) ? ((+(arr_15 [i_5] [i_5]))) : (arr_15 [i_5] [i_5])))));
        var_16 = ((/* implicit */short) (-(((/* implicit */int) min((arr_3 [i_5] [i_5] [i_5]), ((signed char)92))))));
    }
    var_17 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_18 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */short) arr_17 [i_6]);
        /* LoopSeq 3 */
        for (int i_7 = 3; i_7 < 13; i_7 += 2) 
        {
            var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned int) arr_25 [i_6 + 1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)-8)))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_7] [i_6 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-102))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-102)) == (((/* implicit */int) (unsigned short)42678))))) << (((((((/* implicit */int) arr_10 [i_6 - 1] [i_7 - 2])) ^ (-262144))) + (262062))))))));
            var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_6 + 2])))));
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */int) min(((signed char)-34), ((signed char)45)))), (((((/* implicit */int) (signed char)-92)) * (((/* implicit */int) (short)-3611)))))))));
                            arr_34 [i_6] [i_10] [i_8] [i_7] [i_6] = ((/* implicit */signed char) ((arr_17 [i_9]) <= (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_23 [i_7])))));
                            var_22 = ((/* implicit */unsigned short) ((((((-262166) > (262144))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [7LL] [i_7] [i_7]))) / (var_4)))) : (14542959441330438976ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_27 [i_7]))))), (((/* implicit */unsigned int) var_8))));
                            arr_41 [i_7] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) min(((short)26), (arr_24 [i_11] [i_12])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_6])) & (((/* implicit */int) (signed char)-122))))))))));
                            arr_42 [i_11] [i_7] [i_8] [i_11] [i_12 - 2] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                arr_43 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26668)) ? (262143) : (((/* implicit */int) var_6))));
            }
            for (int i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 13; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_13 + 4] [i_13 + 2])) ? (arr_15 [i_13 - 1] [i_13 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                            arr_50 [i_6 + 2] [i_7] [(short)1] [i_6 + 3] [i_6 + 2] = (-(35184372088576LL));
                        }
                    } 
                } 
                var_25 += max((((/* implicit */long long int) 4157829973U)), (((((/* implicit */_Bool) ((int) 134217727))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (1610612736LL))));
            }
            var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_6] [i_6] [i_7] [i_6] [i_7] [i_7 + 1])) & (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned short)26797)) ? (((/* implicit */unsigned long long int) ((unsigned int) 534816843386766471ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3)))))));
        }
        for (short i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_17 = 3; i_17 < 13; i_17 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26668))) : (3187801952800556014LL)));
                arr_56 [i_6 + 2] = ((/* implicit */signed char) -7975650776554773708LL);
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) min(((unsigned short)34961), (((/* implicit */unsigned short) (unsigned char)245))));
                var_29 = (!(((/* implicit */_Bool) (unsigned char)224)));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_62 [i_6] [i_16] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_6] [i_6] [i_6 - 1])) > (((/* implicit */int) arr_9 [i_6 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_16])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2377320636U))))) : (((/* implicit */int) (unsigned short)26812))))) : (arr_17 [i_6 - 1])));
                arr_63 [i_6 + 3] [i_6 + 3] [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((var_9) ? (-645813136) : (((/* implicit */int) arr_45 [i_6 + 2] [i_6 + 1]))))), (((((/* implicit */_Bool) (unsigned char)209)) ? (3536170303125743413LL) : (((/* implicit */long long int) 4294967295U))))));
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_66 [i_6] [i_16] [i_20] [i_6] = ((/* implicit */unsigned short) min((arr_11 [i_20] [i_19]), ((unsigned char)254)));
                    arr_67 [i_20] [i_19] [i_16] [i_20] = ((/* implicit */short) (~(min((arr_33 [i_6] [i_6] [i_6 + 2] [i_6] [i_20] [i_6 + 3] [i_6 + 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-92)))))))));
                    arr_68 [i_6 + 1] [i_6 + 1] [13ULL] [i_20] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned char)198)) ^ (((/* implicit */int) arr_59 [i_6 + 3]))))));
                    arr_69 [i_6] [i_16] [(unsigned char)5] [i_20] [i_6] = (+(18446744073709551588ULL));
                    arr_70 [i_6] [i_20] [(signed char)7] [i_20] = ((/* implicit */unsigned long long int) var_5);
                }
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)9662)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21166))))), ((~(arr_2 [i_6])))))));
                arr_73 [i_6] [i_6 - 1] [i_6 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-92))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_21] [(unsigned char)7] [i_6])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_6))))) * (arr_35 [i_6 + 3] [2] [i_21])))));
                var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)22767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26739))) : (2147956042U)))));
            }
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((((((((/* implicit */_Bool) (unsigned char)95)) ? (-7797110738785029411LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))) + (9223372036854775807LL))) >> (((max((var_0), (((/* implicit */long long int) var_2)))) - (53893496LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 - 1]))) : (arr_46 [i_6 + 2] [i_6 + 1] [i_6] [i_6 + 2]))))));
        }
        for (unsigned char i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            var_33 = ((-645462831) + (((/* implicit */int) (unsigned char)235)));
            arr_76 [i_22] [i_22] [i_6] = ((/* implicit */int) ((min((((/* implicit */long long int) ((unsigned char) var_6))), (-6383670713486569885LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_6 + 3] [i_6] [i_6 + 3] [i_6 + 2])))));
            var_34 = ((/* implicit */signed char) arr_24 [i_6] [i_6]);
        }
        arr_77 [i_6] = ((/* implicit */unsigned char) arr_44 [i_6]);
    }
    for (signed char i_23 = 0; i_23 < 14; i_23 += 3) 
    {
        arr_82 [i_23] [i_23] = ((/* implicit */unsigned char) var_2);
        var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_2 [i_23]) >> (((arr_2 [i_23]) - (715689804U)))))), (((((/* implicit */_Bool) arr_2 [i_23])) ? (8608543749793059051ULL) : (((/* implicit */unsigned long long int) arr_2 [i_23]))))));
    }
    for (unsigned int i_24 = 1; i_24 < 20; i_24 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-18372)) + (2147483647))) << (((((/* implicit */int) arr_12 [i_24] [i_24] [(short)20])) - (22315)))));
        var_37 = ((/* implicit */unsigned short) var_5);
        arr_85 [i_24] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-20666)) ? (((/* implicit */int) arr_10 [i_24 + 3] [i_24])) : (((/* implicit */int) arr_84 [i_24 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_24 + 3] [i_24 + 1] [i_24 + 2] [i_24 + 4]))) == (arr_7 [i_24 + 4] [i_24 + 4]))))));
        arr_86 [i_24 + 3] = ((/* implicit */long long int) (~(arr_2 [i_24])));
    }
    /* vectorizable */
    for (unsigned int i_25 = 1; i_25 < 20; i_25 += 2) /* same iter space */
    {
        var_38 += ((/* implicit */_Bool) arr_88 [i_25 + 1] [i_25 + 2]);
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_13 [i_25 + 4])))))));
    }
}
