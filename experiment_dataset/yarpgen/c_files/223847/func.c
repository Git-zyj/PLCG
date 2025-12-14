/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223847
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_1] [i_2]);
                    var_12 = ((((/* implicit */_Bool) ((((unsigned long long int) arr_5 [i_2] [i_0 - 1] [i_2])) % (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_2] [i_0])))))) ? (((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_13 = ((unsigned long long int) 9223372036854775800LL);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) var_2)) ? (max((-9223372036854775800LL), (-6152230230968775343LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [7LL] [(unsigned short)11])) - (((/* implicit */int) var_11))))));
                                var_15 = (i_5 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_5])) ? (min((((/* implicit */unsigned long long int) -9223372036854775796LL)), (arr_12 [i_4] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_6] [i_4] [i_5]))))) << ((+(((/* implicit */int) arr_14 [i_5]))))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_5])) ? (min((((/* implicit */unsigned long long int) -9223372036854775796LL)), (arr_12 [i_4] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_6] [i_4] [i_5]))))) << ((((+(((/* implicit */int) arr_14 [i_5])))) - (86))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (arr_5 [i_0 - 1] [i_0 - 1] [10LL])));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */unsigned char) 2937535414072841093ULL);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [(short)4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2))))))) > ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
            var_17 = ((/* implicit */unsigned short) min((((/* implicit */short) max((var_1), (var_11)))), (var_9)));
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) ((max((arr_9 [i_0]), (arr_9 [i_0]))) | (((((/* implicit */unsigned long long int) -9223372036854775800LL)) ^ (arr_9 [i_0])))));
            arr_24 [i_0 + 1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0 - 1] [i_0 - 1]))) + (var_10)));
        }
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
        arr_25 [i_0] |= arr_13 [i_0 - 1] [i_0 - 1];
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((var_6) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned short) var_0);
        arr_28 [10LL] |= var_10;
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_34 [i_10] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6152230230968775343LL)) || (((/* implicit */_Bool) -6152230230968775343LL))));
                    var_21 = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    }
    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (((~(arr_26 [i_11 + 2]))) >= (((((/* implicit */_Bool) 5398844226984998451ULL)) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) << (((((/* implicit */_Bool) (~(arr_26 [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(var_10))))))))));
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) || (((/* implicit */_Bool) ((long long int) 9223372036854775800LL)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = ((/* implicit */long long int) ((((long long int) (+(-4542790885036431654LL)))) < (((/* implicit */long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            arr_46 [i_12 - 1] [i_13] = (_Bool)1;
            var_24 += ((/* implicit */short) (unsigned char)247);
            var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (7531748521121506040LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [14] [i_13])), (var_5))))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) - (15509208659636710523ULL))) - (((((/* implicit */_Bool) (short)24576)) ? (14718843188210086898ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((-2638053227781266259LL) + (6152230230968775340LL))))))));
            var_27 = ((/* implicit */unsigned short) var_5);
        }
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_15 = 3; i_15 < 11; i_15 += 3) /* same iter space */
        {
            arr_54 [i_15] &= ((/* implicit */long long int) ((unsigned long long int) min((min((var_6), (arr_30 [i_14] [i_14]))), (arr_45 [i_14 - 1] [i_14 - 1]))));
            var_28 = ((/* implicit */int) min((var_28), (var_8)));
        }
        /* vectorizable */
        for (unsigned short i_16 = 3; i_16 < 11; i_16 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)2)) - (((/* implicit */int) arr_44 [i_16 + 1])))))));
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_30 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_33 [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_48 [i_14]))));
                arr_59 [7LL] [i_14] = (+(17752332406389416649ULL));
            }
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_14 - 1] [i_16])) ? (((/* implicit */int) var_9)) : (arr_58 [i_14] [i_14 - 1] [i_14] [i_14 - 1])));
        }
        arr_60 [i_14 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_14 - 1] [i_14 - 1]))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) min((arr_40 [i_14]), (var_7))))))) : ((+(((/* implicit */int) arr_52 [i_14] [0ULL]))))));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_10)))));
    }
}
