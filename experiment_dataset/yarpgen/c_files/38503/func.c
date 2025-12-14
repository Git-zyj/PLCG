/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38503
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [(unsigned short)9] [(unsigned short)9] [i_2])) + (((/* implicit */int) (short)-9702)))) | ((-(((/* implicit */int) var_6))))))) ? (min((((var_2) ^ (var_2))), (((/* implicit */int) ((signed char) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) (signed char)-58)));
                    var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-75)) ? ((-(var_2))) : ((~(var_1))))));
                }
                var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((arr_1 [i_1] [i_0 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-9702))))))))));
                var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (0LL) : (17LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) arr_8 [i_1]))))))) | (((/* implicit */long long int) ((arr_4 [i_0 + 2]) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)73)))) : (((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)-9406)))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-26139)))));
        arr_14 [i_3] [i_3 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((unsigned short) arr_3 [i_3]))) >= (((/* implicit */int) arr_4 [i_3 + 1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) var_13);
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 6; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 2) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_7 - 1] [i_8 + 2] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) arr_7 [i_4] [i_4])))) - (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_20 [i_8] [i_7 - 2] [i_6]))))));
                                arr_28 [i_7] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) (signed char)-103)))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-58)) && (((/* implicit */_Bool) ((arr_7 [i_6 - 2] [i_4]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 9; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(((long long int) 72057593501057024ULL))));
                                var_23 -= ((/* implicit */_Bool) (unsigned char)136);
                                arr_36 [i_4] [i_4] [i_6] [i_10] [i_10] = ((/* implicit */_Bool) -1243818178);
                                var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) -876624947))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (18374686480208494591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (arr_23 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 31LL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_31 [i_4] [i_4 - 2] [5LL] [i_4] [i_4] [i_4]))));
        var_27 &= ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_11 = 4; i_11 < 8; i_11 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_11] [i_11 - 4] [i_11] [i_11 + 1] [i_11 - 3] [i_11 - 3])) && (((/* implicit */_Bool) arr_12 [i_11] [i_11]))))))))));
        arr_39 [(short)4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 8493708047183880707LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_4)))) : (((/* implicit */int) (signed char)110))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 1) 
    {
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_41 [i_12 - 1]))));
        arr_42 [i_12] = ((short) arr_41 [i_12]);
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 4) 
        {
            var_30 = (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_12]))) : (((var_12) << (((1160479475) - (1160479443))))));
            var_31 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (short)-9992)) / (arr_43 [i_13] [i_12] [i_12]))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                for (short i_15 = 1; i_15 < 24; i_15 += 3) 
                {
                    {
                        var_32 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_14)) >> (((-18LL) + (31LL)))))));
                        var_33 = ((/* implicit */int) max((var_33), (((arr_44 [i_13] [10ULL]) ? (((/* implicit */int) arr_44 [i_12] [10ULL])) : (var_9)))));
                        var_34 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [(unsigned char)12] [i_13 - 1] [i_15 + 1]))));
                    }
                } 
            } 
            arr_53 [i_13] [i_12] [i_13] = ((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_13])) ? ((+(-1160479485))) : (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)127)) - (96))))));
            arr_54 [i_12] [i_13] = ((/* implicit */unsigned int) ((arr_47 [i_13 - 1] [i_12 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 - 1] [i_12 - 1])))));
        }
        arr_55 [i_12 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)249))));
    }
    var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) ((((/* implicit */_Bool) min((3293074198U), (((/* implicit */unsigned int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 378589253U)) ? (var_10) : (16LL))))))) + (((/* implicit */int) ((_Bool) (~(var_9)))))))));
}
