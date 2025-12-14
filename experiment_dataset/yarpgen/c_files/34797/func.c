/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34797
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)207))))) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)49)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) var_16)) : ((~(((var_1) ? (var_12) : (((/* implicit */int) var_15))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (var_17)))) ? (3749890733U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)228)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] &= ((/* implicit */unsigned short) (unsigned char)237);
            var_22 += ((/* implicit */signed char) arr_4 [i_1]);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (signed char)15))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)207))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (short)-31866)))) : (((/* implicit */int) (signed char)5))));
                var_26 = ((/* implicit */_Bool) arr_4 [i_0]);
            }
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) (~(arr_2 [i_0])));
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
                {
                    arr_14 [4ULL] [i_1] [i_4] [i_4] = ((/* implicit */int) var_13);
                    var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40348))) : (arr_11 [i_1] [i_3] [(signed char)8])));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)27)) && (((/* implicit */_Bool) -921613351885154162LL))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_0] [3LL] [i_0] [(signed char)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1]))) : (var_4)));
                    arr_19 [2ULL] [i_3] [i_1] [i_0] = (~(arr_17 [i_5 - 1] [i_5 + 1]));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [(signed char)9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (signed char)-65)) ? (arr_6 [i_0] [i_3] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))));
                    var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (int i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64)))))));
                    arr_26 [i_1] [i_7] = ((/* implicit */signed char) var_18);
                    arr_27 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (-1546273795) : (((/* implicit */int) var_13))))) < (var_9)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) 16735435591599916146ULL)) ? (((/* implicit */int) (signed char)-80)) : (-1546273788))))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 1546273774)) ? ((+(arr_6 [i_1] [i_3] [4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                        var_35 = ((/* implicit */_Bool) 3286625626U);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) (unsigned short)47271))))));
                        var_37 = ((/* implicit */short) max((var_37), ((short)-15455)));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_38 = ((((/* implicit */_Bool) 994805623842478449ULL)) ? (arr_11 [i_0] [i_3] [i_7]) : (((/* implicit */unsigned long long int) var_8)));
                        arr_37 [i_7] = var_14;
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) ((_Bool) -1546273769))))))));
                        arr_41 [i_11] [i_1] [i_3] [i_7] [i_11] &= ((/* implicit */int) (-(3215751881105068476LL)));
                        arr_42 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_31 [i_7] [i_7] [i_11])) : (((/* implicit */int) var_5))));
                        var_40 = ((/* implicit */_Bool) 1546273787);
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) arr_46 [3ULL] [i_1] [i_3] [3ULL] [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-117)))) : ((-(-1268589834)))));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)224))) ? (((/* implicit */int) var_5)) : (arr_40 [i_13] [i_1] [i_1] [i_13] [i_12] [i_12])));
                            var_43 = ((/* implicit */unsigned int) var_18);
                            arr_47 [i_12] [i_1] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [6ULL] [(signed char)1] [i_12] [i_12])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)189))));
                            var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)8867))));
                        }
                    } 
                } 
                arr_48 [i_0] [(short)3] [5ULL] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) / (((long long int) var_14))));
            }
            for (long long int i_14 = 1; i_14 < 8; i_14 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                    var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) -21LL))));
                    var_47 += ((/* implicit */signed char) 783375385);
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_48 = ((/* implicit */long long int) max((var_48), (-2LL)));
                        var_49 = ((/* implicit */unsigned char) 2743243786U);
                        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_3)))));
                        arr_58 [i_0] [i_0] [i_14] [i_14] [i_16] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)15))));
                    }
                }
                for (int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                {
                    var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (arr_40 [i_17] [i_14] [i_1] [i_1] [i_1] [i_0])));
                    var_52 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)234)) - (((/* implicit */int) arr_32 [i_0] [(unsigned short)8] [i_14 + 2] [i_1] [6] [i_1] [i_17])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((-6195157282385652638LL) >= (13LL))))));
                        var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1069563340U)) ? (352340260) : (((/* implicit */int) (unsigned char)49))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) 17387703551409858697ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [i_0] [2ULL] [i_14] [i_1] [i_17] [(_Bool)1] [(unsigned char)8])))))))));
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        arr_65 [i_1] &= ((/* implicit */int) (((!(((/* implicit */_Bool) 7965906418060419766ULL)))) ? (var_0) : (-3LL)));
                    }
                    var_56 -= (~(((/* implicit */int) var_10)));
                }
                /* LoopSeq 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_68 [i_0] [i_1] [i_14] [i_19] [i_14] [i_14] = ((/* implicit */unsigned short) ((signed char) arr_34 [i_14 - 1] [i_14 - 1]));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_50 [i_14])));
                        arr_71 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_14)) & (2082906370398233676ULL)));
                        var_58 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_0] [2LL] [i_1] [6U] [2ULL] [(signed char)2] [i_20]))))) ? (((/* implicit */int) arr_29 [i_0] [i_1] [(signed char)0] [i_1] [i_20])) : (((/* implicit */int) var_7)));
                        arr_72 [i_1] [i_1] [i_14] [i_20] &= ((/* implicit */long long int) var_18);
                        var_59 -= ((/* implicit */_Bool) var_11);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_60 &= ((/* implicit */short) arr_2 [i_0]);
                        var_61 = (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3)))));
                    }
                    arr_75 [i_1] [i_19] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (957584025350716959LL)))));
                }
                for (unsigned int i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                {
                    var_62 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_44 [i_22] [i_14 - 1] [(_Bool)1] [i_0]))))) : (arr_52 [i_1] [i_1] [8U] [i_22])));
                    var_63 += arr_73 [i_14];
                    var_64 = ((/* implicit */unsigned short) var_11);
                    var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) 23LL))));
                }
                for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                {
                    arr_81 [i_14] [(short)1] [i_1] [i_14] = ((/* implicit */unsigned long long int) var_11);
                    var_66 *= ((/* implicit */unsigned int) arr_32 [i_0] [i_14] [i_14 + 2] [i_1] [i_14 + 1] [i_23] [i_23]);
                    arr_82 [i_14] [i_14] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_56 [i_14 + 1] [i_14] [i_14 + 2] [i_14 + 1] [7U])) < (((((/* implicit */_Bool) -733906675)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_1 [i_0]))))));
                }
                /* LoopNest 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned int i_25 = 3; i_25 < 9; i_25 += 2) 
                    {
                        {
                            var_67 = ((/* implicit */unsigned int) (signed char)99);
                            var_68 += 9479141563302657630ULL;
                            var_69 += ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
                            arr_88 [i_14] [i_1] [i_14] [i_24] [i_0] = ((/* implicit */long long int) 18158709839572420039ULL);
                            var_70 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) : (2593755805U)));
                        }
                    } 
                } 
                arr_89 [i_0] [i_14] [3ULL] [i_14] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)49)) : (((((/* implicit */_Bool) 14658994074364285677ULL)) ? (arr_64 [i_14] [i_14 + 2] [5LL] [i_0] [i_14]) : (arr_64 [i_0] [i_1] [5] [i_14 + 1] [i_14])))));
            }
            var_71 = ((/* implicit */_Bool) (unsigned short)12207);
        }
        var_72 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 14941611661827222906ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_87 [i_0]))))));
    }
}
