/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38369
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
    var_15 = ((/* implicit */short) max((((var_11) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (short)-1996)) + (2008)))))))), (((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_17 -= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)511))))), (max((arr_6 [i_0] [i_0] [i_3 - 1]), (((/* implicit */unsigned int) (_Bool)1)))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) ((arr_8 [i_1] [i_1] [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)11] [3U] [7U])))))) - (1)))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)-32319)) / (((/* implicit */int) (_Bool)1))))))));
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) 2209562460U)) ? (((/* implicit */int) (short)32318)) : (((/* implicit */int) var_9))))))) ? ((-(((2440539348U) << (1U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_1] [i_2]))) > (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 368260258U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [3ULL] [i_0] [i_0]))))), (((unsigned long long int) min((1892903973U), (((/* implicit */unsigned int) var_0)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-20613)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (362102951U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 391283991U)) ? (362102933U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] [10U] = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)-22687)))));
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [(signed char)11] [i_5]) : (arr_8 [i_5] [(short)11] [(_Bool)1])))) : (var_5)));
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            arr_26 [(short)8] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) >> (((((/* implicit */int) max((var_12), (((/* implicit */short) (signed char)-119))))) - (10809)))));
            var_19 = arr_23 [i_4] [i_6];
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_7] [(short)8] = ((/* implicit */_Bool) (-(((min((var_1), (((/* implicit */unsigned int) (signed char)1)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [2U] [(_Bool)1] [5U])))))))));
            arr_30 [i_7] = ((/* implicit */signed char) (short)32758);
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */signed char) ((((arr_9 [2ULL] [2ULL] [i_8] [i_8] [2ULL] [i_8]) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_4])))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [7U] [i_8] [0U])) ? (11679349094281787733ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)24002), (((/* implicit */short) (_Bool)1)))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1659064523U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32761)))))))))))))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) arr_7 [i_7] [i_7] [i_7]);
                arr_35 [i_7] [i_7] [i_9] [i_7] = arr_33 [i_4] [i_7];
                /* LoopSeq 1 */
                for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10 - 1]))) + (814589058U));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? ((+(1892903973U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2635902772U)))))))));
                    var_25 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_24 [11U])) << (((241210771U) - (241210753U))))));
                    arr_40 [i_4] [i_4] [(short)4] [(_Bool)0] [i_7] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_4] [i_9] [i_9] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [6U])))))) ? (((/* implicit */int) arr_5 [i_10 + 1] [i_10 + 1] [i_10] [(short)12])) : (((/* implicit */int) var_10))));
                }
                var_26 |= ((/* implicit */signed char) ((short) arr_7 [6U] [i_9] [i_9]));
            }
        }
        /* LoopSeq 4 */
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            var_27 -= ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32757))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(_Bool)1])) || (((/* implicit */_Bool) var_5))))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(var_13))))));
            arr_43 [i_4] [i_11] [i_11] = ((/* implicit */unsigned int) var_5);
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_29 = max((min((min((1892903973U), (((/* implicit */unsigned int) (short)32318)))), (max((1447882578U), (((/* implicit */unsigned int) (signed char)-119)))))), (((/* implicit */unsigned int) arr_19 [i_12] [i_12])));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-49))) != (((/* implicit */int) (!((_Bool)1))))))), ((signed char)118))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 2; i_13 < 11; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_31 -= ((/* implicit */short) ((unsigned int) (+(arr_39 [i_14] [i_13] [(short)4] [i_13] [i_14]))));
                        var_32 *= ((/* implicit */unsigned int) (short)-32341);
                        var_33 = ((/* implicit */_Bool) min((var_33), ((((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))) >= ((~(((/* implicit */int) arr_28 [i_14] [i_12] [i_4]))))))));
                        arr_50 [i_4] [(short)2] [i_13 + 2] [(_Bool)1] [i_14] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        }
        for (unsigned int i_15 = 3; i_15 < 12; i_15 += 3) /* same iter space */
        {
            arr_53 [3U] [(_Bool)1] = ((/* implicit */short) 344060474U);
            var_34 ^= ((/* implicit */short) min(((~(((/* implicit */int) arr_46 [i_15 + 1] [i_15 - 3] [(signed char)4])))), (((((/* implicit */int) (signed char)-61)) | (((((/* implicit */int) var_2)) << (((/* implicit */int) arr_25 [i_4] [i_4] [11U]))))))));
        }
        for (unsigned int i_16 = 3; i_16 < 12; i_16 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_17 = 1; i_17 < 10; i_17 += 2) 
            {
                arr_60 [i_16] [i_16] [i_4] = ((/* implicit */signed char) var_6);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    var_35 = ((/* implicit */_Bool) ((arr_28 [5U] [(signed char)2] [(signed char)2]) ? (((0U) << (((4294967295U) - (4294967278U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_16] [i_16 + 1])))));
                    var_36 = ((/* implicit */_Bool) min((var_36), (((arr_2 [i_17 - 1] [i_17 + 2]) && (((/* implicit */_Bool) arr_11 [i_16 + 1] [i_16] [i_17 + 2]))))));
                }
                for (short i_19 = 0; i_19 < 13; i_19 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) + (16651317814928747694ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_4] [9ULL] [i_4] [i_16])))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (short)-12615))))))));
                    arr_66 [(_Bool)1] [(_Bool)1] [i_17] [i_17 + 1] [i_16] [i_17 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_64 [i_16 - 3] [i_17 + 1] [i_4])) && (((/* implicit */_Bool) arr_64 [i_16 - 2] [i_17 + 3] [i_17 + 2])))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_64 [i_16 - 1] [i_17 - 1] [i_16 - 1])))))));
                    arr_67 [11U] [i_16] [i_17 + 1] [11U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_45 [5ULL]) ^ (arr_62 [i_4] [i_4] [i_4] [i_4]))) | (arr_8 [i_16] [i_16] [i_17 + 1])))) ? (((min((arr_42 [i_16]), (((/* implicit */unsigned int) (_Bool)1)))) / (max((((/* implicit */unsigned int) (_Bool)1)), (1659064523U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32753)))) : (((/* implicit */int) arr_61 [3U] [i_16 - 1] [i_17 + 2] [5U])))))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) 833146035U)) ? (3932864343U) : (0U)))))) >= (((/* implicit */int) arr_14 [6U]))));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((short) 7905208614502140929ULL))) : (((/* implicit */int) (short)32767)))))));
                }
                arr_68 [i_17 + 2] [i_16] [i_16] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_2))))));
            }
            var_40 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_14 [9U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8923396745079415377ULL) >= (((/* implicit */unsigned long long int) 4294967283U)))))) : (2996483803U))))));
        }
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_37 [6U] [6U] [6U]))));
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        arr_71 [i_20] [2U] = ((/* implicit */_Bool) var_12);
        /* LoopSeq 4 */
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            arr_74 [i_21] = ((/* implicit */short) (~(((/* implicit */int) arr_47 [i_21 + 1]))));
            var_42 = ((/* implicit */unsigned long long int) ((arr_55 [i_21] [5ULL]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)10982))))) : (arr_9 [i_21] [i_21 + 1] [i_20] [i_20] [i_21 + 1] [i_21 + 1])));
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_20] [i_20] [i_21 + 1] [(_Bool)1]))));
        }
        for (unsigned int i_22 = 4; i_22 < 12; i_22 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */_Bool) var_1);
            var_45 = ((/* implicit */signed char) var_2);
        }
        for (unsigned int i_23 = 4; i_23 < 12; i_23 += 3) /* same iter space */
        {
            arr_82 [i_20] [i_23] = ((/* implicit */unsigned int) ((9523347328630136239ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_46 = ((((757864345U) | (arr_42 [i_23]))) << (((var_5) - (5817168995478604345ULL))));
        }
        for (unsigned int i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_25 = 0; i_25 < 13; i_25 += 3) 
            {
                var_47 -= ((/* implicit */_Bool) arr_34 [i_24] [i_24] [i_20]);
                var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_25] [i_25] [i_25])) ? (((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_47 [i_20])))) : ((~(((/* implicit */int) var_6)))))))));
                arr_89 [i_20] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_76 [i_24] [(short)2])) : (((/* implicit */int) var_8))))));
            }
            var_49 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29269))) + (((1659064507U) / (2635902773U)))));
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_24])) && (arr_73 [i_24] [i_24] [i_20])));
        }
        arr_90 [i_20] [i_20] = (-((-(1659064516U))));
    }
}
