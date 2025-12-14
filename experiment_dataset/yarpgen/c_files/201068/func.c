/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201068
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (+(((unsigned long long int) arr_1 [i_0] [i_0])))))));
            var_12 = ((/* implicit */int) min((var_12), (var_8)));
        }
        arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65040))));
        arr_6 [i_0] [11LL] = ((/* implicit */signed char) (-((+(min((9LL), (((/* implicit */long long int) (unsigned short)24))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_7 [i_0] [(signed char)10])))), (((/* implicit */int) (signed char)-79))))) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned short)65511))));
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (unsigned char)192))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)73))))))))))));
                                arr_15 [(unsigned short)10] [4] [i_3] [2U] [i_3] [i_3] |= ((/* implicit */unsigned short) (+((~(min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) (short)8913))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_6 = 4; i_6 < 13; i_6 += 3) 
        {
            arr_19 [i_6] [i_6] [6] = ((/* implicit */unsigned short) var_3);
            arr_20 [i_6] = ((/* implicit */signed char) (unsigned char)212);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (signed char i_8 = 4; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)1007))));
                        var_17 &= arr_4 [i_8] [i_0];
                    }
                } 
            } 
            var_18 = arr_3 [i_0] [i_0];
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 4; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_0] [(signed char)2] [i_0] [i_0] [i_10] = (~((+(((((/* implicit */_Bool) (short)-19626)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_7))))));
                            var_19 &= ((/* implicit */unsigned short) arr_0 [i_0]);
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] [i_0 + 1] [i_10] = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) arr_0 [i_10])) ? (9003624810132509285ULL) : (arr_10 [i_9]))), (((/* implicit */unsigned long long int) var_5))))));
            }
            arr_38 [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) (unsigned short)65506);
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        {
                            arr_45 [i_14] [i_14] [i_9] [i_9] [i_14] = ((/* implicit */signed char) (unsigned short)29691);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_29 [i_14]))));
                        }
                    } 
                } 
            } 
            arr_46 [i_9] [i_9] [i_0] = ((/* implicit */signed char) (unsigned short)1008);
            var_21 &= ((/* implicit */signed char) (~(-6LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                for (unsigned short i_18 = 3; i_18 < 12; i_18 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_56 [i_16] [i_16] [i_16] = ((/* implicit */signed char) arr_48 [4ULL]);
                        arr_57 [i_16] [i_16] [i_16] = ((/* implicit */signed char) var_8);
                        var_23 -= ((/* implicit */signed char) 1119006637821079399ULL);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_4))));
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_25 = ((/* implicit */int) 12498739099692082LL);
        arr_61 [i_19] = (+((+((((_Bool)1) ? (258737328U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65512))))))));
        var_26 = ((/* implicit */short) arr_58 [i_19]);
    }
    var_27 = var_2;
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) -1932322791948616241LL)))))) ? (((((/* implicit */_Bool) var_4)) ? (min((var_8), (((/* implicit */int) (signed char)26)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-89)), ((unsigned short)10)))))) : (((/* implicit */int) (unsigned short)46744))));
}
