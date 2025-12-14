/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197584
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) (~(5645301604123078106LL)));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_11 = (+(8267009808635787068LL));
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 78398354)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (5645301604123078117LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) min(((+(8267009808635787070LL))), (((/* implicit */long long int) var_4))))) : ((-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 8267009808635787044LL))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_4] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)21051)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) ? (arr_7 [i_3 - 1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_0])))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_3] [i_3 + 1] [(unsigned short)0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)23758)) ? (2271152976U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) (short)4844)) : (((/* implicit */int) var_6))));
                            arr_17 [i_2] [i_2] [i_3] [i_4 + 1] [i_5 - 1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                            var_15 |= (+(2106909611));
                        }
                        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            arr_22 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
                            arr_23 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_8 [(unsigned char)0]);
                        }
                        var_16 = ((/* implicit */short) ((signed char) ((arr_19 [4LL] [i_3 + 1] [i_3 + 1] [i_4]) ^ (5645301604123078113LL))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_9)) : (var_4))))));
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) 2106909606);
                    }
                } 
            } 
            var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) -2605513932559597913LL))));
            var_19 *= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-16452))));
        }
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)-122)) | (((/* implicit */int) (short)-16452)))), (((/* implicit */int) ((((/* implicit */_Bool) -2106909611)) || (((/* implicit */_Bool) -8267009808635787070LL)))))));
        arr_29 [i_7] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)12))))), (((((/* implicit */_Bool) 495462249)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7] [i_7]))) : (arr_10 [8U] [14] [i_7] [14] [i_7])))))) ? (((/* implicit */int) max((arr_3 [i_7] [8] [4LL]), (arr_3 [i_7] [(short)10] [i_7])))) : (((((/* implicit */_Bool) (-(-2101787149)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3513))))))));
        /* LoopSeq 1 */
        for (short i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            var_20 = ((/* implicit */int) (short)-15580);
            var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_18 [i_8] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 + 2] [i_8])))));
        }
        arr_32 [i_7] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_7] [i_7] [i_7] [i_7] [i_7])), (8267009808635787044LL)))))) ? ((-2147483647 - 1)) : (-1152163336)));
        var_22 = ((/* implicit */int) 5645301604123078121LL);
    }
}
