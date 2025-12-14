/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200157
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
    var_20 = ((unsigned long long int) var_19);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 -= arr_9 [i_1] [(_Bool)1];
                    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_2])) ? (((arr_5 [i_2] [i_1] [(short)5]) / (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (arr_8 [i_1] [1U] [i_2] [i_0])))));
                    var_23 -= ((/* implicit */signed char) (-(max((((/* implicit */long long int) arr_4 [i_0])), (var_17)))));
                    var_24 = ((/* implicit */unsigned short) ((long long int) var_18));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) 16711680);
    }
    var_26 = ((/* implicit */int) min((var_10), (((/* implicit */unsigned int) (~((~(var_6))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? ((~(((/* implicit */int) arr_1 [i_5] [i_4])))) : (((/* implicit */int) arr_11 [(short)4] [i_4]))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (arr_11 [i_3] [i_3])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 2; i_7 < 8; i_7 += 1) 
            {
                {
                    arr_26 [i_3] [i_6] [i_7] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_7]))));
                    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 16711677)) ? (((/* implicit */int) (_Bool)1)) : (16711685)))))) ? (((((/* implicit */_Bool) arr_0 [i_7 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_7 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_30 = ((/* implicit */_Bool) arr_28 [i_8] [i_8]);
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_13))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) var_4);
                    arr_39 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) arr_32 [(unsigned char)7] [i_10])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (-(var_6)))) : (arr_28 [i_9] [i_10])));
                    arr_40 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_9] [i_13]))));
                                var_34 &= ((/* implicit */_Bool) var_13);
                                var_35 ^= ((/* implicit */unsigned int) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 *= ((/* implicit */short) (((!((_Bool)1))) ? ((~(((/* implicit */int) arr_32 [i_9] [i_9])))) : (((/* implicit */int) var_3))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 20; i_14 += 4) 
    {
        for (signed char i_15 = 2; i_15 < 19; i_15 += 4) 
        {
            {
                var_37 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_8)))))), ((~(((/* implicit */int) arr_47 [i_15 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((short) (+(var_10)))))));
                    var_39 = ((((((/* implicit */_Bool) ((short) var_5))) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_45 [i_14] [i_16]) : (((/* implicit */unsigned long long int) arr_28 [i_16] [i_14])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_15]))))));
                    var_40 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_54 [i_14] [i_14] [i_14 + 1] [i_15 - 1]), (arr_54 [i_14] [5ULL] [i_14 - 1] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19052)) ? (((/* implicit */int) (short)-7205)) : (-16711678)))) : (min((10245057088453370163ULL), (((/* implicit */unsigned long long int) -1839405520))))));
                    var_41 = ((((/* implicit */_Bool) (-((+(3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)122)))) - (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [4LL]))) : (arr_54 [i_14] [i_15] [i_15] [i_14]))))) : (((arr_54 [i_15 + 2] [i_14 - 1] [i_14] [i_14 + 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))));
                }
            }
        } 
    } 
}
