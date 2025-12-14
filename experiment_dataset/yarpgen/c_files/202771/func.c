/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202771
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)15))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned long long int) 5LL)) : (18446744073709551604ULL)))))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned char)139)))) : (((18446744073709551611ULL) << (((18446744073709551604ULL) - (18446744073709551601ULL)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) 3240557450U)))))) ^ ((-(max((var_7), (((/* implicit */long long int) var_3))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) << (((((arr_0 [i_0]) + (7971185632731528437LL))) - (26LL)))))) & (((22ULL) ^ (18446744073709551608ULL)))));
            var_16 = ((/* implicit */short) arr_5 [i_0] [i_1]);
        }
        var_17 ^= ((/* implicit */unsigned short) -14LL);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((signed char) 4294967287U))) ? ((~(((/* implicit */int) (unsigned char)31)))) : (-539496053));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(20ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_19 [i_3] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_5]);
                        var_20 = arr_5 [i_3] [i_2];
                    }
                    for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        arr_22 [i_2] [(_Bool)1] [i_3] [i_3] [i_4] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (signed char)-77))))) ? (var_1) : (((((/* implicit */_Bool) 1054409858U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) -7LL))) & (((/* implicit */int) var_3))));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_20 [i_2] [i_2] [(unsigned char)7] [i_2])) / (arr_13 [i_2] [i_2] [i_2])));
        arr_23 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) % (((/* implicit */int) ((signed char) arr_13 [i_2] [i_2] [i_2])))));
        var_23 = ((/* implicit */signed char) ((((9ULL) << (((/* implicit */int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7577060039399540474LL)) ? (var_11) : (0))))));
        arr_24 [i_2] [i_2] = (signed char)-17;
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] = var_12;
        var_24 = ((/* implicit */int) (+(arr_0 [i_7])));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_9 - 1] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
                        var_26 = arr_0 [i_9 - 1];
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_44 [i_13] [i_12] [i_10] [i_9] [i_8] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)32373))))));
                            var_27 -= ((/* implicit */unsigned char) var_10);
                        }
                        for (signed char i_14 = 2; i_14 < 17; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((arr_40 [i_9 + 1]) | (arr_40 [i_9 + 1])));
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9 + 1])) ? (arr_7 [i_14 - 2]) : (((/* implicit */int) (signed char)-77))));
                        }
                        var_30 = ((/* implicit */unsigned short) (((_Bool)1) ? (6356836119905288291ULL) : ((+(9ULL)))));
                        /* LoopSeq 1 */
                        for (int i_15 = 3; i_15 < 19; i_15 += 4) 
                        {
                            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) -65536))));
                            var_32 *= ((/* implicit */_Bool) 5LL);
                        }
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                    {
                        var_33 = (~(((((/* implicit */int) (signed char)67)) << (((((/* implicit */int) arr_43 [i_16] [i_9])) - (12288))))));
                        var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-19230))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (-(((/* implicit */int) arr_55 [i_8] [i_8] [i_17] [i_17] [i_9])))))));
                        arr_56 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (3240557446U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19228)))))) / (((arr_26 [i_17]) ^ (((/* implicit */long long int) arr_7 [i_8]))))));
                    }
                    var_36 = ((/* implicit */int) (+(var_1)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                {
                    var_37 = ((/* implicit */_Bool) var_11);
                    var_38 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_39 [13] [i_18] [i_18] [i_19] [i_18]))))));
                    arr_63 [i_8] [i_18] = ((/* implicit */int) 6356836119905288284ULL);
                    arr_64 [i_19] [i_18] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_53 [i_8] [i_8]) : (arr_53 [i_18] [i_18])));
                }
            } 
        } 
    }
    var_39 = var_5;
}
