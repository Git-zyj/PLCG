/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228301
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
    var_18 = ((/* implicit */short) var_17);
    var_19 -= ((/* implicit */_Bool) var_1);
    var_20 += ((/* implicit */short) ((int) ((min((((/* implicit */int) (unsigned char)99)), (var_1))) / (((/* implicit */int) var_13)))));
    var_21 = ((/* implicit */long long int) (+(5833051997056294244ULL)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_1 + 2] = ((/* implicit */_Bool) var_2);
            arr_8 [i_1] |= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) var_14))), (max((arr_0 [i_1]), (arr_0 [i_1])))));
            arr_9 [2LL] [i_0] [5ULL] = ((/* implicit */short) arr_2 [i_0] [i_1 - 2]);
        }
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2]))))) : (((((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_5 [i_2]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_23 = ((short) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_6)) + (20410)))));
                arr_15 [i_0] [i_0] [i_0] = var_7;
            }
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)7956)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)155)))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-7)))), (arr_4 [i_0])))) : ((~(((((/* implicit */_Bool) (short)2708)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5298085495949461757LL)))))));
                        var_25 = ((/* implicit */short) arr_12 [i_5]);
                        arr_23 [i_0] [i_0] [i_4] [i_0] = ((((/* implicit */int) (unsigned char)252)) > (((/* implicit */int) min(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-115))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) var_16);
            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_6] [1U] [(short)9] [i_0]))));
            var_28 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7942))) : (5762295149984808968ULL));
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 13; i_7 += 4) 
        {
            for (short i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-19142)))) ? ((~(((/* implicit */int) arr_13 [i_0] [i_0] [8ULL] [i_7 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64196))))))))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)1619))))));
                    arr_30 [11U] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7 - 3])) ? (((/* implicit */int) arr_16 [i_7 - 2] [i_7 + 2] [i_8 + 1] [i_8 - 1])) : (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 2] [i_8 - 2] [i_8 - 2]))))) <= (((3271961792U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_7] [i_7] [i_0] [i_0] [i_10] = ((/* implicit */short) max((7699566038941567573ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_36 [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (5762295149984808974ULL)));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8 + 1])) ? (var_1) : (((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)11192)) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_37 [i_0] = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) (unsigned short)39840)) >> (((var_5) - (445768409950688732LL))))), (((/* implicit */int) var_0))))));
                }
            } 
        } 
    }
    for (int i_11 = 4; i_11 < 18; i_11 += 4) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((short) (unsigned char)163));
        var_32 = ((/* implicit */short) (+((~(((/* implicit */int) (short)32767))))));
        var_33 = ((/* implicit */_Bool) min(((((_Bool)1) ? (max((10729338073863523338ULL), (((/* implicit */unsigned long long int) (short)2708)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_39 [i_11] [i_11])), (var_17)))))), (((/* implicit */unsigned long long int) min(((unsigned char)93), (((/* implicit */unsigned char) arr_39 [i_11 + 1] [i_11 + 1])))))));
        arr_42 [i_11 + 2] = ((/* implicit */_Bool) arr_38 [i_11]);
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
    {
        arr_45 [i_12] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)163));
        var_34 = ((/* implicit */signed char) arr_22 [14LL] [i_12] [i_12] [i_12]);
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
    {
        var_35 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [14LL] [i_13] [i_13] [14LL]))) / (arr_18 [i_13] [(unsigned short)8] [i_13] [i_13]))) <= (arr_18 [i_13] [i_13] [i_13] [i_13])))), ((+(((/* implicit */int) (short)-2706))))));
        var_36 = ((/* implicit */short) max(((_Bool)1), ((_Bool)1)));
    }
}
