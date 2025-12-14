/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228781
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) << (((var_0) - (425554684880021727LL))))) == (((/* implicit */int) ((_Bool) 11372816915339943021ULL)))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_9))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [(short)19]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) var_6)) / (min((5709477924527559269ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))));
        var_17 = ((/* implicit */signed char) ((int) var_3));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)246)) * (((/* implicit */int) arr_2 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned int) var_7);
                        var_19 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_2 [(signed char)3] [i_2 - 1]))) ? (((/* implicit */int) arr_8 [i_1])) : ((+(((/* implicit */int) arr_2 [i_2 + 1] [i_2]))))));
            var_21 = ((/* implicit */unsigned long long int) var_3);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) | (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_8 [i_1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_9))))))));
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1))))))) >= (((((arr_10 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))))) << (((max((((/* implicit */long long int) (unsigned char)254)), (var_0))) - (425554684880021672LL)))))));
        var_24 = var_13;
    }
    var_25 = ((/* implicit */short) (-(max((((long long int) var_12)), (((/* implicit */long long int) ((int) (unsigned short)65519)))))));
}
