/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205971
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
    var_10 |= ((/* implicit */unsigned long long int) ((var_9) ^ (var_3)));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_0))));
    var_12 *= ((/* implicit */short) (unsigned char)55);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_1 + 1]);
            arr_6 [10LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1]);
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1])) % (((/* implicit */int) var_6)))))));
        }
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))))));
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */short) ((int) arr_8 [i_2] [2U] [i_2 + 2]));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                var_15 |= ((/* implicit */short) arr_10 [i_2 + 2] [i_3 - 1] [i_3] [i_3 + 1]);
                var_16 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_4]))));
                var_18 &= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2 + 3] [(unsigned short)9] [(unsigned short)9] [3LL])) + (((/* implicit */int) ((unsigned char) 10439002380318687451ULL)))));
                var_19 -= ((/* implicit */signed char) (unsigned short)39093);
            }
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64362)) ? (arr_12 [i_0] [i_5] [0ULL]) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) : (1907072657U)))));
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_2 [i_0] [i_0])))) * (((/* implicit */int) arr_14 [i_0] [(short)10] [i_5]))));
            var_22 |= ((/* implicit */_Bool) var_4);
        }
        arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [2LL] [i_0])) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))));
        arr_17 [2ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
        var_23 = ((/* implicit */_Bool) min((var_23), (arr_2 [11LL] [11LL])));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) arr_22 [i_6] [(unsigned short)7] [i_8] [(unsigned short)7])) * (13341267249707644122ULL))));
                    var_25 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)198)) | (((/* implicit */int) (unsigned char)68))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((((var_3) % (-352701211566258022LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -732559112)) && (((/* implicit */_Bool) arr_21 [i_8] [i_8]))))))))));
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        arr_31 [i_6] [i_6] [i_7] [i_10] [i_11 - 1] = (~((~(var_1))));
                        arr_32 [i_10] [i_8] [i_8] [i_10] [i_11 + 2] &= ((/* implicit */unsigned char) (+(arr_28 [(unsigned short)6] [i_11 + 2] [i_11] [i_8] [i_11 + 2] [i_11 - 1] [i_8])));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7 - 1])) ? (((/* implicit */int) arr_18 [i_7 + 2])) : (((/* implicit */int) arr_18 [i_7 + 1])))))));
                        arr_33 [i_6] [i_7] [i_8] [i_10] [12ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_6])))) : (((1287390078U) & (arr_22 [i_7] [i_7] [i_8] [i_8])))));
                    }
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_24 [9U] [i_10] [i_8] [i_7] [i_6])))));
                }
                arr_34 [i_7] [i_7] [(short)11] = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 4) 
                {
                    arr_37 [i_6] [i_7] [i_8] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_6] [i_6] [i_7 + 2] [i_12 - 1] [i_12 - 2] [i_12 - 2]))));
                    var_29 = ((/* implicit */unsigned int) var_9);
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((arr_25 [i_12 - 3] [i_8] [i_7 + 1] [i_12 - 3] [i_8]) + (1208648450))))))));
                }
                for (unsigned char i_13 = 2; i_13 < 15; i_13 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) (_Bool)1);
                    var_32 |= ((/* implicit */unsigned short) ((arr_25 [i_7 - 1] [i_8] [i_13 - 2] [i_13 + 1] [i_13]) > (((/* implicit */int) arr_29 [i_8] [i_6] [i_13 - 2] [i_13 + 1] [4LL] [i_13 + 1] [i_13 - 2]))));
                    var_33 += ((/* implicit */short) arr_18 [i_6]);
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_34 |= 1287390107U;
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (5105476824001907508ULL) : (((/* implicit */unsigned long long int) var_3)))))));
                    }
                }
                var_36 |= ((/* implicit */unsigned long long int) ((arr_30 [i_7] [i_7 - 1] [i_7 - 1] [i_8] [i_7 + 2] [i_6] [i_6]) / (((unsigned int) arr_24 [i_6] [i_6] [(_Bool)1] [i_7 + 1] [i_8]))));
            }
            var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
        }
        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 4) 
        {
            var_38 *= ((/* implicit */short) var_2);
            /* LoopSeq 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_39 = ((/* implicit */unsigned short) arr_20 [i_16]);
                arr_47 [(_Bool)1] [i_16] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) arr_39 [i_15 - 1] [i_15 + 3]))));
                var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_15] [i_15 + 3] [i_15 + 4] [i_15 + 1] [i_15 - 1] [i_15 + 4] [i_15 - 1])) && (((/* implicit */_Bool) arr_36 [i_15 - 2] [i_15 + 1] [i_15 + 2] [i_15 + 3] [i_15] [i_15 + 4]))));
            }
            for (long long int i_17 = 2; i_17 < 14; i_17 += 3) 
            {
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) var_4))));
                arr_51 [11LL] [i_15] [11LL] = ((/* implicit */short) ((arr_28 [(unsigned char)9] [i_17 + 1] [i_15 + 1] [i_17 + 2] [i_15] [14U] [5U]) <= (1036319373U)));
                arr_52 [i_6] [i_15] [i_17 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [i_6] [i_15 + 3] [i_17] [i_17 - 1] [i_17] [i_15 + 3]))))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19864)))));
                var_42 &= (unsigned char)80;
            }
            for (unsigned long long int i_18 = 2; i_18 < 15; i_18 += 2) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_15])) >> (((arr_44 [i_15]) - (1762685695U)))));
                arr_57 [i_6] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_18 + 1] [i_15 - 2]))));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            arr_62 [i_6] [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
            var_44 ^= ((/* implicit */int) (+(2545732436U)));
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (_Bool)1))));
        }
        var_46 &= var_6;
    }
    /* vectorizable */
    for (unsigned int i_20 = 3; i_20 < 21; i_20 += 1) 
    {
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */int) var_7)) - (arr_64 [(_Bool)1]))))));
        arr_65 [i_20] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_63 [i_20] [21U])))) | (((/* implicit */int) arr_63 [i_20 - 2] [i_20 - 3]))));
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            var_48 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((4294967271U) > (((/* implicit */unsigned int) var_4)))))));
            var_49 = ((/* implicit */short) ((unsigned long long int) var_9));
        }
    }
}
