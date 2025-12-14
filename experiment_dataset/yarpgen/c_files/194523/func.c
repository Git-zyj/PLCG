/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194523
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)100))))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned int) var_5);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned short) (short)0))))), (min((var_9), (((/* implicit */unsigned int) (unsigned char)172))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */int) (unsigned char)83)) + (((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) (unsigned char)172))))));
                    var_12 = ((/* implicit */long long int) arr_1 [i_3]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] [11U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_5] [(unsigned short)7]))))) >= (((unsigned long long int) (+(var_8))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        arr_20 [i_4] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)83)) / (((/* implicit */int) (unsigned char)172))))) || (((/* implicit */_Bool) min((arr_15 [i_4] [i_4] [i_4] [i_4]), (arr_15 [i_4] [i_6] [i_6] [7ULL]))))));
                        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)76))));
                    }
                    arr_21 [i_4] [i_5] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (-(522352593)))), (min((((/* implicit */long long int) arr_19 [i_4])), (arr_0 [i_6])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_26 [7U] [i_8] = ((/* implicit */unsigned int) -522352602);
        arr_27 [i_8] = ((/* implicit */int) min((((/* implicit */long long int) (+(522352602)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -670642228)) ? (522352602) : (((/* implicit */int) (_Bool)1))))) ? (-609437676564979022LL) : (((/* implicit */long long int) (-2147483647 - 1)))))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            var_14 = var_8;
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                arr_34 [i_8] [i_8] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)174)))), ((+(((/* implicit */int) var_7))))));
                arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)219))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2542911934U)))) : (((((/* implicit */_Bool) 522352602)) ? (((/* implicit */long long int) 307205177U)) : (9223372036854775807LL))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)211), ((unsigned char)37)))) ? (arr_22 [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    var_15 *= (short)8334;
                    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_36 [10U])) : (((/* implicit */int) (unsigned char)24)))))), (((/* implicit */int) min((((/* implicit */signed char) arr_23 [i_8])), (arr_29 [i_8 + 1] [16LL]))))));
                    arr_38 [(unsigned short)3] [i_9] [i_8] [i_11] = ((/* implicit */unsigned short) 4294967275U);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 1]))))) ? (((/* implicit */int) (unsigned char)84)) : (((((/* implicit */_Bool) ((unsigned int) arr_32 [i_8] [i_8] [i_8] [i_8]))) ? (((/* implicit */int) ((unsigned short) (signed char)78))) : (min((((/* implicit */int) var_1)), (805306368)))))));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_42 [i_13] [i_8])) ? (((/* implicit */int) arr_42 [i_12] [i_8])) : (((/* implicit */int) arr_42 [i_8] [i_8])))), (((int) ((((/* implicit */unsigned long long int) 522352602)) > (arr_28 [i_8]))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-8342))) < (1252101547U))) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)37865)))))));
                            arr_46 [i_8] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))))) ? ((+(2386104866U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_45 [i_14] [(unsigned short)13] [i_8] [(signed char)16] [i_8] [i_9] [i_8 + 1])) : (((/* implicit */int) (short)-21930))))) == (var_0)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)29930), (((/* implicit */unsigned short) arr_31 [i_8 + 1]))))) ? ((-(((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) var_2))));
            }
        }
        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */int) min((arr_33 [i_8 + 1] [i_15]), (arr_33 [i_8 + 1] [i_15])))) >= (((/* implicit */int) ((((/* implicit */int) arr_33 [i_8 + 1] [(_Bool)1])) < (((/* implicit */int) (unsigned short)16328)))))));
            arr_49 [i_8] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)195)) << (((((/* implicit */int) var_5)) - (129))))) - (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)67)) - (46)))))));
        }
        for (unsigned int i_16 = 4; i_16 < 17; i_16 += 4) 
        {
            var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)119))))), (var_0))) | (((((/* implicit */_Bool) var_2)) ? (min((2587106960U), (((/* implicit */unsigned int) (unsigned char)163)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_8]) >= (3718471494069566321ULL)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 2) 
            {
                arr_56 [i_8] [(unsigned short)15] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_33 [(signed char)5] [i_16])))))), ((-(((((/* implicit */_Bool) -522352602)) ? (arr_41 [i_8] [i_8] [i_17] [i_16]) : (((/* implicit */unsigned long long int) var_9))))))));
                arr_57 [i_8] [i_8] [i_8] [i_8 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_41 [i_8] [i_16 - 1] [i_16 - 4] [i_8 + 1]));
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        {
                            arr_64 [i_8] [i_16 - 3] [i_8] [i_19] = ((/* implicit */long long int) (unsigned short)37865);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) -591498223))));
                            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2912836634U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)52420)))) : (((/* implicit */int) ((signed char) (short)-8334)))))) ? (((((arr_63 [i_8 + 1] [15U] [i_17] [i_18] [i_18] [15U] [i_18 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) arr_23 [i_17])))))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_7)))))));
                        }
                    } 
                } 
            }
            arr_65 [i_8] = var_1;
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                for (long long int i_21 = 3; i_21 < 16; i_21 += 4) 
                {
                    for (int i_22 = 1; i_22 < 18; i_22 += 4) 
                    {
                        {
                            arr_74 [i_8] [i_8] [i_8] [i_20] [i_20] [i_21] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)173))));
                            var_25 = min((((/* implicit */unsigned long long int) (_Bool)0)), (6567704199839978611ULL));
                            var_26 = ((/* implicit */unsigned short) var_5);
                            var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8342)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_54 [i_8 + 1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) ((((/* implicit */int) (short)-8332)) < (((/* implicit */int) var_1))))) | ((~(((/* implicit */int) (_Bool)1)))))) : (min(((+(((/* implicit */int) arr_42 [i_8] [i_16])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
