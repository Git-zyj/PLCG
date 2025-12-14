/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36487
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 4] [13LL])) / (((/* implicit */int) arr_5 [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? ((-(arr_4 [i_2]))) : ((+(((/* implicit */int) var_9)))))))));
                    arr_7 [i_2] = ((/* implicit */short) (((((_Bool)0) ? (4344052169657413198LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_2 + 1])))))));
                    var_14 |= ((/* implicit */int) max((1953755404425757405ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)28817))))) ^ ((~(8))))), ((~(((/* implicit */int) var_9))))));
    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)28832), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((unsigned int) 1945005613U))) : (var_1)))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -9223372036854775794LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(-639884622)))), (((unsigned int) arr_8 [i_3 - 2]))));
        arr_12 [i_3] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_9 [i_3 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_9 [i_3 - 1])))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_8 [15LL]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 7LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (3846543648895601650LL)))));
                    var_18 = ((/* implicit */short) max((arr_15 [i_4] [i_5] [i_4] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3]))))) & (((/* implicit */int) (unsigned char)2)))))));
                    var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)43103)))) < (((/* implicit */int) arr_14 [i_3] [i_3])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_24 [i_3 + 2] [i_3 + 2] [i_6] [i_4] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4204502143827804149LL)), (2318642487482143420ULL)))) ? (max((arr_9 [i_3 + 1]), (((((/* implicit */long long int) -1664146256)) & (var_12))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)9630)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [(short)14] [(short)14]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_3] [i_4] [i_3 + 1] [i_5])) : (((/* implicit */int) arr_0 [i_4 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (unsigned char)53))))) : ((+(2147483647)))))));
                            arr_28 [i_4] [i_3 + 2] [i_6] [i_5] [i_4] [i_3 + 2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [5] [i_3]))) : (((((/* implicit */_Bool) -1815180509)) ? (-1560465088524888076LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61802)))))))) ? (((/* implicit */int) (short)-32409)) : (((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3])))) + (max((((/* implicit */int) (unsigned char)14)), (2147483647))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (+(2928861341956517483LL))))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)7])) ? (((((/* implicit */_Bool) ((3564811127U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))))) ? (((/* implicit */int) arr_23 [i_4 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 2])) : (((arr_18 [(unsigned short)10] [i_6] [i_4]) & (var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_13 [i_5]))) && (((/* implicit */_Bool) arr_25 [i_3] [i_3] [(unsigned char)2] [i_4] [i_7 - 1] [i_3])))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_10);
                            arr_33 [i_3] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */int) ((((unsigned int) (+(((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_3 + 2] [i_4 - 1] [i_6] [i_8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_6] [i_8])))))));
                            arr_34 [i_3] [i_4] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) min((min((arr_1 [i_4 + 1]), (((/* implicit */int) (unsigned char)65)))), (((/* implicit */int) ((signed char) arr_2 [i_3 - 1])))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (730156169U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8])))))), ((-(-1560465088524888076LL))))))));
                        }
                        for (int i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            arr_38 [i_3] [i_5] [i_5] [i_6] [i_5] [i_4] = ((((((/* implicit */_Bool) 6422588367129137163ULL)) || (((/* implicit */_Bool) (signed char)29)))) ? (((((arr_25 [i_9] [i_9] [2U] [i_4] [i_4] [i_3 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_3] [i_4])))) : (16972921941400759227ULL))) : (((/* implicit */unsigned long long int) ((arr_10 [i_4] [i_6]) & (arr_10 [i_3 - 1] [i_4 + 1])))));
                            var_25 += ((/* implicit */int) (-(((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_5] [i_5]))))) % (arr_31 [i_3] [i_4] [i_5] [i_4] [i_5] [i_6])))));
                            var_26 = ((/* implicit */int) ((short) min((((((/* implicit */_Bool) var_8)) ? (arr_25 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3]) : (-3261252122274124586LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3]))))))));
                        }
                    }
                }
            } 
        } 
        arr_39 [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_3 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_3]), (((/* implicit */int) (short)30568)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 542794673)), (7435260018512534294LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18901)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4)))))))));
    }
    for (long long int i_10 = 4; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_0 [i_10 + 1]))));
        arr_42 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_10 - 2]))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_48 [i_10] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_45 [i_10] [i_10] [i_10 - 3])) : (((/* implicit */int) arr_47 [i_10]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_47 [i_10]), (((/* implicit */unsigned short) var_9)))))))), ((+(arr_46 [i_12] [i_11] [i_10 - 4])))));
                    var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) 819221230)) : (1152921504573292544ULL)))))) ? ((~(((/* implicit */int) min((var_7), (((/* implicit */short) var_9))))))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_10 - 1] [(unsigned short)5] [i_12])) || (((/* implicit */_Bool) (signed char)-9)))))))));
                    arr_49 [i_12] [i_10] [i_10] [17LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_10 - 3])) * (((/* implicit */int) arr_43 [i_10 - 4] [i_10 - 1] [i_10 - 2]))))) && ((((-(((/* implicit */int) var_10)))) != ((~(((/* implicit */int) (unsigned char)0))))))));
                    arr_50 [i_10] [i_11] [12LL] [i_11] = ((((((/* implicit */_Bool) max((730156176U), (((/* implicit */unsigned int) var_5))))) ? (var_13) : (((int) (unsigned char)222)))) % (((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_10 - 3] [i_11] [i_10 - 3]))))) ? (((/* implicit */int) arr_5 [i_10 - 2] [i_10])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)222)))))));
                }
            } 
        } 
    }
    for (long long int i_13 = 4; i_13 < 18; i_13 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)30580)) ? (((/* implicit */int) arr_47 [(unsigned char)14])) : (((/* implicit */int) arr_47 [(_Bool)1])))))))));
        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_13] [10U])) ? (var_13) : (arr_1 [i_13])))) ? (((/* implicit */long long int) arr_40 [i_13 - 2] [i_13 - 4])) : (((((/* implicit */_Bool) (short)-10981)) ? (((/* implicit */long long int) arr_44 [i_13] [i_13])) : (var_8))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)142))))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_13] [i_13 - 1])))))));
        /* LoopNest 3 */
        for (signed char i_14 = 2; i_14 < 16; i_14 += 3) 
        {
            for (signed char i_15 = 2; i_15 < 18; i_15 += 4) 
            {
                for (int i_16 = 3; i_16 < 15; i_16 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((arr_43 [i_16 + 1] [i_15 + 1] [i_15 - 2]) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) arr_43 [i_16 - 1] [(unsigned char)17] [(unsigned char)17])))))) >> (((/* implicit */int) (_Bool)0)))))));
                        arr_63 [7LL] [i_13] [i_15] [i_15] [i_16] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_43 [i_13] [i_13 - 2] [i_16 + 3])))) >> (((((/* implicit */_Bool) 2924836829U)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                        arr_64 [i_13] [i_14] = ((/* implicit */unsigned int) ((((_Bool) arr_3 [i_14 + 3] [i_16])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_14]), (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_62 [i_15 + 1] [i_15 + 1] [i_15] [i_15])) : (((((/* implicit */_Bool) arr_54 [i_13])) ? (((/* implicit */int) (unsigned short)34673)) : (var_13)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) arr_60 [i_16] [(unsigned short)6] [(unsigned short)6])) : (-6310243098179846501LL)))) ? (((/* implicit */long long int) (-(-1487698348)))) : (arr_3 [i_13 - 3] [i_15 - 2])))));
                        arr_65 [11] [i_14] [i_14] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(arr_41 [16LL]))), (((/* implicit */int) (signed char)26))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)32767)) * (((/* implicit */int) arr_58 [i_13] [i_13]))))))) : (max((((/* implicit */unsigned int) arr_0 [i_13])), (((((/* implicit */_Bool) (short)-32766)) ? (1510327149U) : (((/* implicit */unsigned int) 248803005))))))));
                    }
                } 
            } 
        } 
        arr_66 [i_13] [i_13] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((unsigned char) ((int) (_Bool)1))))));
    }
}
