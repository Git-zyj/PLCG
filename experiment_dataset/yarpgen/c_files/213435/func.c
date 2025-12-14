/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213435
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
    var_10 -= ((/* implicit */long long int) ((unsigned long long int) 18161644080447147468ULL));
    var_11 *= ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned long long int) 2884525157266007912LL);
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (5772638744772233430ULL))), (((/* implicit */unsigned long long int) ((2884525157266007923LL) >= (2884525157266007912LL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (unsigned short)28251);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] |= (-(5772638744772233432ULL));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) >> (((arr_9 [i_2 - 1] [i_3 - 1] [i_3 + 1]) - (9491084108619085601ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2884525157266007901LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (5772638744772233438ULL)));
                            arr_17 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((8796093022207ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            var_16 = (-(-2884525157266007913LL));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_1))));
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_2 + 3]))) : ((~(-2884525157266007924LL)))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [0ULL] [i_2 + 2] [0ULL] [i_2 + 2] [i_4] [i_6] = ((/* implicit */unsigned short) ((unsigned char) 18446744073709551606ULL));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((0ULL) > (((/* implicit */unsigned long long int) -2884525157266007924LL))));
                        }
                        for (long long int i_7 = 4; i_7 < 13; i_7 += 1) 
                        {
                            var_19 &= 167744358950000645ULL;
                            var_20 -= var_7;
                        }
                        arr_25 [i_1] [i_4] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) arr_20 [i_4] [i_4] [i_4] [i_1]);
                        arr_26 [i_1] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) arr_12 [i_4]));
                        var_21 &= ((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2] [i_3 - 1] [i_3 - 1]);
                        var_22 &= ((/* implicit */unsigned char) 6911501542082389503ULL);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_8] [i_3] [(unsigned char)12] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) & (arr_15 [i_8] [i_3 + 1] [i_3 - 1] [i_3 + 1])));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3 + 1] [i_2 + 2]))) >= (arr_15 [i_1] [i_3 - 1] [i_1] [i_8]))))));
                            }
                        } 
                    } 
                    arr_34 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_36 [i_10]), (arr_36 [i_10])))) ? (max((arr_36 [i_10]), (arr_36 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_36 [i_10]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 1) 
        {
            arr_40 [i_11] = ((/* implicit */unsigned char) ((((var_7) * (var_6))) / (arr_36 [i_11])));
            var_25 = ((((11535242531627162113ULL) <= (((((/* implicit */_Bool) 6911501542082389516ULL)) ? (4908291762131999465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20941))) : (5861444847684187414ULL));
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 22; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) (((-(var_2))) != (((((/* implicit */_Bool) arr_42 [i_12 + 2] [i_12 + 1] [i_12])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))))));
                        arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_13] = ((/* implicit */unsigned char) var_0);
                        var_27 = ((/* implicit */long long int) arr_36 [i_13]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                for (unsigned char i_15 = 3; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_28 -= ((5298601112523206237ULL) & (322361090645627117ULL));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) min((arr_48 [i_10] [i_11 - 1] [i_14]), (arr_48 [i_10] [i_11 - 1] [i_10]))))));
                        arr_52 [0LL] [i_15] [4ULL] = ((/* implicit */unsigned long long int) ((long long int) arr_42 [i_15] [i_15 - 3] [i_15]));
                        var_30 = var_6;
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_45 [i_10] [4LL]), (((/* implicit */unsigned long long int) var_5))))) ? (arr_37 [i_11] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((2884525157266007912LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22143)))))))), (((arr_37 [i_11 + 1] [i_11 + 1]) / (((/* implicit */unsigned long long int) 3377918612376296100LL))))));
        }
        for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 3) 
        {
            var_32 = ((((/* implicit */_Bool) max((arr_42 [i_16 + 2] [i_16 - 1] [i_10]), (arr_42 [i_16 + 2] [i_16 + 2] [i_16])))) ? (max((arr_42 [12LL] [i_16 + 2] [12LL]), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_42 [i_16 - 1] [i_16 + 2] [(unsigned char)22]) == (arr_42 [i_16] [i_16 - 1] [i_16 + 2]))))));
            arr_55 [i_10] [i_16] [i_16] = (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2265515975546147865ULL) : (1702601550703789233ULL))));
        }
        var_33 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_44 [i_10] [i_10])))) ? (((unsigned long long int) ((1124445868203051953ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_10] [i_10] [i_10])))))) : (((((/* implicit */_Bool) arr_50 [i_10])) ? (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16579126969823975398ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)142)))))))));
    }
}
