/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51325
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [(short)5] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [(short)4]))))) ? (((/* implicit */int) min((arr_8 [i_0 + 2]), (arr_3 [i_0])))) : (((/* implicit */int) ((arr_7 [i_0] [i_3]) == (arr_7 [i_3] [i_1]))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_0])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) var_4))));
                                var_16 *= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned short) arr_12 [(_Bool)1] [i_1] [i_1] [(unsigned short)4] [i_1] [i_1]);
                var_18 = arr_0 [i_0] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_19 [i_5])))));
            var_20 = ((/* implicit */unsigned short) var_5);
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (min((((/* implicit */unsigned int) arr_25 [i_7] [(unsigned short)4] [(unsigned char)11])), (var_5)))))) ? (((((arr_17 [i_5]) - (764440085U))) << (((((/* implicit */int) ((unsigned char) arr_28 [(_Bool)1] [i_7] [(unsigned char)4] [i_8] [i_9]))) - (116))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1011215889U)))) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_5])) : (var_2))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_23 [21ULL] [(unsigned char)5]))))) : (arr_19 [i_5])))) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])) : ((~(((((/* implicit */int) arr_24 [i_5] [i_7] [i_8] [i_9])) & (1933724383)))))));
                    }
                } 
            } 
            arr_29 [i_7] |= ((/* implicit */short) ((unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_23 [i_5] [5ULL]))))));
            arr_30 [i_5] = ((/* implicit */unsigned char) (!((_Bool)1)));
        }
        arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) var_6)))))) ? (arr_19 [i_5]) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)6786)) >= (((/* implicit */int) arr_22 [i_5] [i_5]))))), (((((/* implicit */_Bool) 529738214)) ? (((/* implicit */int) (unsigned short)6786)) : (((/* implicit */int) (short)-22496)))))))));
        var_23 = ((/* implicit */short) (+((~(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5])) && (((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [(_Bool)1])))))))));
        var_24 = ((/* implicit */unsigned short) var_11);
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    arr_38 [i_10] [(unsigned short)1] [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1738059914U))));
                    arr_39 [i_10] = ((/* implicit */unsigned int) (short)22496);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1))))) % (((arr_4 [i_11] [i_10]) / (arr_4 [i_11] [i_10])))));
                }
            } 
        } 
        var_26 = ((/* implicit */short) max(((~(-1))), ((~(((((/* implicit */_Bool) 8021567746174437015ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_10]))))))));
    }
    /* LoopSeq 1 */
    for (short i_13 = 1; i_13 < 16; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1011215889U))))) << (((((((/* implicit */_Bool) arr_44 [i_13] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) - (141))))))));
                    var_28 -= ((((/* implicit */_Bool) ((short) (unsigned short)58749))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)1] [i_15]))) : ((~(arr_18 [i_13 + 1]))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
}
