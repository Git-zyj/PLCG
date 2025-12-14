/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227021
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_16) & (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [(_Bool)1]))))))), (((min((((/* implicit */unsigned int) var_0)), (arr_0 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)163))))))))));
        var_18 = ((/* implicit */long long int) ((((_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((-337513893) / (((/* implicit */int) (short)32767))))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)26033))))), (((((/* implicit */_Bool) -967289919)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
        var_19 *= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -337513889)) ? (2709444242138279760ULL) : (((/* implicit */unsigned long long int) -1144715942))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)13]))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (10900942012520294111ULL))))));
        arr_3 [(_Bool)1] = ((/* implicit */int) min((2636296357U), (((/* implicit */unsigned int) var_12))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_20 = ((unsigned char) (_Bool)1);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) : (((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                {
                    var_22 *= ((short) ((1748058799) > (((/* implicit */int) (short)3840))));
                    var_23 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3 + 1] [(unsigned char)14])) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) var_7))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_8 [i_1] [i_1] [i_2] [i_3 + 2]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_1) : (arr_6 [i_1] [(_Bool)1])));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) arr_9 [i_4 - 1] [(short)12] [i_4 - 1] [i_4 - 1]))))) - (((int) arr_9 [i_4 - 1] [10] [i_4 - 1] [i_4 - 1])))))));
            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)3840))) > ((+(arr_4 [(short)20]))))))) : (5042290518102029515ULL)));
            arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483647) % (((/* implicit */int) arr_11 [3U]))))) ? (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27067)))));
            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31386))) > (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (arr_8 [17ULL] [i_4] [i_5] [i_5]))))) ? (((((18446744073709551595ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((+(16861864636708672654ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_4]) > (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_4 - 1] [i_5] [i_4] [11ULL])))))));
            var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_17 [i_5] [i_5] [(_Bool)1])) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_11 [i_4])) : (var_12)))))) ? (((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4] [8LL] [i_5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_5])), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (~((+(4833142420913787361LL))))))));
        }
        for (int i_6 = 4; i_6 < 20; i_6 += 4) 
        {
            arr_22 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_9 [i_4] [i_6] [i_4] [i_6])))))), (var_12)));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    for (int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_6 - 3]), (arr_11 [i_6 - 2]))))) / (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_6]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_25 [i_4] [i_4] [i_4 - 1] [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((int) 0ULL)))))));
                            var_31 *= ((/* implicit */signed char) (+((+((+(((/* implicit */int) (unsigned char)239))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    arr_34 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-9223372036854775802LL), (((/* implicit */long long int) (signed char)-25)))))));
                    var_32 = (!(((/* implicit */_Bool) (short)-32753)));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)32)), ((short)-7266)))) ? (((var_2) & (max((((/* implicit */unsigned long long int) (unsigned char)192)), (2074274009707642425ULL))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (short)48)))))));
                    var_34 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_23 [i_7] [i_10 + 1] [i_6 - 2] [i_7]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)27277)) : (((/* implicit */int) arr_1 [i_4]))))) ? (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_17))) : (min((((/* implicit */unsigned int) arr_31 [i_4 - 1] [i_7] [i_7] [i_10] [i_4] [i_6])), (17U)))))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    arr_39 [i_4] = ((/* implicit */short) (((_Bool)1) ? (min((-282675783), (((/* implicit */int) (unsigned short)27757)))) : ((+(((((/* implicit */int) (unsigned char)166)) << (((2144432169997142343ULL) - (2144432169997142325ULL)))))))));
                    var_35 = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1428897530812408731ULL)) ? (arr_32 [(short)7] [20] [i_7] [i_4]) : (((/* implicit */long long int) arr_16 [5LL] [(short)20] [(short)1]))))) ? (((854444136) / (((/* implicit */int) (short)16376)))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_4 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)218))))))));
                }
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_37 [(short)3] [i_6] [i_6 - 1] [i_6]) : (((/* implicit */unsigned long long int) arr_43 [i_6] [i_4])))))))) > (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((((/* implicit */int) (_Bool)1)) < (var_12))))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (2451933949553091625LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))))));
                            var_38 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((9223372036854775802LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) min((arr_46 [i_4] [i_4] [7ULL] [i_4] [(_Bool)1]), (((/* implicit */short) var_13))))) : (((/* implicit */int) (_Bool)1)))))));
                            var_39 = ((/* implicit */signed char) 815091486);
                        }
                    } 
                } 
                arr_47 [i_4] [i_6 - 2] [i_6 - 4] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_45 [i_4] [i_4] [i_6 - 4] [i_6] [i_12] [(unsigned short)9])));
            }
        }
        for (short i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            arr_50 [i_4] [i_15] [i_4] = ((/* implicit */long long int) (+(((unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
            var_40 *= ((/* implicit */unsigned int) (+(1974074581394062862LL)));
        }
    }
    var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(727477673U)))) ? (((var_13) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)128)))) : (((var_13) ? (var_12) : (((/* implicit */int) var_3)))))) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)249))))));
    var_42 *= ((/* implicit */unsigned int) var_16);
    var_43 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -757928041)) ? (((/* implicit */unsigned long long int) 1618384568)) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_9))))) : (var_11))));
}
