/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47931
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)19848));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32925)) != (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) ((long long int) -1316901056565277570LL));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_10 [i_0] [i_1] [i_2] [13U] = ((/* implicit */unsigned char) var_2);
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)45))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1316901056565277543LL)));
                        var_20 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-14))));
                        arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)32620));
                        var_21 &= ((/* implicit */unsigned char) ((11041857578922999859ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))));
                        var_22 = ((/* implicit */signed char) var_1);
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_23 *= ((((/* implicit */_Bool) (signed char)121)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3590))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16869)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)16869))))) <= (((unsigned int) 1316901056565277569LL))))));
                        arr_22 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1448477041669059240LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (20ULL)));
                    }
                    arr_23 [i_0] = ((/* implicit */unsigned short) ((5141089832985137805ULL) <= (((/* implicit */unsigned long long int) 1316901056565277542LL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)25))) : (13857203205176535385ULL))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_9))));
                        arr_26 [i_0] [i_1] [i_2] [i_3] [(unsigned short)5] [i_1] = var_8;
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */int) var_4);
                    }
                }
            }
            for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_34 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62223)) ? (((/* implicit */unsigned long long int) 1906028802U)) : (18446744073709551607ULL)));
                    var_27 = ((((/* implicit */_Bool) (unsigned short)61945)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (2757230707415427597ULL));
                    arr_35 [i_0] [i_1] [i_7] [i_1] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)12564))));
                }
                for (unsigned char i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)62223)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)3))));
                    arr_38 [i_7] [i_1] [i_7] [i_9] = ((18446744073709551596ULL) ^ (((/* implicit */unsigned long long int) arr_33 [i_7 + 1] [i_7] [i_9] [i_9] [i_9 - 2] [i_9])));
                }
                for (unsigned char i_10 = 3; i_10 < 15; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((int) var_1));
                        arr_44 [i_7] [i_1] [i_7] [i_10] [i_11] = ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)23)));
                        var_30 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                    }
                    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_45 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_7] [i_7 + 1])) ? (9065143586203797159LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_46 [i_7] [(signed char)4] [i_7] [i_7] = ((/* implicit */signed char) var_3);
                arr_47 [i_7] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 4294967270U)) : (-4454004069373247349LL)));
            }
            arr_48 [i_0] [i_1] = -730246893;
        }
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
        {
            arr_51 [i_0] [i_12] = (+(-5691132409734104339LL));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 4; i_15 < 15; i_15 += 4) 
                        {
                            var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 67108736)) ? (((/* implicit */unsigned int) -1)) : (1229427438U)));
                            arr_59 [i_0] [i_12] [i_13] [i_14] [i_12] |= ((unsigned int) ((unsigned short) -1316901056565277570LL));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 2) /* same iter space */
                        {
                            var_33 |= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 12U)) ? (13305654240724413819ULL) : (((/* implicit */unsigned long long int) 21U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                            arr_62 [i_16] [i_13] [i_13] [i_0] = ((/* implicit */signed char) ((unsigned char) 0LL));
                            var_34 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned short)37770))));
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) /* same iter space */
                        {
                            arr_66 [i_17] [i_14] [i_13] [i_12] [i_13] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                            arr_67 [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20)))));
                            arr_68 [i_13] = ((/* implicit */long long int) var_10);
                            var_35 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(0LL)))) ? (((((/* implicit */_Bool) (unsigned char)159)) ? (5141089832985137826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                        }
                        for (short i_18 = 2; i_18 < 15; i_18 += 3) /* same iter space */
                        {
                            arr_72 [i_13] [i_13] [i_13] [(short)9] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18471))));
                            arr_73 [i_13] [i_12] [i_13] = ((/* implicit */unsigned int) ((long long int) ((1577959543U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_4))));
                            arr_74 [i_0] [i_13] [i_13] [i_14] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47096)) ? (((/* implicit */int) (short)24654)) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        for (short i_19 = 2; i_19 < 15; i_19 += 3) /* same iter space */
                        {
                            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2838161831829505584ULL)) ? (((/* implicit */int) (unsigned short)32620)) : (((/* implicit */int) (short)-11629))));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((unsigned int) arr_64 [i_0] [i_19 - 1] [i_13] [7U] [i_14 - 1])))));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)9)))))));
                            arr_78 [i_0] [i_12] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-3))))) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned short)65527))));
                        }
                    }
                } 
            } 
        }
        var_40 = ((/* implicit */signed char) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) /* same iter space */
    {
        arr_81 [i_20] [i_20] = ((/* implicit */short) ((long long int) (unsigned short)65527));
        var_41 += ((/* implicit */long long int) ((unsigned char) (unsigned short)13859));
    }
    for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) /* same iter space */
    {
        var_42 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) -744503028)), (-5601921825252476626LL)));
        arr_84 [i_21] = ((/* implicit */_Bool) var_13);
    }
    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_15))));
    var_44 = ((((/* implicit */_Bool) (unsigned short)32620)) ? (13305654240724413811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
}
