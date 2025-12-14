/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47801
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)45856), ((unsigned short)19680))))))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_1 [i_0] [i_0 + 1]))))));
        var_15 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)61))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) << (((12172778863015211043ULL) - (12172778863015211030ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 2] [i_0 - 2])))) : (((((/* implicit */unsigned long long int) (~(var_5)))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_17 = ((short) 0ULL);
        arr_5 [i_1] = ((/* implicit */unsigned short) min((arr_4 [(short)14]), (((max((arr_4 [i_1]), (((/* implicit */long long int) (unsigned short)19680)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45855)))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_12 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)162)) << (((((/* implicit */int) (unsigned char)255)) - (233))))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5125))))) : (max((((/* implicit */unsigned int) ((616005302) << (((((/* implicit */int) var_0)) - (216)))))), (((arr_9 [i_1] [i_1] [i_1] [i_1]) << (((5210551648747627557ULL) - (5210551648747627549ULL)))))))));
                    arr_13 [i_1] [i_2] [i_2] [i_3] = (-(arr_3 [i_2] [i_1]));
                    arr_14 [i_3] [(signed char)1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 17594048065614538482ULL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)5145)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) var_11);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (616005276)))) : (-616005302)));
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_28 [i_4] [i_7] [(short)4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) | (((unsigned long long int) (signed char)-21)));
                            var_20 = arr_24 [i_4];
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) 12525115210409287432ULL)))));
                            arr_29 [i_4] [i_5] [i_7] [i_7 + 2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)33)) << (((/* implicit */int) var_8))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_22 = var_2;
                            arr_34 [i_9] [i_7] [4ULL] [i_7] [i_4 + 2] = ((/* implicit */unsigned char) (signed char)28);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (-616005283) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_5] [i_5] [7ULL] [i_4] [i_4] [i_4])) | (((((/* implicit */_Bool) arr_19 [i_4 - 1])) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [(short)6] [i_4 - 2] [(short)6])) : (((/* implicit */int) var_0))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_10 = 3; i_10 < 8; i_10 += 3) 
    {
        arr_37 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)19680)) ? (((/* implicit */unsigned long long int) -1152921504606846976LL)) : (arr_33 [i_10 - 2] [(unsigned short)7] [4LL] [i_10 + 2] [i_10] [(unsigned char)6] [(unsigned short)21])));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_50 [i_10] [i_11] [i_11] [i_12] [i_13] [(short)0] = ((/* implicit */signed char) (unsigned short)38076);
                            var_25 |= ((/* implicit */unsigned char) ((1282633899) | (((/* implicit */int) (unsigned short)45865))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_11] [i_10] [i_11]))))) ? (((((/* implicit */_Bool) (unsigned short)12552)) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) arr_18 [i_11] [i_12] [i_13])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))));
                        }
                        var_27 &= ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) var_3);
    var_29 = ((/* implicit */int) (unsigned short)45865);
}
