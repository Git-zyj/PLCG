/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46363
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
    var_14 = (signed char)-39;
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1343705239846851606ULL))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) arr_2 [i_0]))));
        var_17 = ((/* implicit */_Bool) (~(min((((/* implicit */int) var_1)), (-2147483618)))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 3; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    arr_14 [(unsigned char)13] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) (signed char)-118))))));
                    var_18 = arr_0 [i_2 + 2];
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        arr_19 [i_2] [i_1] [8LL] [i_2] [(unsigned short)9] [i_2] [i_2] = ((/* implicit */unsigned short) arr_15 [4LL] [4LL] [i_1] [i_4] [4LL] [(signed char)13]);
                        var_19 = ((/* implicit */short) (-(17103038833862700005ULL)));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 9218868437227405312LL))));
                    }
                    var_21 ^= ((/* implicit */long long int) arr_10 [i_1] [i_3] [i_2] [i_4]);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned short)3506))));
                        arr_25 [i_1] [i_2] [(signed char)3] [i_6] [i_1] = (!((!(arr_6 [i_1] [i_2]))));
                        arr_26 [i_1] [10LL] [10LL] [i_3] [(short)4] [i_3] [(unsigned short)0] |= ((((/* implicit */int) var_2)) > (((/* implicit */int) var_9)));
                    }
                    arr_27 [i_1] [i_1] [i_2] [(short)13] [i_3] [i_6] = ((/* implicit */signed char) ((18U) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [(unsigned char)4] [5] [i_1])))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) (unsigned short)10571);
                    arr_30 [i_1] [(short)13] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)3352)), (1879048192U)))));
                }
                arr_31 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((17103038833862700005ULL), (((/* implicit */unsigned long long int) var_0))))) ? (max((((/* implicit */int) (short)-19767)), (var_10))) : (((/* implicit */int) ((unsigned char) -3820397720374690927LL))))) ^ (((/* implicit */int) (unsigned char)199))));
                arr_32 [(short)10] [(short)10] [(signed char)6] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)14540), (((/* implicit */short) (signed char)96))))) ? (max((arr_20 [i_1]), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) arr_2 [i_1 - 1]))))) ? (((/* implicit */int) max((arr_1 [i_1 + 1]), (((/* implicit */short) (unsigned char)48))))) : (((/* implicit */int) var_1)));
                var_24 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)14540))))));
            }
            var_25 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_20 [i_1 - 1])))));
        }
        for (long long int i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_10 = 2; i_10 < 13; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((signed char) max((arr_39 [i_9] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1]), (arr_39 [(short)3] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 2])))))));
                            arr_43 [i_9] [i_9] [(_Bool)1] [i_1] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5U))));
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)41)) ? ((+(min((((/* implicit */unsigned long long int) (signed char)127)), (arr_29 [i_11] [i_10]))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (max((-2147483618), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max(((short)-8), (((/* implicit */short) var_11))))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((-2480616739343311411LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9])))))))) ? ((-(var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
            var_29 += ((unsigned short) (+(arr_15 [i_1] [i_1 - 3] [i_9] [i_9] [i_1 + 1] [i_1])));
            var_30 -= max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_1 - 3]))))), ((-(arr_29 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2480616739343311412LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)54609), ((unsigned short)24359))))) : (1740462997U)))) ? (((/* implicit */int) ((unsigned char) ((arr_2 [i_14]) ^ (((/* implicit */long long int) var_3)))))) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1]))));
                        arr_51 [i_13] [i_13] [i_13] |= ((/* implicit */_Bool) max((arr_3 [i_1] [(unsigned short)11]), (((/* implicit */unsigned long long int) ((int) min((arr_2 [i_9]), (((/* implicit */long long int) (unsigned char)48))))))));
                        arr_52 [i_1] = ((/* implicit */unsigned short) (+(3778950735523247850LL)));
                    }
                } 
            } 
        }
        for (long long int i_15 = 2; i_15 < 12; i_15 += 4) /* same iter space */
        {
            arr_55 [i_15] [i_1] [i_15] = ((/* implicit */unsigned int) (-((+(((((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15])) ^ (((/* implicit */int) (signed char)35))))))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((int) arr_47 [i_1] [i_1]))))) ^ (((4294967295U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)125))))))))))));
        }
        /* vectorizable */
        for (long long int i_16 = 2; i_16 < 12; i_16 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) (-(((var_4) >> (((15922203929884064875ULL) - (15922203929884064844ULL)))))));
            arr_59 [(short)1] [(short)1] [i_1] = ((/* implicit */short) (+((-(((/* implicit */int) var_6))))));
            var_33 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) -3055122992815652691LL)))));
        }
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (unsigned short)8160))));
        var_35 = ((/* implicit */long long int) var_1);
    }
    /* LoopSeq 2 */
    for (short i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        arr_62 [i_17] [i_17] = (unsigned char)41;
        var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)115)), ((short)-17163)))), ((~(arr_61 [i_17] [i_17])))));
        arr_63 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((int) -3778950735523247822LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1879048173U)));
    }
    for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) (-(min((arr_61 [i_18] [6LL]), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-1))))))));
        arr_66 [i_18] &= ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (signed char i_19 = 1; i_19 < 16; i_19 += 3) 
        {
            var_38 += ((short) ((((((/* implicit */_Bool) arr_68 [i_18] [i_19] [i_19])) ? (9056427964937803306LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [16] [i_18]))))))));
            var_39 |= ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) arr_65 [(unsigned char)3] [i_19])))) ? (((((/* implicit */_Bool) (short)-26426)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_19]))) : (-690313231816135130LL))) : (((/* implicit */long long int) arr_61 [i_19 - 1] [2]))))));
        }
        for (unsigned char i_20 = 2; i_20 < 17; i_20 += 4) 
        {
            arr_72 [i_18] = ((/* implicit */short) -145857979);
            var_40 &= ((/* implicit */long long int) max((((/* implicit */int) arr_60 [i_18])), (min((((/* implicit */int) ((((/* implicit */int) arr_60 [i_20])) > (-1446069338)))), ((~(((/* implicit */int) arr_60 [i_18]))))))));
            arr_73 [13U] [15LL] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(max((-697373943620717784LL), (((/* implicit */long long int) (unsigned char)233))))))) ? (((var_4) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) arr_65 [i_18] [16ULL])) : (var_7)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14542)) % (524160))))));
            var_41 ^= ((/* implicit */unsigned short) max(((-(arr_70 [i_20 + 2] [i_18]))), (((3414089719346661833ULL) >> ((((~(((/* implicit */int) (unsigned short)8160)))) + (8169)))))));
            var_42 = ((/* implicit */unsigned short) 2251799813652480LL);
        }
        arr_74 [i_18] = ((/* implicit */signed char) ((8589934591LL) / (((/* implicit */long long int) ((arr_61 [10LL] [10LL]) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-27))))))))));
    }
}
