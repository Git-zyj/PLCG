/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40387
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
    var_18 = ((/* implicit */short) (unsigned char)120);
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49969))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) (~(max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_17)))))))));
                        var_21 = ((/* implicit */long long int) (((_Bool)1) ? ((~(((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) ((signed char) var_9)))));
                        var_22 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)132));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_4 [i_0])))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_4 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((((((/* implicit */int) var_17)) <= (((/* implicit */int) (signed char)-69)))) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) != (3633352967U))))))));
            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_4] [i_5]))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_19 [i_4] [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) -147318148)) ? (1601182602U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97)))))));
                arr_20 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_4] [i_5] [i_6 - 1] [i_6 - 1]))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-23482)) ^ (((/* implicit */int) (unsigned char)132))))) : (((((/* implicit */unsigned int) arr_14 [i_4] [i_4])) + (var_4)))));
            }
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_29 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_15 [i_4] [i_4])) + (var_7)))));
                arr_24 [i_4] = ((/* implicit */unsigned int) var_10);
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 3633352967U))) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) arr_2 [i_4])))) : (((/* implicit */int) var_16))));
                arr_25 [5LL] [i_5] [5LL] [5LL] = ((/* implicit */signed char) arr_14 [i_4] [i_4]);
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_7] [i_5] [i_5])))))));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((arr_5 [i_4] [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) arr_27 [12ULL])))))));
            arr_28 [i_8] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1448644384U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (606851664U))));
            var_33 = ((((/* implicit */_Bool) ((short) 18446744073709551606ULL))) ? ((~(var_0))) : ((~(4294967295U))));
            var_34 += ((/* implicit */unsigned long long int) arr_27 [i_4]);
            var_35 ^= ((/* implicit */short) (~((+(15943819217473670961ULL)))));
        }
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_5))));
            arr_32 [i_4] [11] [i_4] = (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (1156384164));
            var_37 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)124)))) | (((arr_27 [i_9]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
            var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12517))) : (arr_3 [i_4] [i_4] [i_4])));
        }
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_39 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [(signed char)4] [i_10] [i_11] [i_12])) <= (var_7)));
                        arr_44 [i_4] [i_10] [i_10] [i_10] = ((/* implicit */short) (~(arr_13 [i_4])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_13 = 3; i_13 < 16; i_13 += 3) 
        {
            var_40 -= ((/* implicit */short) var_15);
            arr_48 [(short)8] &= ((/* implicit */unsigned long long int) var_8);
        }
    }
}
