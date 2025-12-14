/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216252
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((short) -1207711645095852041LL));
        var_13 = ((/* implicit */_Bool) (+((-(arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2136942773649104478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (arr_4 [i_3] [i_3] [i_3 + 1] [i_3]))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((long long int) (~(7782866570507808464LL)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_2 [i_0 + 1]))))));
                    var_17 = ((/* implicit */short) ((arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) ((long long int) ((unsigned char) arr_1 [i_0 + 1])));
        var_18 = ((/* implicit */long long int) ((unsigned char) arr_9 [i_0 - 1]));
    }
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)19))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_8 [i_5 + 2] [i_5] [i_5] [i_5 + 2] [i_5 - 1])))))));
                            var_20 = ((/* implicit */_Bool) ((long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))))));
                            var_21 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)16] [i_6] [i_7] [14LL] [i_9]))) : (var_1)))))) ? (((/* implicit */unsigned long long int) max((min((0LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((unsigned char) (_Bool)0)))))) : (var_3));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 0LL))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8965653132044929830LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((arr_28 [i_5 + 1] [8LL] [i_10] [i_11 + 1]) ? (var_8) : (arr_19 [i_5] [i_10] [i_11 - 2] [i_11 - 1]))) : (min((8573157376LL), (((/* implicit */long long int) arr_10 [i_5 + 2] [6LL]))))))) ? (-871915314769610566LL) : (min((((/* implicit */long long int) var_7)), (9223372036854775744LL)))));
                var_24 *= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_9))))));
                var_25 = ((/* implicit */long long int) max((var_25), (((long long int) (+(((/* implicit */int) ((unsigned char) var_6))))))));
                arr_29 [i_5] [(_Bool)1] [i_11 + 1] = ((/* implicit */unsigned long long int) ((long long int) 8319426128430038533ULL));
            }
            for (long long int i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_30 [i_5 + 1] [i_12 - 1] [i_5 - 1] [i_12 + 1])))) ? ((~((-(arr_2 [i_12 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_11)), (arr_25 [i_5 - 1])))))));
                var_27 = ((((/* implicit */_Bool) (signed char)28)) ? (2571997113979978910LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((var_3), (2136942773649104478ULL)))))))))));
            }
            for (short i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_4)), (var_3))))) ? (((long long int) ((unsigned long long int) 9262005292050018130ULL))) : (-871915314769610566LL))))));
                var_30 = ((/* implicit */unsigned char) max((8319426128430038533ULL), (((/* implicit */unsigned long long int) (unsigned char)193))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) arr_2 [i_5 + 1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), (arr_9 [i_5 + 2]))))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (var_4) : (arr_4 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])))));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15970)) ? (((/* implicit */unsigned long long int) 0LL)) : (18446603336221196288ULL)));
                    var_33 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) (signed char)-28))), (min((((/* implicit */unsigned long long int) var_10)), (var_3)))));
                    var_34 = ((/* implicit */long long int) ((short) max((123145302310912ULL), (arr_30 [i_15] [i_15] [i_5 + 1] [i_10]))));
                    var_35 = ((/* implicit */short) (-(max((var_3), (((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 2])) ? (var_5) : (576460752303423487ULL)))))));
                    var_36 = ((/* implicit */short) var_2);
                }
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_34 [i_5] [i_10] [i_14] [i_16]))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) ((unsigned char) var_0)))))) ? (min((min((((/* implicit */unsigned long long int) var_11)), (arr_30 [i_5 + 2] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-7963)) : (((/* implicit */int) var_7))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))), (((unsigned long long int) var_3))))));
                    arr_43 [i_5] = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_6)))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))))), ((~(((/* implicit */int) (short)32767))))))));
                }
                for (unsigned char i_17 = 1; i_17 < 18; i_17 += 2) 
                {
                    var_38 = ((_Bool) (unsigned char)1);
                    var_39 = ((/* implicit */short) var_10);
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)139))))) ? (((unsigned long long int) (unsigned char)21)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13181836371753324880ULL))))))));
                }
                arr_48 [i_5] [i_10] [i_14] = ((/* implicit */unsigned long long int) (signed char)45);
            }
        }
        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned char i_20 = 1; i_20 < 17; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)31085))))) ? (((/* implicit */int) (!(arr_35 [i_20])))) : (((((/* implicit */_Bool) 2401569033185010689LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)15970))))))));
                            var_42 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_5 [i_5 + 2])) : (16582335735337393142ULL))) : ((-(var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_49 [17ULL] [i_18] [i_19]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_5]))))) : (((/* implicit */int) var_0)))))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) 3639469958050511215ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (var_10))) : (max((var_8), (((/* implicit */long long int) var_9))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_44 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (123145302310912ULL) : (7ULL)))) ? (min((((/* implicit */unsigned long long int) min(((unsigned short)11421), (((/* implicit */unsigned short) (unsigned char)7))))), (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 0LL))))));
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (unsigned char)255))));
                        }
                    } 
                } 
            } 
            var_46 = ((((/* implicit */_Bool) 0ULL)) ? (min((((/* implicit */long long int) (unsigned short)54114)), (((((/* implicit */_Bool) (unsigned char)131)) ? (9108290923282930764LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54114))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
            var_47 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((~(var_4))), (((long long int) var_3))))), (min((var_6), (((/* implicit */unsigned long long int) var_1))))));
            arr_59 [i_18] [i_18] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
        }
        var_48 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) (short)743))), (16724203406126547374ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (((((/* implicit */_Bool) arr_9 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_5] [10ULL])))) : (((unsigned long long int) var_2))))));
        var_49 = min((max((arr_19 [i_5 + 1] [i_5] [i_5 + 2] [i_5 - 1]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((_Bool) 9223372036854775807LL))));
        var_50 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 14795532422746533074ULL)))) ? (((/* implicit */int) (unsigned short)50356)) : (((/* implicit */int) (unsigned char)7))));
        /* LoopSeq 2 */
        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            var_51 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_41 [(unsigned char)13] [i_22] [i_22] [i_5 + 1] [i_5])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) (short)26266)) ? (arr_41 [i_22] [i_22] [i_5] [i_22] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46)))))));
            var_52 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)54114)), (arr_37 [i_5 + 1])))) ? ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [6ULL] [i_22] [(unsigned char)7] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11422)))))));
            /* LoopNest 2 */
            for (long long int i_23 = 0; i_23 < 19; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 16; i_24 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_25 = 0; i_25 < 19; i_25 += 4) 
                        {
                            arr_70 [i_5] [i_24 + 3] [i_5] [i_24 + 3] [i_25] [i_24] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_2))))))));
                            var_53 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_34 [i_25] [(short)3] [i_22] [i_5 - 1])) : (((/* implicit */int) var_0)))))))));
                            var_54 = ((/* implicit */unsigned char) ((short) (short)-12715));
                            var_55 *= 4302552515329854075ULL;
                        }
                        for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) 
                        {
                            var_56 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)7))))))) : (((var_7) ? (min((var_6), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (~(var_10))))))));
                            var_57 = ((/* implicit */unsigned char) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) var_4))));
                            arr_74 [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)73)), ((unsigned short)768)))), (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [(unsigned char)7] [i_5]))) : ((~(arr_2 [15ULL])))))));
                            var_58 = ((/* implicit */unsigned long long int) arr_13 [i_5] [i_22]);
                            var_59 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) 16321660750647358436ULL)))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 19; i_27 += 1) 
                        {
                            arr_78 [i_5] = ((/* implicit */_Bool) (+(18446744073709551615ULL)));
                            arr_79 [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 2] = ((signed char) (~((~((-9223372036854775807LL - 1LL))))));
                            arr_80 [i_27] [i_27] [i_5] [i_5] [i_22] [i_5 - 1] = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) (+(var_8))))))), (((short) 0LL))));
                            arr_81 [i_24 + 2] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)73)));
                            var_60 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_46 [i_5 + 1] [3ULL] [i_5] [i_24]))));
                        }
                        arr_82 [i_5] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)248))))));
                        var_61 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (((long long int) 4338746708099610717LL))));
                    }
                } 
            } 
            var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) min((((short) (+(var_5)))), (arr_60 [i_22]))))));
        }
        /* vectorizable */
        for (short i_28 = 0; i_28 < 19; i_28 += 1) 
        {
            var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) (~(var_10))))));
            var_64 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_5 + 2] [i_5] [i_28] [i_5] [i_28]))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))) : (arr_65 [i_5] [i_5]));
        }
    }
    var_65 = ((/* implicit */unsigned char) ((long long int) (-9223372036854775807LL - 1LL)));
    var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))));
}
