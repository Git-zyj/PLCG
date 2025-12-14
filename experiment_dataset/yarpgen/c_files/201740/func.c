/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201740
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned char)255)) : ((-2147483647 - 1))))) / (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_2))))))));
    var_15 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) || ((_Bool)0)))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)25342)) - (25312)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned char) var_1);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_10 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2])) ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_2]))));
                        var_18 = ((/* implicit */int) ((4611686018360279040LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)32747))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] |= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) && (((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_1] [(short)8]))))));
                            var_20 = -902818451;
                            var_21 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) -15)), (var_4)));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((long long int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3])))))));
                        }
                        arr_15 [i_0] [i_2] = ((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) (unsigned char)2))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_23 = ((/* implicit */_Bool) (-(max((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_8 [8U])))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (1976779401)))))));
        arr_19 [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_9))))), (((((unsigned long long int) (unsigned char)74)) | (((/* implicit */unsigned long long int) (-(arr_0 [i_5] [i_5]))))))));
    }
    var_24 = ((/* implicit */unsigned char) var_2);
}
