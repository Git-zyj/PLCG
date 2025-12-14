/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18967
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (unsigned char)255);
        var_18 ^= var_10;
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [(unsigned char)8]));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(8ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */long long int) 0U)) : (((long long int) (unsigned short)0)))))));
        var_20 = ((/* implicit */unsigned char) ((short) var_1));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7650081736970985617ULL)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30709)))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)255)))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1]))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_12))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_23 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967293U)))), (((/* implicit */unsigned long long int) ((unsigned int) ((int) 0ULL))))));
            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) ((((long long int) (_Bool)1)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)23658)) : (var_12)))));
        }
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            arr_16 [i_2] [i_4 - 2] = ((/* implicit */int) arr_7 [9LL] [i_4]);
            arr_17 [i_2 - 1] [i_4 - 2] [i_4 - 2] = ((/* implicit */short) (+(((long long int) ((var_17) / (((/* implicit */long long int) var_13)))))));
            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) | (((/* implicit */int) arr_7 [i_2 - 1] [i_4 - 1]))))) ? (((/* implicit */int) arr_8 [i_4] [i_4])) : (max((1720936882), (-19393830)))))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                arr_22 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 - 3] [i_5 - 1]))) : (5687089451319691923ULL)))) ? (((((/* implicit */int) ((_Bool) arr_19 [i_2] [i_2] [i_5]))) / (((/* implicit */int) ((unsigned char) var_3))))) : (((/* implicit */int) var_16))))));
                var_27 &= ((/* implicit */_Bool) ((unsigned char) (unsigned char)255));
            }
            for (int i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                arr_25 [i_2] [i_4 + 1] [i_6] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_23 [(short)2] [i_6] [i_6] [i_2 - 1])))));
                arr_26 [i_6] [i_6] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-5747)) ? (0) : (45103475)))));
            }
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) ((_Bool) var_2))) : (((((/* implicit */_Bool) 17147290918067362698ULL)) ? (-533632172) : (((/* implicit */int) (unsigned short)29952)))))) : (((/* implicit */int) var_5))));
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((unsigned char) (-(var_12)))))));
            }
        }
    }
}
