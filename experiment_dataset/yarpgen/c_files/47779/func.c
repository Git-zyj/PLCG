/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47779
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)30)), (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (arr_2 [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : (max((1462278511), (((/* implicit */int) (unsigned char)137)))))) <= (arr_5 [i_0] [i_1] [i_0]))))));
            arr_6 [(unsigned char)3] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)11)))) ? (arr_0 [i_0]) : (max((1462278509), (((/* implicit */int) (unsigned char)30))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) var_1);
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_14 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1462278509)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))) : (4294967284U)))));
            var_15 |= ((/* implicit */unsigned short) (unsigned char)252);
        }
        /* vectorizable */
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            arr_14 [i_0] |= ((/* implicit */unsigned char) (!(((_Bool) (unsigned char)103))));
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) var_10);
            var_16 = ((/* implicit */long long int) arr_9 [i_3 + 1] [i_3 - 3]);
        }
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) arr_10 [(unsigned char)14] [(unsigned char)14]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned char) (!(arr_11 [i_5])));
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) arr_2 [i_4]);
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned short) (+(516693599U)));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)148))));
            var_19 = ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */_Bool) arr_25 [(unsigned short)20])) ? (((/* implicit */int) arr_26 [11LL])) : (((/* implicit */int) (short)20684))))));
        }
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [(short)10])) ? (arr_28 [(unsigned short)24] [(unsigned short)24]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6])))))) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)239)))) : ((+((+(((/* implicit */int) (_Bool)0))))))));
    }
    var_21 = ((/* implicit */unsigned short) 498642820U);
}
