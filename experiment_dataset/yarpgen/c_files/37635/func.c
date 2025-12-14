/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37635
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) arr_0 [i_0 + 3])) - (144)))));
        var_19 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_2))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12937835062429148332ULL)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_20 = ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (1431773351U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_2);
        arr_8 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned short) var_2)), ((unsigned short)41922)));
        arr_9 [(unsigned short)2] &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((unsigned int) -1605360046)), (((/* implicit */unsigned int) (_Bool)0)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_3))));
                            var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_2]))) : (arr_5 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-115)))) : ((+(6461676091161692608ULL)))))));
                        }
                    } 
                } 
            } 
            var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_16))))) : (524287U))) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)31)) | (((/* implicit */int) var_15)))) | ((~(((/* implicit */int) var_17)))))))));
        }
        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            var_24 += ((/* implicit */int) min(((((_Bool)1) ? (5425060093765226571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_18 [2ULL] [2ULL] [i_6] [2ULL] [2ULL])), ((short)8383))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_1))))));
                        var_26 = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) ((((unsigned long long int) arr_15 [i_1] [i_1])) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3072)) % (-742854734)))))))));
                        var_27 = ((/* implicit */unsigned int) var_2);
                        arr_29 [i_1] [i_1] [i_1 - 1] [i_1] [(_Bool)1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_1 - 1])) ? (arr_14 [i_1 + 2]) : (1184742479))));
                    }
                } 
            } 
        }
        arr_30 [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1])), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_23 [i_1 + 3] [i_1 + 1]))))));
    }
    var_28 = ((/* implicit */_Bool) min((((unsigned long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (-(var_4)))) ? (max((var_14), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))));
}
