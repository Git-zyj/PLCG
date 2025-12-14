/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235479
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-22151)) ? (((/* implicit */int) (short)2048)) : (((/* implicit */int) (short)2040))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (var_9)))) ? (((/* implicit */int) (short)2048)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)2040)) : (((/* implicit */int) arr_0 [(unsigned short)6]))))))) ? ((~(max((arr_2 [i_0]), (arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2018))))) ? (((((/* implicit */int) (short)2018)) | (((/* implicit */int) (short)2070)))) : (((/* implicit */int) (short)2048)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-2041)), (((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)2013)) : (((/* implicit */int) (short)-2049)))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */int) (short)2041);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_7 [11LL]))));
        arr_9 [2LL] [(unsigned short)16] |= ((/* implicit */_Bool) ((((((arr_7 [i_2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1995)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2041))))) - (16702424550258258963ULL)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_15 = (~(((((/* implicit */int) arr_7 [i_3])) << (((((/* implicit */int) (short)-2003)) + (2012))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    arr_21 [i_6] [i_5] [i_5] [i_4] [i_4] [i_3] = (-(((((/* implicit */int) (short)2047)) >> (((((/* implicit */int) (short)2040)) - (2013))))));
                    arr_22 [i_6] [i_5] [i_5] [i_4] [i_3] = ((/* implicit */signed char) ((int) (short)-2041));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_3] [i_4] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2041)) ? (((/* implicit */int) (short)-2046)) : (((/* implicit */int) (short)-2042)))))));
                        arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_6] [i_4]);
                        arr_27 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_6] [i_6])) <= (((((/* implicit */int) (short)-2019)) / (((/* implicit */int) (short)2035))))));
                        arr_28 [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (short)-2069);
                    }
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        var_16 = (((-(var_4))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (short)-2045))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)2013)) || (((/* implicit */_Bool) (short)-2054)))))));
                        arr_31 [i_4] [(short)5] [i_4] [(short)5] = ((/* implicit */short) arr_18 [i_8 + 1] [i_8 + 2] [i_8 - 1]);
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-1999))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) (short)-2046))))));
                    }
                    for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_34 [i_5] [i_5] [i_3] [i_6] [i_9] = ((unsigned short) ((((/* implicit */int) (short)2050)) & (((/* implicit */int) (short)2050))));
                        arr_35 [i_3] [i_4] [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_19 [i_9 - 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_3]) <= (arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-2035)))))));
                        var_21 = ((((((/* implicit */_Bool) (short)-2068)) ? (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)1983)))) <= (arr_11 [i_9]));
                        arr_36 [i_3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)2018)) << (((((/* implicit */int) arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9])) - (55387)))));
                    }
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (short)1999);
                        arr_39 [i_10 + 2] [i_4] [i_5] [i_4] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) & (arr_38 [i_3] [i_3])));
                        arr_40 [i_10 + 3] [i_10] [i_6] [i_5] [4ULL] [i_3] [i_3] = ((((/* implicit */int) var_10)) & (((/* implicit */int) (short)-2018)));
                        arr_41 [5LL] [5LL] [i_5] [i_6] = ((((/* implicit */_Bool) (short)1991)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-1987)));
                        var_23 = ((/* implicit */_Bool) ((arr_19 [i_3] [i_3] [i_3] [i_5] [i_3] [i_5]) | (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-2051))))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (short)2049))));
                    arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */short) arr_14 [i_5] [i_4] [i_3]);
                    var_25 = ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3]);
                }
                var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1962))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_12 = 2; i_12 < 15; i_12 += 2) 
            {
                arr_48 [i_12 - 1] [i_4] [i_3] [7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_12 - 1] [i_3] [i_12 - 2] [i_12 - 1] [i_3] [i_4]))) : (arr_18 [i_3] [i_4] [i_12 + 2])));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_42 [i_12] [i_4] [i_3]))));
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_55 [i_14] [(short)5] [i_12] [i_4] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) (short)-2003)) : (((/* implicit */int) (short)-1991))));
                            var_28 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                            arr_56 [i_3] = (((+(((/* implicit */int) (short)1987)))) >= (((((/* implicit */_Bool) (short)-2003)) ? (((/* implicit */int) (short)1981)) : (((/* implicit */int) (short)2032)))));
                        }
                    } 
                } 
                arr_57 [i_12 + 1] [(_Bool)1] [5] |= ((/* implicit */unsigned long long int) (!(arr_44 [(short)16] [i_12 - 1] [(_Bool)1])));
                var_29 = ((/* implicit */unsigned short) (short)-2042);
            }
            for (short i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_64 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-2041)) - (((/* implicit */int) (short)-1995))));
                            arr_65 [i_3] [i_3] [i_4] [i_16] [i_17] |= ((/* implicit */_Bool) arr_29 [i_3] [i_3] [(_Bool)1] [(_Bool)1]);
                            arr_66 [i_17] [i_15] [i_15] [(short)12] [i_17] |= ((/* implicit */long long int) ((unsigned int) (short)2040));
                        }
                    } 
                } 
                arr_67 [i_3] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) var_5);
            }
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2040))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-2024)))) : (((arr_15 [i_3] [i_3] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2040)))))));
        arr_68 [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */int) (short)-2003)) / (((/* implicit */int) (short)1969))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (short)2040))));
        var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-2040))));
    }
    /* vectorizable */
    for (short i_19 = 3; i_19 < 11; i_19 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) (short)1987);
        arr_75 [i_19] [i_19] = ((/* implicit */unsigned short) ((_Bool) (short)2048));
        arr_76 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_19 + 1] [i_19 - 3] [i_19 + 1] [i_19 - 1])) ? (((/* implicit */int) arr_20 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 2])) : (((/* implicit */int) arr_20 [i_19 - 3] [i_19 - 3] [i_19 - 3] [i_19 - 2]))));
    }
}
