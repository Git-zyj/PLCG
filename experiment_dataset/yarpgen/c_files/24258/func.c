/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24258
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_4]))) : (var_11))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)4))));
                                var_18 -= (unsigned char)234;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (unsigned short)65521)))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 3; i_5 < 7; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_5 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_4 [i_1] [i_1 - 1] [i_5 - 1]))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5 + 2] [i_2])))))));
                    }
                    for (signed char i_6 = 4; i_6 < 9; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_1])) ? (3981350580626621050ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) | (((/* implicit */unsigned long long int) arr_2 [i_0] [i_6 + 1]))));
                        arr_19 [i_0] [i_1] [i_2] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_1] [i_1 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 2]) : (var_11)));
                        arr_20 [(unsigned char)4] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)252))))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_11)))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (arr_24 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))));
                        arr_25 [i_0] [i_2] [i_7] = ((/* implicit */signed char) var_2);
                    }
                }
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)112)) && (((/* implicit */_Bool) (short)32764)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_0 - 1])))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)4424)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_8 [i_0] [i_0])))))))));
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)227))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)(-127 - 1)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))))))));
}
