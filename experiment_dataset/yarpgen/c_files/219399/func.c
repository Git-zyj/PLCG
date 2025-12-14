/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219399
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_3))));
    var_11 = ((/* implicit */signed char) var_5);
    var_12 *= ((/* implicit */unsigned int) ((long long int) (unsigned char)70));
    var_13 ^= ((/* implicit */int) ((unsigned long long int) (~((~(var_9))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (unsigned char)69);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (var_4)))) : (((8369521666733820093LL) & (((/* implicit */long long int) 4294967295U))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned int) ((arr_3 [14] [17U]) | (((/* implicit */long long int) var_2))))))));
            arr_9 [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)187)) || (((/* implicit */_Bool) (unsigned char)187))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) < ((+(643896011)))));
            arr_10 [i_1] [i_2] |= ((/* implicit */short) (+(arr_4 [i_1 + 1])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                var_18 ^= ((/* implicit */short) ((_Bool) arr_1 [i_1]));
                var_19 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)186))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-87))))))));
                var_21 = ((unsigned long long int) ((((/* implicit */int) (signed char)30)) | (((/* implicit */int) (unsigned char)42))));
                arr_17 [i_1 - 2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) arr_4 [i_1]);
            }
            arr_18 [i_3] = ((short) (unsigned char)203);
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)68)) / (arr_4 [i_1 + 1])));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_23 &= ((/* implicit */int) (unsigned char)58);
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_20 [(signed char)10] [i_5])))) : (((/* implicit */int) (unsigned short)0))));
        var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4663837460584814813ULL)) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_1 [10ULL]))))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((short) 15U));
                        var_26 *= ((/* implicit */short) arr_27 [12] [i_6 - 1] [i_7 + 1]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7 - 1] [i_6 - 1])) ? (2378068574U) : (((/* implicit */unsigned int) arr_12 [i_7 + 2] [i_6 - 1]))));
                            var_28 *= ((/* implicit */unsigned short) arr_37 [i_11]);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_43 [i_6] [i_6] [i_10] [i_6] [i_13] [i_6] = ((/* implicit */signed char) (_Bool)0);
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_41 [i_6 - 1] [i_6] [i_11] [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6])))) != (((5527978214218412398ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))))));
                            arr_44 [i_6] [i_7 + 2] [i_7] [i_7] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (arr_3 [i_6 - 2] [i_6 - 2])));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(arr_30 [i_6 - 2] [i_11]))))));
                            arr_45 [i_6] [i_6] [i_6 - 1] [i_6] = 4294967281U;
                        }
                        var_31 = ((/* implicit */int) ((signed char) arr_41 [i_6 + 1] [i_11] [i_11] [i_11] [i_6] [i_7] [i_7 - 1]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 4) 
                        {
                            var_32 = var_5;
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (4663837460584814813ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_6 - 1] [3ULL] [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_14 - 2])))));
                            arr_49 [i_14] [i_14] [i_14 - 2] [i_6] [i_14 + 2] = ((/* implicit */int) (unsigned short)0);
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) ((var_6) || (((/* implicit */_Bool) arr_12 [0ULL] [i_15]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))))))))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_5))));
        }
        var_36 = 9U;
        var_37 = ((/* implicit */unsigned int) (unsigned short)18);
        var_38 = ((/* implicit */long long int) (((-(1U))) <= (901445832U)));
        var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (signed char)123))));
    }
}
