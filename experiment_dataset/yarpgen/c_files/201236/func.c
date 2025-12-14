/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201236
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0LL)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_4 [(short)15] [(short)15] [i_1 + 2] = ((/* implicit */signed char) 1461623003843940391LL);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (+((((~(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (_Bool)1))))));
                        var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((122880U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) && (((/* implicit */_Bool) arr_3 [i_1 + 2]))))) : (((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) == (arr_7 [i_0] [i_0 - 1] [i_1 + 1]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
                {
                    for (short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)30)) / ((-(((/* implicit */int) (short)-798))))));
                            var_17 += ((/* implicit */unsigned int) ((int) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_6] [i_5] [i_0 + 1]))))));
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_4] [i_0 + 1] [i_7 - 3]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_30 [(_Bool)1] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (-1LL)));
                            var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (122880U)));
                        }
                    } 
                } 
            } 
            var_20 &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_29 [i_4])) : (((/* implicit */int) arr_16 [i_0] [i_4] [(signed char)14])))));
            arr_31 [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned int) arr_5 [i_0 - 1]));
            arr_32 [i_0 + 1] [i_4] [12ULL] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0] [4U])))));
        }
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_0 + 1] [8ULL]), (((/* implicit */short) (unsigned char)143)))))) <= (var_3)));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 2) 
                    {
                        var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (arr_5 [i_13]));
                        var_23 = arr_2 [i_11] [i_11];
                    }
                    for (unsigned short i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        arr_44 [i_13] [(short)3] [i_12] [i_12] = ((/* implicit */signed char) arr_17 [i_12]);
                        arr_45 [i_12] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_12] [(unsigned char)1] [i_15 + 1])) == (((/* implicit */int) (short)-798))));
                    }
                    for (unsigned char i_16 = 2; i_16 < 10; i_16 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_16] [i_16 + 2] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2])) ? (((/* implicit */int) arr_27 [i_16] [i_16] [i_16 + 2] [i_16 - 1] [i_16] [i_16])) : (((/* implicit */int) arr_27 [i_16] [(unsigned char)15] [i_16 - 1] [i_16 - 1] [i_16] [(signed char)2]))));
                        var_25 = ((/* implicit */long long int) ((short) arr_21 [i_11] [i_12] [i_12] [i_13] [4U] [i_16]));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_12] [i_16 - 1] [i_16 - 1] [i_16])) == (((/* implicit */int) arr_26 [i_11] [i_16 - 1] [i_16 - 1] [i_16]))));
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_11] [9LL] [i_13] [i_16 - 1] [i_11] [i_16]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 11; i_17 += 3) 
                    {
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) var_6);
                                var_29 = ((/* implicit */unsigned short) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11] [i_12] [i_12]))))) ? (arr_19 [(signed char)0] [(signed char)0]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) / (4294967286U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [8] [i_11] [i_11] [i_11]))));
    }
    var_31 = ((/* implicit */unsigned int) var_5);
    var_32 = min((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) var_12)) - (33362)))))) > (var_7)))));
}
