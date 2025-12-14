/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26192
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) var_1))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_0]))))) ? (min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) max((var_16), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        arr_7 [i_1] = max(((unsigned char)100), ((unsigned char)125));
        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) var_16)) >= (((/* implicit */int) var_0))))));
    }
    for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        var_21 &= ((/* implicit */_Bool) var_1);
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_3 + 1] [i_3] [i_3 - 4] = ((/* implicit */long long int) ((min((((/* implicit */int) (unsigned char)49)), ((+(((/* implicit */int) var_14)))))) <= (var_11)));
                    arr_19 [i_2] [i_3] [i_2 + 1] [i_4] = ((/* implicit */short) arr_12 [i_3]);
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_22 = ((/* implicit */long long int) var_9);
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5])) % (((/* implicit */int) arr_6 [i_5])))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) var_1))))));
                            arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_16 [i_7] [i_8 + 1] [i_7] [i_7])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 4; i_10 < 17; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((arr_32 [i_10 + 1] [i_10] [i_10 - 3] [i_10 - 2] [i_10] [i_10]) % (arr_32 [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 1] [5])));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_6 [i_10 - 4]))));
                            var_27 = ((/* implicit */signed char) (short)-13293);
                        }
                    } 
                } 
                arr_38 [i_7] = ((/* implicit */unsigned long long int) arr_31 [i_7] [i_5] [i_5] [i_5] [i_7]);
            }
            for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                arr_41 [i_6] [i_12 + 2] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)-48)), ((unsigned short)24222)));
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6] [5ULL]))) + (var_7))) : (((/* implicit */unsigned long long int) 3406723446178208165LL)))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_12 - 1] [i_12 + 1] [i_12 + 3] [i_12] [i_12 + 1] [i_12])) | (787857802))) << ((((((-(((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 2] [i_12] [i_12] [i_12 + 2] [i_12])))) + (16))) - (15))))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_30 = arr_4 [i_6];
                            arr_47 [i_13] [i_13] [i_6] [i_6] [i_13] = ((/* implicit */unsigned long long int) (+(((arr_24 [i_13] [i_12 + 1] [i_14 + 3]) ? (((/* implicit */int) max(((short)-25646), ((short)5453)))) : (((((/* implicit */_Bool) 10577009801520228281ULL)) ? (29255664) : (((/* implicit */int) var_15))))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) max((arr_17 [i_5] [8]), (((/* implicit */short) arr_42 [i_5] [i_6] [i_14 + 4] [i_6] [i_14] [i_13]))))) : (((((/* implicit */_Bool) (+(var_7)))) ? ((+(((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_0)))))))))));
                            arr_48 [i_5] [i_5] [15LL] [i_5] [i_13] = min((-3969101653172461381LL), (((/* implicit */long long int) (short)-22777)));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_12))))) < ((-(((/* implicit */int) arr_11 [i_12 + 3] [i_13]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    for (int i_16 = 1; i_16 < 15; i_16 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 29255664)) ? (((/* implicit */int) (unsigned short)25701)) : (((/* implicit */int) (unsigned short)14095))));
                            arr_55 [(unsigned short)17] [(unsigned short)17] [i_16] [i_16] [i_16 + 3] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_10)))), (((arr_35 [i_16 - 1] [i_16 + 2] [i_16] [i_15] [i_12 + 2]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_35 [i_16 + 1] [i_16 + 2] [i_16 + 3] [i_12 - 1] [i_12 - 1]))))));
                            var_34 -= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_36 [i_12] [(unsigned char)12] [i_6] [i_15] [i_16 - 1] [i_15])), (((long long int) arr_50 [i_16 - 1] [i_16] [i_16 + 2] [i_16] [i_16 + 2]))));
                        }
                    } 
                } 
            }
            for (short i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                var_35 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55209)) ? (arr_54 [i_5] [i_5] [i_17] [i_5]) : (arr_54 [i_5] [i_5] [i_5] [i_6]))))));
                /* LoopSeq 3 */
                for (unsigned short i_18 = 4; i_18 < 17; i_18 += 2) 
                {
                    var_36 = max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-48)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5]))))))), ((((_Bool)1) ? (((/* implicit */int) ((17345857187075400348ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71)))))) : (((/* implicit */int) max((((/* implicit */short) var_16)), (var_9)))))));
                    var_37 = ((/* implicit */signed char) arr_57 [i_18 + 1] [i_18 - 4]);
                    arr_62 [i_6] [16] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_5] [3ULL] [i_17] [i_18 + 1])) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((var_14), (arr_36 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5])))))))));
                    arr_63 [i_6] = ((/* implicit */signed char) min((((int) (!(((/* implicit */_Bool) (unsigned short)14095))))), (((min((1695210042), (((/* implicit */int) var_3)))) - (((arr_53 [i_5] [i_5] [i_6] [i_17] [14LL]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
                }
                for (unsigned char i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_17])))) ? (((((/* implicit */int) arr_14 [i_17])) >> (((((/* implicit */int) var_2)) - (38399))))) : (((/* implicit */int) arr_40 [i_19 - 2] [i_19 - 2] [i_19])))))));
                    arr_67 [i_5] = ((/* implicit */_Bool) (+((~(arr_16 [i_19] [i_19 + 1] [i_19] [i_6])))));
                    arr_68 [i_5] [i_6] [(unsigned char)13] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((unsigned long long int) var_6))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_19 + 1])), (arr_57 [i_19 - 2] [i_19 - 2]))))));
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5]))) * (((/* implicit */int) ((((((/* implicit */int) var_13)) % (((/* implicit */int) (signed char)-57)))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_46 [i_5] [i_6] [i_6] [i_19])) : (((/* implicit */int) arr_52 [i_17])))))))));
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_20])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_50 [i_5] [i_5] [i_5] [i_5] [(signed char)6])))), (((/* implicit */int) (short)-30755))))) ? (((((((/* implicit */int) (short)-22777)) + (2147483647))) << (((((/* implicit */int) (unsigned short)51686)) - (51686))))) : (((/* implicit */int) min((arr_27 [i_19] [i_6] [i_17]), (arr_27 [i_19] [i_19 + 1] [i_20]))))));
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max(((short)-10030), (((/* implicit */short) (unsigned char)23))))) ? (arr_49 [i_5] [i_6] [i_19 + 1] [i_19 - 2] [i_19 + 2] [i_19 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_5] [i_5] [i_5] [i_5]) && (((/* implicit */_Bool) arr_56 [i_17] [i_20] [i_20] [i_20])))))))))))));
                    }
                }
                for (short i_21 = 0; i_21 < 18; i_21 += 4) 
                {
                    arr_73 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (~(((long long int) 1056846536))));
                    var_42 = ((/* implicit */unsigned short) var_12);
                    arr_74 [i_6] [i_6] [i_6] [i_21] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_5] [i_21]))))) - (var_8)));
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1594008557)) || (((/* implicit */_Bool) (unsigned char)99)))), (min(((_Bool)0), ((_Bool)1))))))));
                    arr_75 [i_21] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16401926863036651261ULL))))) : (((/* implicit */int) var_3))));
                }
            }
            arr_76 [i_5] [6ULL] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (arr_22 [i_6]) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))) - (((((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5])))))));
            arr_77 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) ((((/* implicit */int) max(((short)28543), (((/* implicit */short) (_Bool)0))))) * (((((/* implicit */_Bool) 4195213245U)) ? (((/* implicit */int) var_12)) : (var_11)))))) : (arr_23 [i_5])));
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((arr_15 [i_5] [i_5]) - (arr_15 [i_5] [i_6]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned short i_22 = 2; i_22 < 16; i_22 += 2) 
        {
            var_45 = ((/* implicit */unsigned int) max((((_Bool) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_15)))))), ((!(((/* implicit */_Bool) var_11))))));
            arr_82 [i_22 - 1] [i_22 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7542101441581430612LL), (((/* implicit */long long int) arr_17 [i_22 - 2] [i_22 + 1]))))) ? (((/* implicit */int) min((arr_17 [i_22 + 2] [i_22 - 1]), (arr_17 [i_22 + 1] [i_22 - 1])))) : (((((/* implicit */_Bool) 3592269792U)) ? (((/* implicit */int) arr_17 [i_22 + 2] [i_22 - 2])) : (((/* implicit */int) var_5))))));
            var_46 = ((/* implicit */unsigned int) (!((_Bool)1)));
        }
        for (signed char i_23 = 1; i_23 < 16; i_23 += 4) 
        {
            arr_87 [i_5] [i_5] = var_6;
            var_47 = ((/* implicit */_Bool) 4584080596870195512LL);
            var_48 = ((/* implicit */unsigned long long int) (signed char)-48);
        }
        var_49 = ((/* implicit */long long int) var_12);
    }
    var_50 = ((/* implicit */_Bool) var_11);
    var_51 = ((/* implicit */_Bool) min((((min((var_11), (((/* implicit */int) var_0)))) + (((/* implicit */int) ((_Bool) var_7))))), (((/* implicit */int) (short)-7325))));
    var_52 = ((((/* implicit */_Bool) ((((/* implicit */long long int) max((2122553865U), (((/* implicit */unsigned int) var_1))))) / (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_12)))))))) : ((~(539087380U))));
    var_53 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (9118131656551449551LL)));
}
