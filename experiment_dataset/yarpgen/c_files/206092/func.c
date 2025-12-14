/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206092
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_10)) + (4294967295U)))) ? (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_0)) + (20))))) : (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))), (max((((-1LL) * (((/* implicit */long long int) 1051116434)))), (((/* implicit */long long int) ((4294967295U) - (((/* implicit */unsigned int) 1051116434)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -134217728)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), ((unsigned short)15)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1 - 1] [i_1]), (arr_4 [i_1] [i_0] [i_0])))), (16531365284123816542ULL)));
            arr_7 [i_1] [i_0] [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((4194303U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15652))) : (var_6)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_16))) / (-3973198046249473585LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))) : (((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_1 + 3] [i_1] [(signed char)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43863)))))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -3973198046249473598LL)) ? (((/* implicit */long long int) var_15)) : (var_2))) & ((-(arr_2 [i_0] [i_2] [i_2])))));
            var_19 = ((/* implicit */unsigned int) max(((~(var_2))), (((/* implicit */long long int) ((unsigned int) (unsigned short)65521)))));
        }
        /* LoopNest 2 */
        for (long long int i_3 = 4; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 4; i_4 < 21; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)192)), (min((var_12), ((short)-2048))))))));
                    arr_17 [i_0] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) (unsigned short)21396))))) ? (max((((/* implicit */int) (unsigned short)21)), (-1260169826))) : (((((/* implicit */int) (unsigned char)255)) % ((-2147483647 - 1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_3]))))))));
                    var_21 = ((/* implicit */_Bool) (signed char)-8);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (signed char)-1))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [5LL] [i_4] [i_4] [i_4] [i_0]))) != (var_6))) ? ((~(17669281480674676751ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3 + 2])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (-583709554) : (((/* implicit */int) (unsigned char)0))))), (arr_9 [i_4 - 3] [i_3 + 1] [i_4 - 3]))))));
                        arr_20 [i_0] [i_4] [i_0] [i_5] [(signed char)7] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) != (arr_4 [5LL] [i_3] [(short)2])))), ((((_Bool)1) ? (129024U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            var_23 = ((/* implicit */int) (short)32767);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        arr_27 [10LL] [i_7] [i_6 - 1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)33388);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) (+(((-1612223537) / (((/* implicit */int) (unsigned char)24))))));
                            arr_30 [i_0] [i_6] [i_6] [i_8] [i_6] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_6 - 1])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (short)-26322))));
                            arr_31 [i_0] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_6 - 1] [i_0] [i_6 - 1])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_10] [i_10] [19ULL] [(unsigned char)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)2), ((signed char)58)))) ^ ((-(((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */int) (short)26321)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_36 [i_0] [i_10] [i_8] [i_10] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)26321)), ((-(-9223372036854775796LL))))), (((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) -1771496973)), (216620899U))))))));
                            var_25 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_13))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (+(arr_8 [i_6] [i_6 - 2] [i_8])));
                            arr_39 [i_0] [i_6] [i_7] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                            arr_40 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_6 - 1] [i_0] [i_0] [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned int) ((var_10) | (((int) arr_42 [i_0] [i_0] [i_12]))))) : (min((((/* implicit */unsigned int) (unsigned short)65522)), (((14U) >> (((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        arr_50 [i_14] [(signed char)13] [i_13] [i_14] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_18 [(signed char)15] [i_14] [i_13] [i_14] [(signed char)21])) ? (min((67108863U), (((/* implicit */unsigned int) arr_0 [i_0] [(signed char)14])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) -1771496973))))))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [(unsigned short)13])) ? (((/* implicit */int) (short)22077)) : (var_10)))) && (((/* implicit */_Bool) (-(var_2)))))))));
                        arr_51 [(short)21] [i_14] [i_13] [i_0] = ((/* implicit */short) max((var_6), (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)248))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) min((arr_43 [i_0] [i_12] [i_12] [i_12]), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)24))))));
            arr_52 [i_12] [i_0] [i_0] = ((/* implicit */short) var_13);
        }
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            arr_55 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((signed char) 7228097651394587893ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (var_6)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-21)) | (((/* implicit */int) (unsigned char)239))))), (arr_47 [i_0] [i_15])))));
            arr_56 [i_0] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [10] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (-(3562317132U)))) ? (((((/* implicit */_Bool) arr_3 [i_15] [i_0])) ? (((/* implicit */unsigned long long int) 7428156397783799243LL)) : (13881117355131950725ULL))) : ((+(18039810752711990259ULL)))))));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            arr_59 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) -1921467350));
            arr_60 [(unsigned char)2] = ((/* implicit */unsigned int) (-(arr_23 [i_0] [i_16] [i_16])));
        }
        var_30 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_3)) > (954264384)))) == (((/* implicit */int) min(((short)16014), (((/* implicit */short) var_13))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-29853)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    var_31 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_64 [16U] [(signed char)20])) | (-437800272))) / ((~(((/* implicit */int) arr_24 [i_0] [i_17] [i_0]))))))) & (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-2271)), (2577426161U)))), (((long long int) (unsigned short)15))))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            {
                                var_32 &= ((/* implicit */unsigned int) ((((long long int) (+(((/* implicit */int) (unsigned short)8636))))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (short)-22076)) ? (7428156397783799243LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) arr_62 [i_0] [i_0]))))));
                                arr_76 [i_0] [i_17] [10LL] [i_18] [i_18] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)78)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122)))))))) ? (((((/* implicit */_Bool) -1833042312)) ? (31U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)206))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) 8334334929145910262LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (2650577655U) : (((/* implicit */unsigned int) arr_53 [i_18] [i_18])))))))))));
                                arr_77 [i_0] [i_0] [(short)8] [i_19] [i_20] &= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_66 [i_17])))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) 1056352901365646121LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1688690314093526559ULL) : (((/* implicit */unsigned long long int) arr_47 [i_19] [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_78 [i_18] [i_18] = ((/* implicit */unsigned short) (~((-(-437800272)))));
                }
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
    {
        arr_81 [i_21] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((469762048) >> (((72057593903710208ULL) - (72057593903710186ULL)))))))));
        var_33 = ((/* implicit */int) (-(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_80 [i_21] [(unsigned short)14]))), (((/* implicit */unsigned long long int) ((signed char) 8380416U)))))));
        arr_82 [i_21] [i_21] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -6779238508403373756LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)15)))))), (min((max((arr_80 [i_21] [i_21]), (((/* implicit */unsigned long long int) (unsigned short)15765)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_16)))))))));
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 3) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18374686479805841403ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65497))) : (3911926257736070961LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned long long int) arr_62 [i_22] [i_22])) : (var_6))))));
        var_35 = (-(arr_34 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]));
        arr_87 [i_22] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) | (arr_42 [i_22] [i_22] [i_22])));
        arr_88 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11928))))) % (arr_68 [i_22] [i_22] [i_22] [i_22] [i_22])));
    }
}
