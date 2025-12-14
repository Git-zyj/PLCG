/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223636
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)63)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_0 [(signed char)11] [11])) - (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 3] [(_Bool)1])) ? (93319690) : (((/* implicit */int) (unsigned char)255))))) == (((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 3]))) : (10936275787925358808ULL))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)-51)) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned short)9881)) : (((/* implicit */int) arr_0 [(unsigned char)12] [i_2])))) : (((/* implicit */int) (unsigned char)1)))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 18446181123756130304ULL)) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2]) : (((/* implicit */int) (short)-32606))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [11LL] [(unsigned char)17])) | (((/* implicit */int) (unsigned short)55654))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1 - 3] [i_3]))) & (7510468285784192807ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0 - 1]))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_0 - 1])) & (arr_1 [i_2])));
                        arr_11 [i_3] [(signed char)3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((((/* implicit */int) (signed char)-110)) + (2147483647))) << (((arr_10 [15U] [i_1] [i_2] [i_3]) - (1510113805U))))));
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_0 + 2] [(signed char)10])) ? (((9223372036854775807LL) % (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 - 3] [i_1 + 1])))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2745745669U) / (arr_10 [i_0 + 2] [i_1] [i_2] [i_4])))) ? (2006698025) : (arr_8 [i_0 + 1] [i_0 + 1] [i_1 + 1])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */_Bool) ((short) 2745745669U));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */signed char) ((1577765089) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) 1932737750320451988LL)))))));
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_5] [13])) ? (((/* implicit */int) (signed char)-114)) : (1077191052))) | (((/* implicit */int) (unsigned char)129))));
                        var_23 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_8] [i_8 + 2])) ? (arr_6 [i_5] [i_6] [i_7] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))) << (((((((/* implicit */int) (unsigned short)51842)) ^ (((/* implicit */int) (unsigned char)114)))) - (51952)))));
                        var_24 = ((/* implicit */unsigned char) ((long long int) arr_22 [i_8 - 2] [i_6] [i_5] [i_7]));
                    }
                } 
            } 
        } 
        arr_24 [i_5] = ((/* implicit */short) (signed char)-75);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [18LL] [i_9]))) + (arr_27 [i_9])));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (short)605)) : (((/* implicit */int) (unsigned char)244))))) || (((/* implicit */_Bool) (short)605))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_23 [i_9] [12LL])) & (((2745745669U) ^ (((/* implicit */unsigned int) -1841178900))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            var_28 = (i_9 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_10 + 2] [i_10 + 3] [(_Bool)1] [i_10 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)142)) >> (((((/* implicit */int) arr_3 [i_9])) + (29259)))))) : (((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(short)8]))) : (3038009427418125517LL)))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_10 + 2] [i_10 + 3] [(_Bool)1] [i_10 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)142)) >> (((((((/* implicit */int) arr_3 [i_9])) + (29259))) - (31456)))))) : (((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(short)8]))) : (3038009427418125517LL))))));
            var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10 + 2] [i_9]))) <= (((arr_22 [i_9] [i_9] [i_9] [i_9]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51862)))))));
            arr_30 [i_9] [i_9] [i_10 - 1] = ((/* implicit */_Bool) ((arr_19 [i_10 + 3] [i_10 + 2] [i_10 + 1]) ? (((/* implicit */int) ((((/* implicit */_Bool) 4186112U)) || (((/* implicit */_Bool) 2991558098U))))) : (((((/* implicit */int) (short)32767)) & (((/* implicit */int) (short)-29692))))));
        }
        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_30 *= (short)(-32767 - 1);
                var_31 = ((/* implicit */unsigned char) ((signed char) ((-1841178897) + (((/* implicit */int) (unsigned short)51862)))));
            }
            var_32 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)127)) * (((/* implicit */int) arr_17 [i_9])))) % (((/* implicit */int) arr_33 [i_11] [i_11 + 1]))));
        }
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (unsigned short)13674)), (var_3)))))));
    var_34 = ((/* implicit */signed char) -3038009427418125515LL);
}
