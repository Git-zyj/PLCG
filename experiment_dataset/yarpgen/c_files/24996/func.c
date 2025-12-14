/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24996
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */short) var_3);
                            var_17 = arr_3 [i_0] [i_0];
                        }
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-34))))) + (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [(unsigned short)0] [i_1] [i_0]))) : (((((/* implicit */_Bool) 16777216LL)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
                        var_19 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_1] [i_3] [i_3]);
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((long long int) arr_3 [i_1] [i_3])), (((/* implicit */long long int) (((-(arr_12 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) -9223372036854775807LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) -16777216LL);
                            var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)11]))))))));
                            arr_27 [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */unsigned int) (+((~((~(12464178623252599634ULL)))))));
                        }
                        arr_28 [i_0] [i_5] [i_5] [i_0] [i_7] [i_6] = ((/* implicit */unsigned char) arr_4 [i_6] [i_7]);
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 23; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_21 [i_0] [i_0]))));
                        var_25 *= ((/* implicit */signed char) (-(arr_0 [i_5 + 1] [i_9 + 1])));
                    }
                    for (short i_10 = 3; i_10 < 22; i_10 += 4) 
                    {
                        arr_35 [i_6] [i_5] [(_Bool)1] [i_10] = 5982565450456951976ULL;
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) min(((!(((/* implicit */_Bool) (unsigned short)7680)))), ((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_27 = ((((/* implicit */_Bool) -9223372036854775807LL)) || (((/* implicit */_Bool) ((((2066936689984166399ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37449))))) ? (13944526792160996575ULL) : (((/* implicit */unsigned long long int) 22U))))));
                    }
                    arr_36 [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2800483078U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31092))) : (9603908444679842004ULL))))));
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2051826494U)) >= ((~(((5982565450456951976ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))))));
                    arr_44 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) | ((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) 4502217281548555041ULL))));
    }
    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 4) 
    {
        arr_47 [i_14] [i_14] = ((/* implicit */short) (unsigned char)96);
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) 0LL);
                    arr_54 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (arr_11 [i_14] [i_14] [i_14] [i_15] [i_14] [(_Bool)0] [i_14])))))) ? ((+(13657360219269958182ULL))) : (max(((-(arr_38 [i_14 + 1]))), (((((/* implicit */_Bool) (unsigned char)255)) ? (2066498419284405505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32040)))))))));
                    var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1] [21U])) ? (((/* implicit */int) arr_31 [i_14 - 1] [i_15] [i_16])) : (((/* implicit */int) var_8))))));
                    var_32 ^= ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) (short)-4669)) <= (((/* implicit */int) (_Bool)1))))), ((short)-21308)));
                }
            } 
        } 
        arr_55 [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_14] [i_14] [i_14 + 1] [i_14]))) | (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63003))))) % (arr_38 [i_14 + 1]))));
    }
    /* LoopSeq 1 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_33 = ((((/* implicit */_Bool) arr_8 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((((/* implicit */_Bool) arr_25 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_17] [i_17] [i_17] [i_17]))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (long long int i_18 = 2; i_18 < 17; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1104073034U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                    var_35 = ((/* implicit */short) min(((!(((/* implicit */_Bool) 9223372036854775794LL)))), ((_Bool)1)));
                }
            } 
        } 
        arr_63 [i_17] = ((/* implicit */int) (+(((((/* implicit */_Bool) 14377980871198065764ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_4) : (arr_12 [i_17])))) : (((18446744073709551615ULL) + (arr_9 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))));
    }
    var_36 -= ((/* implicit */unsigned long long int) var_7);
}
