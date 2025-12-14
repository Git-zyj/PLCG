/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216437
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
    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) (-((-(-1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [i_2 - 3] [i_1]);
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(1022U))) << ((((~(((/* implicit */int) var_5)))) + (18228))))))));
                    arr_12 [i_0] [i_1 - 1] [i_1] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_2])) | (var_4)))), (((unsigned int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2261933311U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22789))))))));
                    arr_13 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [(short)15] [13])) ? (var_9) : (((/* implicit */int) arr_2 [i_1] [i_2])))) | ((~(var_0)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(short)6] [i_1 + 3] [i_1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (arr_10 [i_1 - 2] [i_2 + 1]))))));
                    var_13 &= ((/* implicit */short) ((signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_3])) >= (((((/* implicit */_Bool) arr_14 [(unsigned char)6] [i_3])) ? (((/* implicit */int) arr_15 [i_3 - 2])) : (((/* implicit */int) (short)-23663))))));
        var_15 = var_3;
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3 - 2])) % (((/* implicit */int) arr_15 [i_3 - 2]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_3])) / (var_0))) >> (((((((/* implicit */_Bool) arr_15 [i_3])) ? (var_9) : (((/* implicit */int) (short)-7675)))) - (228005096)))))))))));
        arr_16 [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23661)) ? (arr_14 [2U] [i_3 + 1]) : (arr_14 [i_3 - 1] [i_3])))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_14 [i_3 + 1] [i_3]) : (arr_14 [i_3] [18U]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-112), ((signed char)3)))))));
        var_17 |= ((/* implicit */unsigned int) (short)-23663);
    }
    for (int i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((((((/* implicit */_Bool) (short)23050)) ? (((/* implicit */int) (short)-23663)) : (((/* implicit */int) (unsigned char)212)))) / ((+(var_4))))) : (((((/* implicit */_Bool) ((6291456U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))) ? (((/* implicit */int) (short)23050)) : (((/* implicit */int) (short)-23053))))));
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) ((((max((var_0), (-758264275))) + (2147483647))) << (((((/* implicit */int) (short)23070)) - (23070)))));
        var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)31)) ? (arr_20 [i_4] [i_4]) : ((-(var_0))))) - (((int) ((short) var_8)))));
        arr_23 [i_4] = arr_20 [i_4] [i_4];
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_19 = ((int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23053))) : (((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23057))) : (arr_17 [i_5])))));
        arr_27 [0] = var_2;
        var_20 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6098)))))) ? (min((((/* implicit */unsigned int) var_9)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))))));
        var_21 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_19 [16U])), ((-(((/* implicit */int) arr_24 [i_5]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_22 &= ((/* implicit */int) ((arr_29 [i_5] [i_6] [i_6]) <= (arr_29 [i_5] [i_6] [i_5])));
            arr_30 [i_5] = ((/* implicit */signed char) (~(arr_14 [i_5] [i_5])));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) 4294967272U)) ? (((((((/* implicit */_Bool) var_6)) ? (15U) : (((/* implicit */unsigned int) 369327726)))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7]))))) : (((((/* implicit */_Bool) arr_20 [i_7] [i_7])) ? (((((/* implicit */_Bool) (short)-23050)) ? (arr_14 [i_7] [i_7]) : (arr_25 [i_7] [i_7]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)461)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_35 [i_8] [(signed char)6] = ((/* implicit */short) (((~(arr_25 [i_7] [i_8]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_32 [0U])))))));
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7] [i_8] [i_8])) ? (arr_29 [i_7] [i_8] [(unsigned char)16]) : (2147483647)));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)8)) & (((/* implicit */int) (signed char)-55))));
            var_26 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_32 [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_34 [i_7] [i_8])) + (19)))));
        }
        var_27 += ((/* implicit */signed char) arr_19 [i_7]);
    }
}
