/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24804
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)4453)) - (4452)))));
    var_11 += ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) != (((var_3) ? (((/* implicit */int) (_Bool)1)) : (-2019447002)))));
        arr_2 [i_0] [i_0] |= ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (_Bool)1)));
        var_13 = ((/* implicit */long long int) var_0);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 853197026)) ? (((/* implicit */long long int) var_5)) : (120259084288LL)))) || (((/* implicit */_Bool) 839438616U))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_13 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)1536)) - (1525)))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_2)))))))));
                    }
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_16 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3913835209U)) ? (-118057697) : (((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_17 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)6904))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_5] [i_5] [i_3] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) var_9)))))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_19 = (+(((/* implicit */int) (short)-6909)));
                        var_20 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_2] [i_1] [i_7] [0] [i_2] [i_1 + 1])) || (((/* implicit */_Bool) (unsigned char)193)))) ? (((/* implicit */int) arr_10 [(unsigned char)11] [i_1 - 1])) : (((/* implicit */int) (signed char)48))));
                    }
                    for (short i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        var_21 = ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((((/* implicit */int) (unsigned char)186)) % (var_8))) : (((/* implicit */int) (signed char)48)));
                        arr_23 [i_1] [i_2] [i_3] [i_1] [i_8 - 3] = ((/* implicit */long long int) (~(arr_18 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)96)) - (((/* implicit */int) (unsigned char)89))));
                    }
                    var_23 -= ((/* implicit */unsigned int) (short)8188);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) (+(var_4)));
                        arr_32 [i_11] [i_9] [i_9] [i_11] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_9 [i_1] [i_9])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    for (signed char i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (short)8529)) - (((/* implicit */int) (short)-4455))));
                            var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 134217727LL)) ? (arr_12 [i_13] [i_9 - 3] [i_12] [i_13] [i_14 - 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))));
                        }
                    } 
                } 
            } 
            arr_41 [i_9] [i_9] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2109138656124724258LL)) ? (35184355311616LL) : (((/* implicit */long long int) arr_40 [i_1 + 1] [i_9] [i_1] [7] [i_9] [i_9]))))));
            var_27 -= ((/* implicit */_Bool) var_0);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_44 [i_15] [i_15] = ((/* implicit */short) 853197026);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1])) ? (2U) : (arr_40 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
        }
        var_29 ^= ((/* implicit */_Bool) var_4);
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_0)));
    }
}
