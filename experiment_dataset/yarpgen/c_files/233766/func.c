/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233766
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
    var_15 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_16 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_1 [i_0]))))) ? (var_2) : (33554432))), (1283013857)));
        var_17 ^= ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned char) (unsigned short)19512));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) - (((((/* implicit */unsigned long long int) var_8)) ^ (var_12)))));
            var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)14730))));
        }
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_9 [(unsigned short)11] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1] [i_0])) > (((/* implicit */int) (unsigned short)16128))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_20 = min((((/* implicit */unsigned int) (signed char)(-127 - 1))), ((~(4294967295U))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_21 = max((((/* implicit */int) (short)29612)), ((+(arr_10 [i_0] [i_2 - 2] [i_0]))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (arr_1 [i_2])));
                            var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_5])) & ((((_Bool)0) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                var_24 = (+(((int) arr_10 [i_0 + 2] [i_2 + 3] [i_2 + 2])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) var_5);
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) 516709379)) ? (((/* implicit */int) (short)25862)) : (((/* implicit */int) (signed char)48))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((8323072) - (2047)));
                        arr_23 [i_3] [i_0] [i_6] [i_3] [i_0] [9LL] = ((/* implicit */int) var_3);
                        arr_24 [i_7] [i_0] [i_3] [i_2] [i_0] [i_0] [i_0 - 1] = arr_21 [i_6] [i_2] [i_3] [i_6] [(_Bool)1] [i_6] [i_2];
                        var_28 ^= ((/* implicit */unsigned char) ((1277437958U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))));
                    }
                    arr_25 [i_0] [i_2] [i_2 - 1] = arr_0 [i_0];
                }
            }
        }
        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_29 ^= ((/* implicit */unsigned char) (-(2147483647)));
            var_30 = ((/* implicit */signed char) arr_15 [i_8] [i_0] [7ULL] [i_0] [7ULL]);
        }
        var_31 = ((/* implicit */signed char) max((-2147483641), (var_2)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
        {
            arr_30 [(_Bool)1] [i_0] = ((/* implicit */short) ((unsigned short) arr_20 [i_0 + 4] [i_0 - 2] [(unsigned short)3] [14] [i_9] [i_0]));
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0 - 1] [i_9] [i_9 + 2] [5LL] [3ULL] [i_9])) % ((+(((/* implicit */int) (unsigned char)61)))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */short) var_5);
            arr_33 [i_10] [i_0] [i_0 - 3] = ((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)11] [10] [i_10] [i_10 + 3]);
        }
        for (unsigned short i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
        {
            arr_37 [i_0] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) 1225702045913574125LL)));
            arr_38 [i_0] [i_11 + 3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 - 3]))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) & (((((/* implicit */unsigned long long int) arr_19 [(signed char)11] [i_11 + 1] [i_11] [i_0 + 4])) / (arr_28 [i_0 - 1] [i_0] [i_11 - 1])))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_35 ^= ((/* implicit */short) 1840645583);
                        var_36 ^= ((/* implicit */short) (+(511ULL)));
                        var_37 *= (_Bool)1;
                        var_38 = ((/* implicit */unsigned char) (-((((+(((/* implicit */int) (_Bool)1)))) - (arr_36 [13ULL] [i_12] [i_0])))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_1))));
        var_40 |= ((/* implicit */int) ((_Bool) arr_45 [(signed char)10]));
    }
}
