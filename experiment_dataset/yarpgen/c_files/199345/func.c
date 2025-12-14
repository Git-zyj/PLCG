/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199345
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) (~(((5677685625473898028ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_11 = ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_12 = ((/* implicit */short) ((_Bool) -917532818195715892LL));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) >= (((unsigned long long int) (unsigned char)102))));
            arr_10 [i_1] [i_2] = ((/* implicit */long long int) ((((unsigned long long int) arr_7 [(_Bool)1] [i_2])) != (((((/* implicit */_Bool) (unsigned char)15)) ? (12769058448235653588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))))));
            var_13 = arr_8 [i_2];
        }
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(arr_12 [i_3] [i_3]))))));
            var_15 += ((/* implicit */short) (~(((/* implicit */int) ((-9223372036854775805LL) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 917532818195715891LL)) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_0))) : (((/* implicit */unsigned long long int) ((long long int) 2283872422U)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                var_16 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20180))) & (var_1)))));
                var_17 |= 12769058448235653587ULL;
            }
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_21 [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_3] [i_5]));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_1] [i_3] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_20 [i_5]))));
                            var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_15 [(unsigned short)9] [i_7])) ^ (((/* implicit */int) arr_15 [i_3] [i_6]))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)24576)) / (((/* implicit */int) (unsigned short)65523))));
                        }
                    } 
                } 
                arr_27 [i_5] [(unsigned short)12] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_5] [i_5])) + (((/* implicit */int) (!(((/* implicit */_Bool) 4734865093031221477ULL)))))));
                var_20 += ((/* implicit */unsigned short) 1768168018287720795ULL);
            }
            arr_28 [i_1] = ((/* implicit */short) ((arr_12 [i_3] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_3] [i_3])))));
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned char) arr_25 [i_1] [i_1] [i_8])))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1))))))));
        }
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-24580)) != (1329170968))))));
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 16; i_9 += 4) 
    {
        arr_34 [i_9] [11LL] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1947)) + (2147483647))) >> (((5677685625473898028ULL) - (5677685625473898012ULL)))));
        var_24 = ((/* implicit */int) ((((/* implicit */long long int) var_2)) / (arr_19 [i_9 - 1] [i_9] [i_9 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((arr_24 [i_9] [i_11] [i_13] [i_13]) < (arr_24 [i_9] [i_13] [i_11] [i_13])));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))));
                            arr_46 [i_9] [i_9] [(unsigned char)1] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((arr_16 [i_10] [i_12 - 2] [i_13]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                        arr_47 [i_9] [i_10] [i_10] [i_12] = ((unsigned int) arr_22 [i_9] [(unsigned short)4] [(unsigned short)19] [i_12]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        arr_50 [i_9] [0] [(signed char)1] [i_14] = ((/* implicit */long long int) ((unsigned short) arr_33 [i_9 - 1]));
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-24580)) ? (var_0) : (arr_35 [i_9 + 1] [i_10] [i_14]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_28 += ((/* implicit */long long int) -484099503);
                    }
                    var_29 *= ((/* implicit */signed char) (-(((int) 12769058448235653612ULL))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24579))))) : (((/* implicit */int) var_5)))))));
}
