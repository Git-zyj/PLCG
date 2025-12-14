/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25299
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_11);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_11)))) != ((-(((/* implicit */int) arr_3 [i_0] [i_1])))))) ? ((~(((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), ((signed char)-1))))))))))));
                    var_17 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-1))));
                    var_18 += ((/* implicit */short) max((((/* implicit */int) ((short) max((((/* implicit */short) (signed char)4)), ((short)8915))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) (short)-16819)) : (((/* implicit */int) (signed char)-97))))) ? (((((/* implicit */int) (short)-8921)) ^ (((/* implicit */int) arr_4 [i_0] [i_2])))) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_2] [i_2])) - (22834)))))))));
                }
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        var_19 = min((arr_1 [i_3]), (arr_15 [i_0] [i_0] [i_1] [i_0]));
                        /* LoopSeq 4 */
                        for (signed char i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) var_0);
                            arr_18 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1] [i_3]);
                            arr_19 [i_1] [i_5 - 1] [i_1] [i_4 + 1] [i_3] = ((/* implicit */short) ((signed char) var_13));
                            var_21 *= ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_3]);
                        }
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) var_3);
                            var_23 -= ((/* implicit */short) (signed char)80);
                        }
                        for (signed char i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_0 [i_4]))) * (((/* implicit */int) ((((/* implicit */int) (signed char)119)) < (((/* implicit */int) (signed char)-107)))))))) ? (((/* implicit */int) (short)8915)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_12))))));
                            arr_24 [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (short)0)))) != (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-87))))));
                            arr_25 [i_0] [i_1] [i_3] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) var_12)))) > ((((-(((/* implicit */int) arr_8 [i_1] [i_1])))) + (((/* implicit */int) arr_23 [i_0] [i_1] [i_3] [i_4 + 2] [i_3]))))));
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)85)) != (((/* implicit */int) (short)-32760))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-10031))))) ? (((/* implicit */int) max((var_4), ((signed char)-107)))) : (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-53))))))));
                            var_26 ^= ((/* implicit */short) ((min((((/* implicit */int) (short)-18297)), ((~(((/* implicit */int) (short)5638)))))) & (max(((~(((/* implicit */int) arr_11 [i_3] [i_3] [i_3])))), (((/* implicit */int) max((var_15), ((short)1))))))));
                            var_27 = ((/* implicit */short) (signed char)-116);
                            arr_28 [i_0] [i_0] [i_3] [i_3] [i_0] [i_0] |= ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (short)24916)))), (((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))));
                        }
                        var_28 -= ((short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((short) (signed char)-16))) : (((/* implicit */int) ((signed char) (signed char)-64)))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4 + 2] [i_4] [i_4] [i_4]))))) * ((+(((/* implicit */int) (short)26899)))))))));
                        arr_29 [i_0] [i_0] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_13)) > (((((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_4 [i_1] [i_1])))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_4), (arr_23 [i_0] [i_1] [i_3] [i_1] [i_4 + 2]))))))));
                    }
                    var_30 = ((/* implicit */short) ((signed char) max((((/* implicit */short) ((((/* implicit */_Bool) (short)16915)) || (((/* implicit */_Bool) (signed char)-2))))), (var_13))));
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((short) ((((((/* implicit */int) arr_30 [i_0] [i_9])) >> (((((/* implicit */int) var_12)) - (3192))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))))));
                    var_32 *= ((/* implicit */signed char) var_3);
                    var_33 += ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_4 [i_9] [i_1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)18290))))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)16)), ((short)4204)))) ? (((/* implicit */int) min((var_6), (var_12)))) : (((((/* implicit */int) arr_7 [i_0] [i_9] [i_0] [i_0])) / (((/* implicit */int) var_6))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_34 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])) >> (((max((((/* implicit */int) max(((short)-5624), (((/* implicit */short) (signed char)127))))), (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))))) - (115)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])) + (2147483647))) >> (((max((((/* implicit */int) max(((short)-5624), (((/* implicit */short) (signed char)127))))), (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))))) - (115))))));
                                arr_39 [i_0] [i_1] [i_1] [i_10] [i_11] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)59))));
                                var_35 *= ((/* implicit */short) (+(max(((-(((/* implicit */int) arr_22 [i_0] [i_1] [i_9])))), (((/* implicit */int) min(((signed char)-75), ((signed char)14))))))));
                                var_36 = ((/* implicit */short) max((((/* implicit */int) max(((signed char)121), (var_14)))), ((~(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_49 [i_13] [i_13] [i_13] [i_0] |= ((/* implicit */short) (~((~(((/* implicit */int) arr_36 [i_0] [i_1] [i_0]))))));
                                var_37 = ((/* implicit */short) (signed char)17);
                                var_38 ^= ((/* implicit */short) (+(((/* implicit */int) (short)-4859))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    var_39 = ((/* implicit */signed char) ((short) ((((((/* implicit */int) (short)-11009)) | (((/* implicit */int) (short)-18312)))) | ((~(((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            {
                                arr_60 [i_0] [i_0] [i_0] [i_15] [i_0] [i_17] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_16] [i_15] [i_16] [i_0])) && (((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))))) & ((+(((/* implicit */int) arr_1 [i_1]))))));
                                var_40 -= ((/* implicit */short) (+(((((/* implicit */int) (short)-16551)) ^ (((/* implicit */int) min((var_3), (((/* implicit */short) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_41 *= ((/* implicit */signed char) (+(((/* implicit */int) min((var_12), (((/* implicit */short) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (short)-7898))))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */short) max((var_42), (arr_7 [i_0] [i_18] [i_1] [i_18])));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-68)) <= (((/* implicit */int) var_6)))) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)-109)))) : (((/* implicit */int) min((var_12), ((short)-28987))))))))))));
                    var_44 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (signed char)112))));
                }
                for (signed char i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                {
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (signed char)-15))));
                    arr_66 [i_1] = ((/* implicit */short) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) || (((/* implicit */_Bool) (signed char)0)))))));
                    /* LoopNest 2 */
                    for (short i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        for (short i_21 = 1; i_21 < 11; i_21 += 2) 
                        {
                            {
                                var_46 -= ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)4)), ((~(((/* implicit */int) (signed char)0)))))), (((((/* implicit */int) var_13)) | (((/* implicit */int) min(((signed char)4), ((signed char)110))))))));
                                var_47 = ((/* implicit */short) ((signed char) ((signed char) (short)6830)));
                                arr_73 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0])) * (min((((((/* implicit */int) (signed char)62)) * (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) min(((signed char)-71), ((signed char)24))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
    {
        for (signed char i_23 = 1; i_23 < 16; i_23 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_24 = 2; i_24 < 15; i_24 += 2) 
                {
                    for (short i_25 = 3; i_25 < 17; i_25 += 3) 
                    {
                        for (short i_26 = 2; i_26 < 17; i_26 += 1) 
                        {
                            {
                                var_48 -= ((/* implicit */signed char) ((((/* implicit */int) arr_89 [i_25] [i_24])) % (((/* implicit */int) (signed char)112))));
                                var_49 = ((/* implicit */signed char) ((((/* implicit */int) (short)32767)) >> (((/* implicit */int) ((signed char) ((signed char) (signed char)22))))));
                                arr_90 [i_22] [i_23] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((short) (short)4649));
                                var_50 = ((/* implicit */short) (signed char)-47);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_27 = 0; i_27 < 18; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
                    {
                        {
                            var_51 ^= ((/* implicit */short) ((((/* implicit */int) max(((short)-14066), (((/* implicit */short) arr_93 [i_23 + 2] [i_28] [i_23 + 2] [i_23]))))) * (((/* implicit */int) ((((/* implicit */int) arr_93 [i_23 - 1] [i_23 + 2] [i_23 - 1] [i_23])) != (((/* implicit */int) arr_93 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_22])))))));
                            arr_95 [i_22] [i_22] [i_22] [i_22] [i_23] = (i_23 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)57))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)22628)) + (((/* implicit */int) (signed char)-2)))))))) >= (((((((/* implicit */int) arr_79 [i_22] [i_23] [i_28])) + (2147483647))) >> (((((((/* implicit */int) var_0)) | (((/* implicit */int) (short)-10041)))) + (1615)))))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)57))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)22628)) + (((/* implicit */int) (signed char)-2)))))))) >= (((((((((/* implicit */int) arr_79 [i_22] [i_23] [i_28])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) var_0)) | (((/* implicit */int) (short)-10041)))) + (1615))))))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (+((+(((/* implicit */int) arr_83 [i_22] [i_22])))))))));
                var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)38))) ? (((/* implicit */int) min((arr_87 [i_22] [i_22]), (((/* implicit */short) arr_93 [i_22] [i_22] [i_23 + 2] [i_23]))))) : (((((/* implicit */_Bool) arr_94 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_74 [i_22] [i_22])) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))) | (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)5877))))))))));
            }
        } 
    } 
}
