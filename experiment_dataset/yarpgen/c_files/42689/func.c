/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42689
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
    var_10 = ((/* implicit */int) var_5);
    var_11 = ((/* implicit */_Bool) (((((-(var_4))) >> (((((/* implicit */int) var_3)) - (20344))))) - (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) arr_7 [i_1] [i_1] [i_1] [i_1 - 1]));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [11U] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [(signed char)16]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_4] [4LL] [i_6] [i_4] = var_6;
                                arr_25 [i_0] [i_7] [(_Bool)1] [(short)4] [i_4] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_7 - 3] [i_0])) | (((/* implicit */int) arr_2 [8LL] [i_7 - 2]))));
                                var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_20 [i_5] [3U])) % (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_20 [(short)8] [(signed char)10]))) % (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                var_13 = (!(((/* implicit */_Bool) arr_16 [i_9] [i_8 + 3] [(unsigned short)15])));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [9])) - (((/* implicit */int) arr_18 [i_0] [i_8 + 3])))))));
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            var_15 *= ((((/* implicit */int) arr_22 [i_10] [i_10] [i_10 - 2] [i_10] [i_8])) / ((~(((/* implicit */int) var_6)))));
                            arr_40 [15U] [i_10] [i_9] [i_8] [i_0] = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) var_2)))));
                            var_16 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_28 [(unsigned short)1] [i_8])) ? (((/* implicit */int) arr_0 [i_9] [i_11])) : (((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= ((~(arr_23 [i_13] [i_12] [i_8] [(signed char)13] [i_0])))));
                        var_18 -= arr_18 [i_12] [i_13];
                    }
                } 
            } 
            arr_46 [(short)10] = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))) : (arr_38 [i_0] [i_0] [i_0] [i_8] [(unsigned short)9] [(_Bool)1] [i_8]))) * (((/* implicit */long long int) ((/* implicit */int) ((var_4) >= (var_4)))))));
        }
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (var_7)));
}
