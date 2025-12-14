/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33485
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 -= ((/* implicit */signed char) 4998018447934924016LL);
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((1756428709) | ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((arr_1 [i_1]) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)27))))));
        arr_6 [i_1] [(unsigned short)6] &= ((/* implicit */unsigned int) (unsigned short)16);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) (unsigned char)242)));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15139))) | (arr_8 [i_1] [i_2 - 2] [i_3]))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)40))));
        }
    }
    /* LoopSeq 3 */
    for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] &= ((/* implicit */signed char) arr_0 [i_5 + 1] [i_5 + 1]);
        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (arr_19 [i_5])))) ? (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (var_11))) : (((/* implicit */int) ((signed char) var_18))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] &= arr_22 [i_6];
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [4])) ? (arr_1 [i_6]) : (((/* implicit */int) (short)5050))))))));
    }
    for (int i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) 31))), ((signed char)109))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
            {
                arr_30 [i_9] &= ((/* implicit */unsigned long long int) (unsigned char)44);
                var_27 &= ((/* implicit */unsigned char) var_18);
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) 14275245176373086633ULL)))))));
                    var_29 -= ((/* implicit */unsigned int) ((arr_25 [i_7] [i_7 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_35 [i_11] [i_7 + 1] [i_7] &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (9223372036854775807LL)))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((4294967295U) + (((unsigned int) var_10)))))));
                    var_31 -= ((/* implicit */unsigned int) (unsigned char)183);
                }
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    var_32 -= ((/* implicit */signed char) var_9);
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_18 [i_7]))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        arr_41 [i_10] [i_10] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(_Bool)1] [i_12] [2ULL] [i_8]))) : (656078857U))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [(unsigned char)11] [(unsigned char)10])))))));
                        arr_42 [i_10] &= ((/* implicit */unsigned long long int) ((long long int) var_2));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_46 [i_10] &= ((/* implicit */short) arr_26 [i_7 - 2]);
                    var_34 -= ((/* implicit */short) var_8);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    arr_49 [i_7] [i_10] [i_10] [i_10] [0U] [i_15] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((7099117187433243267ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8] [i_15] [i_10] [i_8] [i_7]))))))) & (((((/* implicit */_Bool) var_4)) ? (arr_33 [i_15] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_7 + 1] [2LL] [i_7] [i_10] [2LL])))))));
                    var_35 &= ((/* implicit */unsigned long long int) (signed char)29);
                }
                /* LoopSeq 3 */
                for (short i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    arr_52 [i_7] [i_7] [i_10] [i_8] [i_10] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) (-9223372036854775807LL - 1LL))));
                    arr_53 [i_7 - 1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_34 [i_7] [i_8] [i_7] [i_8] [(unsigned char)10] [i_8]))));
                }
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((unsigned long long int) (short)5063))));
                    var_38 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_39 [i_7] [i_8] [2ULL] [i_7 - 2] [i_17])) % (((/* implicit */int) var_12)))) * (((/* implicit */int) ((arr_27 [i_7] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                }
                for (unsigned short i_18 = 2; i_18 < 13; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 2; i_19 < 13; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (unsigned short)65535))));
                        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-5035)) : (arr_21 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [(unsigned char)14] [i_8] [i_8] [i_8])) << (((var_6) - (867218604043005414LL)))))) : (((unsigned long long int) 7918408318921579610ULL))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((((/* implicit */unsigned long long int) 6494882307145894694LL)) <= (((unsigned long long int) arr_57 [i_7] [i_8] [i_8] [(unsigned short)0] [i_8]))))));
                        arr_61 [i_7 + 1] [i_19] [i_8] [i_10] [i_8] [i_8] [i_7 + 1] = 1967980148508381281ULL;
                        var_42 = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_43 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2147483641)))) - (((((/* implicit */_Bool) -5875139036576909669LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8993336677026453520ULL)))));
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) var_9))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                }
            }
            for (signed char i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                arr_65 [i_7] [i_8] [i_20] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_36 [i_7] [i_8] [i_20] [i_20]))))) <= (arr_55 [i_7] [i_7])));
                var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_63 [(signed char)0] [i_8] [i_20])));
                var_47 -= ((/* implicit */unsigned short) arr_26 [i_7]);
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    arr_69 [i_8] [i_8] [i_7] [6ULL] &= ((/* implicit */unsigned char) arr_67 [i_7] [i_8] [i_20]);
                    var_48 -= ((/* implicit */_Bool) var_1);
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (2711532271002554792ULL)))) ? (arr_25 [i_7 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-101)))))))));
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) var_9))));
                }
            }
            for (signed char i_22 = 2; i_22 < 11; i_22 += 1) 
            {
                arr_72 [i_7 - 2] [i_7] [(unsigned char)2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 - 1])) && (((/* implicit */_Bool) arr_59 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7]))));
                arr_73 [i_7] [i_22] [i_22] &= ((/* implicit */long long int) arr_19 [i_22]);
                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) arr_40 [i_8] [i_8] [i_22] [i_8] [i_8] [i_7] [i_7]))));
            }
            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((((unsigned int) arr_45 [i_7] [i_7] [i_7])) == (((/* implicit */unsigned int) arr_40 [i_7] [i_8] [i_8] [i_7] [i_8] [i_7 - 1] [i_8])))))));
            arr_74 [i_7 + 1] [(unsigned short)6] [i_7] &= ((/* implicit */_Bool) ((short) arr_68 [i_8] [i_8] [i_7] [(signed char)14] [(_Bool)1]));
        }
        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) var_13))));
        var_54 -= ((/* implicit */unsigned char) ((unsigned long long int) arr_64 [i_7]));
    }
}
