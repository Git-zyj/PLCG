/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47667
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
    var_19 = var_0;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19348)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19))) : (arr_1 [i_0])));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) var_7)) : (1101043242U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_4 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_4])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8U] [i_3 + 2] [i_5])))));
                            var_24 = ((/* implicit */int) arr_13 [(unsigned short)3] [(unsigned short)3] [i_2] [i_3] [5ULL] [i_4] [5LL]);
                        }
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)246));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-4994)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)-13729)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_18))));
                    }
                } 
            } 
        } 
        var_27 &= ((/* implicit */unsigned short) ((_Bool) var_16));
        var_28 &= ((/* implicit */short) (unsigned short)5);
        var_29 = ((/* implicit */short) (((-(((/* implicit */int) var_13)))) == (((((/* implicit */_Bool) 3366331467U)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned short)65535))))));
    }
    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_2)))));
    var_31 ^= var_12;
}
