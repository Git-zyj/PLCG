/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19898
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = arr_0 [i_0];
        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (1758766551)))) && (((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */short) (signed char)(-127 - 1)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)162)))) ? (var_12) : (var_10)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) max(((signed char)-87), ((signed char)65))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [(unsigned char)19])) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)105))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_1])))) * (arr_3 [i_1])))) ? ((+(((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) (short)25468))));
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)26272))))) + (((/* implicit */int) ((((/* implicit */int) arr_2 [3ULL] [3ULL])) != (((/* implicit */int) (short)28387)))))))) : (17355057987392253133ULL)));
            arr_10 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(530742674655453692LL)))) ? (2456585141U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (arr_12 [i_0] [i_2] [i_0]))) : (((/* implicit */unsigned int) arr_11 [i_0] [i_4] [i_0])))) <= (((/* implicit */unsigned int) arr_1 [(unsigned char)1] [i_4 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (var_12))), (3824076105U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) != (((/* implicit */int) (signed char)-101))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                            arr_21 [i_2] [i_5] [i_5] [i_5] [i_5] [(unsigned char)9] [i_5] = ((/* implicit */int) var_14);
                            arr_22 [i_0] [i_0] [i_0] [i_4 + 3] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_16 [i_3] [i_4] [i_5])) : (((/* implicit */int) (short)10074)))), (((/* implicit */int) arr_16 [i_5] [(short)17] [(short)17]))))) ? (((/* implicit */unsigned long long int) (~((~(-530742674655453692LL)))))) : (var_3)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_4 + 1]);
                            arr_27 [i_0] [i_2] [i_3] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)2726)) : (((/* implicit */int) (unsigned short)575)))), (((((/* implicit */int) (signed char)-72)) + (((/* implicit */int) (short)-10850))))))) ? (((/* implicit */int) ((short) arr_26 [i_3 + 1] [i_4 + 2] [i_6] [i_6] [(unsigned char)18]))) : (((/* implicit */int) var_11))));
                            var_25 = ((/* implicit */unsigned short) ((int) ((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) 1949824563U)))) != (((/* implicit */unsigned long long int) (+(var_15)))))));
                            arr_28 [i_0] [i_2] [i_3] [i_2] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)2726)) == (((/* implicit */int) (unsigned short)62809)))) ? ((-(arr_24 [i_6] [i_4] [i_0] [i_3] [i_2] [i_0]))) : ((+(arr_24 [i_3 - 1] [i_4 + 1] [(unsigned short)4] [i_4] [i_4] [i_4 - 1])))));
                            arr_29 [i_6] [1ULL] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((arr_3 [(_Bool)1]) % (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((8385081242135319077LL) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (8385081242135319045LL))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_18 [i_3 - 1] [i_4] [i_4 + 4] [i_4 + 3] [i_7])) << (((/* implicit */int) arr_18 [i_3 + 1] [i_3] [12U] [i_4 + 3] [i_7])))))))));
                            arr_33 [i_2] [i_3 + 1] [i_2] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) arr_14 [i_4] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) : (arr_30 [i_2] [i_7] [i_4 + 2] [i_3 + 2] [i_4]))) * (4988010378903026190ULL)));
                        }
                        var_27 *= ((/* implicit */signed char) arr_7 [i_0] [i_3 + 2]);
                        arr_34 [i_0] [i_2] [i_0] [i_0] [2LL] = ((arr_6 [i_2]) ^ (((/* implicit */int) (unsigned char)85)));
                    }
                } 
            } 
            arr_35 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((-530742674655453696LL) + (9223372036854775807LL))) >> ((((-(min((arr_23 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] [i_2]), (arr_23 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]))))) - (1235184983072380422LL)))));
            arr_36 [i_2] = arr_1 [i_2] [i_2];
        }
        for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_28 |= ((/* implicit */unsigned char) arr_11 [i_0] [i_8] [i_8]);
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0])) > (arr_6 [i_8])))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_38 [i_0] [i_8] [8LL])) : (((/* implicit */int) (_Bool)1)))) < (((1464857761) << (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_8])) - (199))))))))));
            var_30 -= ((/* implicit */short) min((arr_14 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))));
            arr_40 [i_8] = ((/* implicit */unsigned long long int) var_18);
        }
        for (short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 1000734383142037017ULL))));
                            arr_54 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_9] [i_10]))))) ? ((+(776631733924932049ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_9]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_18 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]))))))));
                            arr_55 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_53 [i_9] [i_10] [i_11]);
                        }
                        var_32 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_17))))));
                        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_11] [i_11])) / (947825158969255498ULL)))) ? (((((/* implicit */unsigned int) arr_24 [i_0] [(signed char)17] [i_10] [i_0] [i_10] [i_0])) / (1859817302U))) : (((/* implicit */unsigned int) arr_25 [i_11] [i_9] [(short)5]))))));
                        arr_56 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_42 [i_11] [i_0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        {
                            arr_65 [i_0] [i_9] [i_13 + 2] [i_14] [i_15] = ((/* implicit */signed char) arr_48 [i_0]);
                            arr_66 [i_0] [i_9] [i_9] [i_14 + 1] [i_15] [i_15] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_18 [i_9] [i_13 + 1] [i_13 + 3] [i_13] [i_14 + 1])))) == (((/* implicit */int) max((arr_50 [i_9] [i_13 + 1] [i_15] [i_15]), (((/* implicit */short) arr_16 [i_0] [i_13 + 1] [i_14])))))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_9] [i_9] [i_9])) ? (-530742674655453694LL) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [i_9] [i_9]))))), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) 2340778733U))));
        }
    }
    for (long long int i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
    {
        arr_70 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 947825158969255498ULL)) ? (arr_64 [i_16] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_16] [(unsigned short)9] [i_16])))))) ? (((((/* implicit */_Bool) 207957966U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)14073)))) : (((/* implicit */int) ((_Bool) (unsigned short)51709))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_16] [i_16] [i_16])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_16] [i_16])) ? (-8292018127472103865LL) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_16] [i_16])))))))))));
        arr_71 [i_16] [i_16] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-107)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_16] [i_16] [i_16] [i_16] [(signed char)7] [i_16]))) + (var_10)))));
    }
    for (long long int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) != (2605221308U)));
        arr_75 [i_17] = ((/* implicit */unsigned long long int) ((short) var_2));
    }
    var_36 = ((/* implicit */unsigned int) ((unsigned short) var_9));
    var_37 = ((/* implicit */short) ((2340778733U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))))))));
}
