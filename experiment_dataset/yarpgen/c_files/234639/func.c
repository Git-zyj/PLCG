/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234639
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) var_14);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 4036476124285188867ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12670643283813341892ULL)))))) + (((((/* implicit */_Bool) (signed char)-11)) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) -1035814326158128802LL)))))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
            arr_6 [i_1] [10LL] [i_0] |= ((/* implicit */_Bool) ((((unsigned int) (_Bool)1)) | (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-10)))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 3])))))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) 12799102536413318694ULL);
                var_19 = (+(((/* implicit */int) arr_4 [i_2])));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_14 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_20 *= ((/* implicit */unsigned int) arr_7 [0] [0]);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_17 [i_0 - 1] [i_2] [i_2] [(_Bool)1] [i_5] [i_3] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0 - 2] [(short)1] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2])));
                        arr_18 [i_2] [i_4] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(5776100789896209714ULL))))));
                    }
                    arr_19 [i_4] [i_2] [(signed char)10] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-18))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [(short)0] [i_0 + 3] [i_3]));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [(unsigned short)10] [i_3])) | (((/* implicit */int) (short)25837))))))))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-18)))))));
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-1))));
                }
            }
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) var_4))) : (((((/* implicit */int) arr_12 [i_7] [i_8])) << (((5776100789896209713ULL) - (5776100789896209707ULL))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        arr_29 [(short)10] [i_2] [i_2] [i_8] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_26 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_8 + 1] [i_7] [i_2]))) : (((((/* implicit */unsigned long long int) arr_22 [i_2])) / (6624610902624354922ULL)))));
                        var_27 = ((/* implicit */signed char) arr_20 [i_0] [i_2] [i_0] [i_2] [i_9]);
                        var_28 = ((/* implicit */unsigned long long int) ((arr_23 [i_2] [i_2] [i_7]) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (arr_22 [i_2]))) : (((((/* implicit */_Bool) arr_13 [9ULL] [i_2] [i_7] [(signed char)9])) ? (1934511145) : (((/* implicit */int) arr_23 [i_2] [(unsigned short)8] [i_2]))))));
                    }
                }
                for (signed char i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    var_29 = (-(((unsigned long long int) (_Bool)0)));
                    var_30 -= ((/* implicit */unsigned long long int) var_8);
                    var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_10 - 2] [i_10 - 2]))));
                }
                var_32 = ((/* implicit */int) ((signed char) 3604270455U));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_33 = ((/* implicit */int) var_11);
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1035814326158128812LL)))) ? (1671732413) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))));
            }
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_35 -= (!(((/* implicit */_Bool) var_2)));
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0 + 1])) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_2] [i_0 + 1])) : (((/* implicit */int) arr_10 [(unsigned short)4] [i_2] [i_0 + 1]))));
                var_37 = ((/* implicit */unsigned int) (short)1167);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_38 *= ((12670643283813341884ULL) * (((/* implicit */unsigned long long int) 856961894U)));
                var_39 *= ((/* implicit */signed char) var_6);
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_40 = ((/* implicit */_Bool) max((var_40), (((((/* implicit */int) arr_10 [i_0 + 2] [(_Bool)0] [i_0 + 2])) > (((/* implicit */int) arr_10 [i_0 - 2] [8LL] [i_0 - 1]))))));
                    var_41 = var_2;
                    /* LoopSeq 3 */
                    for (signed char i_15 = 1; i_15 < 8; i_15 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (var_10)));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (-1035814326158128802LL))))));
                        var_44 = ((/* implicit */_Bool) var_1);
                        arr_47 [i_0] [i_2] [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-23)) && (((/* implicit */_Bool) 12670643283813341884ULL))));
                        arr_48 [i_2] [i_2] = ((/* implicit */unsigned short) var_0);
                    }
                    for (signed char i_16 = 1; i_16 < 8; i_16 += 2) /* same iter space */
                    {
                        arr_53 [i_0] [i_2] [i_13] [i_2] [i_16] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_37 [i_0 + 3] [i_2] [i_16 + 3])) + (var_0)));
                        var_45 = ((/* implicit */short) ((unsigned long long int) -1));
                    }
                    for (signed char i_17 = 1; i_17 < 8; i_17 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (~(((/* implicit */int) arr_39 [i_0 - 1])))))));
                        arr_56 [i_17] [i_14] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34033)) ? ((~(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) > (var_2)))))));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) (_Bool)1))))))));
                        var_48 = ((/* implicit */signed char) min((var_48), (var_12)));
                    }
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((-7105214023097725477LL) | (((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_14)))))))));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14336)))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_66 [i_2] [i_2] [i_2] [i_0] [i_20] [i_2] [i_13] = ((/* implicit */signed char) arr_30 [i_0] [7ULL] [i_2] [i_18]);
                        var_52 = ((/* implicit */_Bool) (-(arr_57 [i_18 - 1])));
                        var_53 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-279)) ? (1071644672) : (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 1) /* same iter space */
                    {
                        var_54 &= ((/* implicit */_Bool) ((short) arr_1 [i_0 - 2]));
                        var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */int) ((signed char) var_1))) + (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
                    {
                        arr_76 [i_0] [i_0] [i_2] [i_21] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_34 [i_13] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (((-1035814326158128802LL) * (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)13585)) : (((/* implicit */int) arr_27 [i_0]))));
                        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) ((arr_70 [i_0 + 3] [(unsigned short)2] [i_13] [i_21]) > (((/* implicit */int) (signed char)-10)))))));
                    }
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
                    {
                        var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) arr_61 [i_0 - 2] [i_2] [i_13] [i_21]))));
                        arr_79 [i_0 + 2] [0LL] [2ULL] [i_13] [i_21] [(signed char)8] [(signed char)8] &= ((/* implicit */unsigned long long int) (-(arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0])));
                        arr_80 [i_2] [i_21] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1035814326158128801LL))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        var_59 *= ((/* implicit */unsigned short) arr_50 [i_25] [i_21] [i_2]);
                        var_60 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_13)));
                        var_61 = ((/* implicit */signed char) (short)0);
                        var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) 7))));
                        arr_84 [5ULL] [5ULL] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((33) | (((/* implicit */int) var_12)))))));
                    }
                }
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 2) 
                    {
                        {
                            var_63 = ((/* implicit */unsigned short) (+(arr_59 [i_0 + 2] [i_0] [i_0] [i_2] [i_0] [i_0])));
                            var_64 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)25816))));
                            var_65 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                var_66 = ((/* implicit */unsigned int) arr_78 [4ULL] [i_0] [i_2] [i_0 - 1] [i_26]);
                var_67 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -27)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-31215)) + (31216)))))));
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_68 = ((47681701U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))));
                    /* LoopSeq 3 */
                    for (unsigned short i_31 = 1; i_31 < 8; i_31 += 1) 
                    {
                        var_69 = ((/* implicit */signed char) 50331648);
                        arr_100 [i_30] [i_30] [i_30] [i_30] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                    }
                    for (int i_32 = 0; i_32 < 11; i_32 += 3) 
                    {
                        arr_103 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) -7729852549955148578LL);
                        arr_104 [i_30] [i_29] [i_29] [i_2] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1035814326158128816LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_0 + 3] [i_2] [i_0 - 2] [i_2]))));
                    }
                    for (unsigned int i_33 = 0; i_33 < 11; i_33 += 3) 
                    {
                        var_70 = var_10;
                        arr_107 [i_29] [i_2] [i_29] [i_2] [i_0 + 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [5U] [i_0 - 2]))));
                        var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) (+((-(((/* implicit */int) (short)13585)))))))));
                    }
                    var_72 |= ((/* implicit */_Bool) 50331648);
                }
                var_73 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_29] [i_2] [i_0] [i_2]))));
            }
        }
    }
    var_74 &= ((/* implicit */short) (+(var_13)));
    var_75 = (-(((/* implicit */int) var_5)));
    var_76 = ((/* implicit */unsigned short) ((short) 12478565461026889678ULL));
}
