/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54289
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (857475989915446012ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17589268083794105620ULL)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -2147483627)) : (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) 857475989915446015ULL);
        var_14 = ((/* implicit */short) min((var_14), (((short) (+(arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_4 [i_1])))) ? (((((/* implicit */int) arr_3 [i_1] [8ULL])) - (arr_4 [(_Bool)1]))) : (((/* implicit */int) arr_3 [i_1] [1U])))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_1 [i_1]) : (((var_6) % (var_12))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-10)))))))));
        arr_5 [i_1] = ((/* implicit */signed char) (+(-9223372036854775785LL)));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_17 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) ^ (857475989915446022ULL)))))) ? (((/* implicit */int) arr_7 [i_2 + 2])) : ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_3] [8])) : (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (857475989915446010ULL) : (857475989915446033ULL)))) ? (((/* implicit */int) (short)-13834)) : (((/* implicit */int) arr_8 [i_5 + 1]))))));
                                arr_18 [9] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */int) max((((arr_6 [i_2]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_8 [i_6]))))))), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [(_Bool)1]))));
                                arr_19 [i_2] = ((/* implicit */unsigned int) ((2147483626) >= (max((((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) var_1)) : (141223747))), ((+(((/* implicit */int) (short)-1))))))));
                                arr_20 [7U] = ((/* implicit */short) ((unsigned int) arr_10 [i_2 - 3]));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) arr_11 [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_8])) ? (max((((/* implicit */unsigned long long int) var_8)), (857475989915446033ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)58074), (((/* implicit */unsigned short) arr_21 [i_2] [i_7 + 1] [i_2]))))))))) ? (max((((((/* implicit */int) (unsigned short)411)) % (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) (_Bool)1))));
                    arr_26 [i_8] [3ULL] [i_2] = ((/* implicit */_Bool) (+(max((var_10), (((/* implicit */unsigned long long int) max((5045263327212207904LL), (((/* implicit */long long int) var_11)))))))));
                    var_21 = ((/* implicit */_Bool) arr_22 [i_2 - 2] [i_2 - 2] [i_2]);
                    arr_27 [i_2] [i_2] [(signed char)5] [5] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) var_8)) ^ ((~(var_10)))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 2; i_9 < 8; i_9 += 2) 
    {
        arr_32 [i_9 + 1] = ((/* implicit */int) 5045263327212207906LL);
        var_22 = ((/* implicit */long long int) max((var_22), (((((max((var_3), (-6616181255614406659LL))) - ((-(var_7))))) + (((((/* implicit */_Bool) 3481729021U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((var_2), (((/* implicit */long long int) (unsigned short)33230))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_23 &= ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9])))))) ? (arr_0 [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned char) (!(var_5)));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 4; i_11 < 7; i_11 += 3) 
            {
                for (unsigned int i_12 = 2; i_12 < 8; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_10] [5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9 - 1] [i_9] [i_9 + 1] [(unsigned short)11] [i_9 + 1]))) : (-6540173761129329509LL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)54))))) : ((-(arr_24 [(unsigned char)15] [(_Bool)1] [11U]))))))));
                        arr_40 [8ULL] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_9 - 1]))));
                    }
                } 
            } 
            var_26 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_38 [i_9 - 2] [i_9 - 2])) / (arr_15 [i_9] [i_9] [1ULL] [i_9] [i_10] [i_10]))));
            arr_41 [(_Bool)1] = ((/* implicit */int) -1LL);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_46 [i_9] [i_9 - 1] [i_9 - 1] = ((/* implicit */unsigned short) max((-1199249529), (((/* implicit */int) (unsigned char)113))));
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 166415218U)), (arr_6 [i_15]))))))));
                            arr_56 [i_16] [i_14] [(short)1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_15])) ? (arr_6 [i_13]) : (arr_6 [2LL])))) ? ((+(((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (arr_6 [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_14] [i_14] [i_14])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_17 = 1; i_17 < 9; i_17 += 1) 
        {
            arr_60 [i_17] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_15 [i_17 - 1] [i_9 + 1] [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 1]) - (arr_15 [i_17 + 1] [i_17 - 1] [2ULL] [i_17] [i_9 - 2] [i_9 + 1])))), (max((943926398U), (((/* implicit */unsigned int) arr_15 [i_17 - 1] [i_9] [9] [i_9] [i_9 + 2] [i_9 - 1]))))));
            var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (arr_39 [5ULL] [5ULL] [5ULL] [i_17 + 1] [(signed char)4] [(signed char)4])))) & (((/* implicit */int) arr_33 [i_17 + 1] [i_9]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33230)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) arr_10 [13LL]))))) ? (arr_0 [i_9 - 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_9 + 2] [9])))))))));
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_35 [6] [i_9 + 1] [i_9 - 2] [5])), (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_57 [6ULL] [(unsigned char)9] [6LL])) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((arr_6 [i_9]) + (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) (unsigned short)50540)) : (((arr_37 [i_9 - 2] [i_9 - 2] [i_9] [i_9]) / (((/* implicit */int) arr_55 [i_9] [(short)6] [i_9])))))) : (((int) var_4))));
    }
}
