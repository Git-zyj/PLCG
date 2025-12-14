/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53729
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 5044908061801230794ULL)) ? (((/* implicit */int) var_14)) : (var_8)))));
        var_20 = ((/* implicit */unsigned char) (+((+(var_6)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(var_9)));
        arr_5 [(unsigned char)16] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1169745103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) + (((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (arr_0 [4] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((4294967288U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ^ (((arr_0 [15] [i_1]) >> (((((/* implicit */int) (short)-28154)) + (28208)))))));
        var_22 = ((/* implicit */int) (-((+(arr_6 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)242)) << (((2147483647) - (2147483632))))) * (((/* implicit */int) (!(((var_15) || (((/* implicit */_Bool) (unsigned char)255)))))))));
        var_23 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (-1568752819) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)0))))));
    }
    var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -2147483647))))) >> (((((((/* implicit */unsigned long long int) var_5)) - (var_2))) - (15101011619028985864ULL))))) & (((((((/* implicit */int) var_14)) == (((/* implicit */int) var_10)))) ? ((+(((/* implicit */int) var_4)))) : ((~(var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_13 [1ULL] [i_4] [i_4]))))) % ((+(((/* implicit */int) (unsigned char)244))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((4294967276U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3 - 1]))))))))) : (((((arr_11 [i_4]) != (((/* implicit */long long int) arr_16 [(signed char)7] [i_4] [(unsigned short)18])))) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) arr_11 [i_4])))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3])))))))));
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) ((var_6) != (((/* implicit */int) (unsigned char)255)))))))) + ((+(((arr_11 [i_5]) >> (((((/* implicit */int) arr_17 [i_3] [i_3])) - (191)))))))));
                    arr_18 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) arr_11 [i_3 - 1])))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
}
