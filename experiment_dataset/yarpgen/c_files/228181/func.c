/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228181
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_12 [i_0 + 1] [i_1 - 1] [i_0] [i_3] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [i_3 - 1] [i_4 - 2])))));
                            arr_15 [i_0] [(unsigned short)14] = ((/* implicit */long long int) ((_Bool) ((_Bool) (signed char)119)));
                        }
                        arr_16 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-119)), (min((((/* implicit */int) (signed char)-49)), (1177706300))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+((-(((/* implicit */int) max(((short)-4), (((/* implicit */short) (signed char)-107))))))))))));
        arr_17 [i_0] = ((/* implicit */unsigned char) (signed char)103);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            arr_21 [i_0 + 3] [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_5 + 2] [i_0] [i_5 + 2] [i_5 + 4] [i_5 + 1])) && (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_5] [24ULL] [i_5 + 3] [i_5 + 1]))))));
            arr_22 [i_0 - 2] [i_0] [i_0] = (!(((/* implicit */_Bool) ((int) (signed char)-127))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                arr_25 [i_0 + 2] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_0 + 3] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0])))) >> (((((/* implicit */int) arr_6 [i_0])) - (6682)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_0 + 3] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0])))) >> (((((((/* implicit */int) arr_6 [i_0])) - (6682))) - (55))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) var_12);
                    arr_28 [i_0 + 2] [i_5] [i_0] [i_7] [i_6] = ((/* implicit */unsigned int) (signed char)119);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 - 2]))))) != (((/* implicit */int) arr_23 [i_0 - 2] [i_0 + 3]))));
                    arr_29 [i_0] [i_5 + 4] [i_5 + 4] = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_6] [i_0 + 2] [i_0]) % (((/* implicit */int) (signed char)-107))));
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (+((~((+(((/* implicit */int) arr_4 [i_0] [i_5] [i_0]))))))));
                    arr_33 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned int) arr_24 [i_0] [i_5] [i_0])), (1981378574U))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_21 *= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_35 [i_0] [i_0] [i_0 - 2] [i_0 - 1]))))));
                    var_22 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) (signed char)94)))), ((-((+(var_1)))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_23 = ((unsigned long long int) (+(((/* implicit */int) arr_13 [i_9] [i_9] [i_5 + 4] [i_0 + 1] [i_0]))));
                        var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_37 [i_5 + 2] [i_5] [i_5 + 4] [i_0 - 1] [i_0 - 2]))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (unsigned char)251))));
                        arr_38 [i_10] [8] [i_10] [i_10] [(unsigned char)2] [i_0 + 1] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)199)) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_11 = 2; i_11 < 23; i_11 += 4) 
                    {
                        arr_42 [i_0] = ((((((/* implicit */int) arr_4 [i_0] [i_6] [i_9])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_5]))))))) ? (14020823363281091034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_5 - 1] [i_9] [i_11])) < (((/* implicit */int) var_12)))))));
                        arr_43 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] = ((/* implicit */_Bool) (+(((max((arr_36 [i_11] [i_6] [i_5] [i_0]), ((_Bool)0))) ? (((4425920710428460579ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14741))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_6] [i_9] [i_11])))))));
                    }
                    for (signed char i_12 = 1; i_12 < 24; i_12 += 2) 
                    {
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [(short)3] [i_0])) | (((/* implicit */int) arr_7 [i_6])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (arr_40 [i_0] [i_5] [i_6] [i_9] [i_12 - 1] [i_5] [i_9])))) == ((((_Bool)1) ? (((/* implicit */unsigned int) var_1)) : (1357500697U))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12 + 1] [i_0])) ? (((/* implicit */int) arr_0 [i_12 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_12 - 1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_9] [i_0]))))) : (arr_3 [i_0 + 3] [i_5] [i_6])));
                    }
                }
                for (short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    var_28 &= ((/* implicit */short) (~(((/* implicit */int) (signed char)112))));
                    arr_51 [i_5 + 2] [i_5 - 1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) 3543264294860829715ULL);
                    arr_52 [i_0] [i_5 + 4] [i_6] [i_13] [i_13] [i_13] = ((/* implicit */int) (signed char)(-127 - 1));
                    var_29 |= ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_36 [i_5 + 3] [i_5 + 4] [i_5 + 2] [i_5 + 4])))));
                    var_30 = ((/* implicit */int) ((unsigned short) var_14));
                }
            }
            for (signed char i_14 = 3; i_14 < 24; i_14 += 4) 
            {
                arr_55 [i_0] [i_5] [i_5 + 2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_12)))))))));
                /* LoopSeq 1 */
                for (signed char i_15 = 1; i_15 < 24; i_15 += 3) 
                {
                    arr_58 [i_0] [i_5] [i_14 - 2] [i_0] [(signed char)14] = ((/* implicit */unsigned int) (-(arr_47 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 4] [i_5 + 2])));
                    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1069547520))));
                }
            }
        }
        for (short i_16 = 1; i_16 < 21; i_16 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) var_12);
            arr_61 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (4425920710428460582ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
            var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)26)))))));
        }
    }
    for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 2) 
    {
        arr_64 [i_17] [i_17] = ((/* implicit */unsigned char) max((max(((!(((/* implicit */_Bool) arr_44 [i_17] [i_17] [i_17] [i_17] [i_17])))), ((_Bool)1))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44960)) ? (((/* implicit */int) arr_20 [17U])) : (arr_40 [i_17 + 2] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 2] [i_17] [i_17])))) > (arr_19 [i_17 + 2] [i_17 + 1])))));
        arr_65 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)200)) & (((((/* implicit */_Bool) arr_13 [i_17 + 2] [i_17] [i_17 + 1] [i_17 + 3] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            arr_68 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_32 [i_18] [i_18] [i_17]))) ? (((unsigned int) arr_32 [i_17] [i_18] [i_17])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_17 + 1] [i_17] [i_17])))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 2; i_19 < 24; i_19 += 4) 
            {
                for (unsigned long long int i_20 = 3; i_20 < 23; i_20 += 4) 
                {
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)20575))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(var_13))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */long long int) 5955441U)) : (-7673176673550220459LL)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_72 [(_Bool)1] [(_Bool)1] [i_19 - 2] [i_17] [i_19 - 2]))))) ? (((unsigned long long int) 5955438U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_17] [i_18] [i_19] [i_18] [i_18]))))))))));
                        var_35 = ((/* implicit */int) arr_59 [i_19 + 1]);
                        var_36 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)251))))))))));
                        arr_74 [i_17] [i_18] [21ULL] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65506))));
                        var_37 *= ((/* implicit */short) (~(((arr_47 [i_20 + 1] [i_20] [i_20 + 1] [(_Bool)1] [i_20 + 1]) | (arr_47 [i_17 + 1] [i_18] [i_19] [i_20 + 1] [i_19 - 1])))));
                    }
                } 
            } 
            arr_75 [i_18] [i_17] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) arr_37 [i_17 + 1] [i_17 + 2] [i_18] [i_18] [i_18])))) ? (arr_59 [i_17 + 3]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8)))))))));
            arr_76 [i_17] [i_18] [i_18] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (13207384011378709092ULL)));
        }
    }
    var_38 = var_4;
    var_39 = ((/* implicit */long long int) (((_Bool)1) ? ((~((-(9937434405021441653ULL))))) : (((/* implicit */unsigned long long int) (-(var_15))))));
    var_40 = ((/* implicit */long long int) ((signed char) (+((+(1152921504606846976ULL))))));
}
