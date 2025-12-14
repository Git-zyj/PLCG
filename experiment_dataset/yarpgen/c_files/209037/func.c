/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209037
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 *= ((/* implicit */short) 3691766561U);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_9 [i_3] [(short)7] [i_1] [i_2] [i_3] = 33030144;
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 76480567)) >= (18446744073709551615ULL)))), (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */unsigned int) arr_5 [i_1] [i_1])) : (741995246U)))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(3552972051U))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned int) arr_8 [i_0] [i_4] [i_4])))));
        }
        var_16 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        arr_15 [10] = ((/* implicit */short) arr_2 [i_5 - 1]);
        var_17 |= var_3;
        var_18 += ((/* implicit */unsigned int) arr_13 [i_5]);
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_17 [i_6])))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_6])), (9358966918712250769ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_17 [i_6]), (((/* implicit */unsigned long long int) (unsigned char)77))))) ? (arr_16 [i_6]) : (((/* implicit */int) (short)-20080)))))));
        var_20 = ((/* implicit */short) ((arr_16 [i_6]) | (-33030139)));
    }
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23920)) ? (((/* implicit */int) (short)20965)) : (((/* implicit */int) (short)-1))))) : (arr_4 [i_7] [i_8]))));
            arr_23 [1ULL] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_7])) ? (9514280823358403468ULL) : (((/* implicit */unsigned long long int) min((arr_3 [i_7] [i_8] [i_7]), (arr_3 [i_7] [i_7] [i_7]))))));
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            arr_26 [i_9] [4] [i_7] = arr_18 [i_9];
            var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20965))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((arr_8 [i_7] [i_7] [(short)16]), ((+(((/* implicit */int) (short)-22853)))))))));
        }
        var_24 ^= min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9342491346631959889ULL)) ? (((/* implicit */int) (unsigned char)73)) : (-2019277599))), (((/* implicit */int) ((short) (short)-20441)))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_7]))))), (arr_2 [i_7]))));
    }
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */int) (~(((unsigned long long int) min((arr_28 [i_10]), (arr_10 [i_10]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((short) arr_3 [(short)17] [(short)17] [9U])))));
                                var_27 += max((((/* implicit */unsigned long long int) ((int) arr_20 [i_11]))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20965))) : (min((((/* implicit */unsigned long long int) (short)17240)), (arr_2 [i_10]))))));
                                var_28 = ((/* implicit */unsigned char) arr_17 [i_11]);
                            }
                        } 
                    } 
                    var_29 = arr_11 [i_10] [i_10];
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (~(arr_5 [i_15] [i_15]))))));
        arr_41 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8475)) ? (var_4) : (((/* implicit */int) arr_27 [i_15] [i_15]))));
        arr_42 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_24 [i_15] [i_15])) : (arr_29 [i_15])));
    }
    var_31 -= ((/* implicit */int) var_3);
    var_32 *= ((short) var_2);
}
