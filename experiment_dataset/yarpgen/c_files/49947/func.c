/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49947
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)224))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-225)))))) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 21U))))))))));
        var_13 ^= 6ULL;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) min(((short)-225), ((short)32746)))) + (2147483647))) << (((max((((/* implicit */unsigned int) arr_4 [i_0 - 1])), (var_7))) - (1044005698U)))));
                            var_15 = ((/* implicit */_Bool) ((((long long int) (-(((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) 4294967293U))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (56ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 1])) - (((/* implicit */int) var_1)))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_0 - 1] [i_1 + 1] [i_0]), (((/* implicit */unsigned short) arr_5 [i_3] [i_2 + 1]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))) ? ((~(arr_13 [i_0] [(short)5] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_0]))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)48))))) & (arr_8 [i_2] [i_2 - 2] [i_2] [i_2])))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551610ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned short)9)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (short)(-32767 - 1)))))));
            var_19 ^= ((/* implicit */signed char) ((((unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1])) * (((((((/* implicit */_Bool) var_10)) ? (var_7) : (arr_2 [10ULL]))) ^ (min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0])))))));
            var_20 -= arr_12 [i_1];
            var_21 = ((/* implicit */short) var_11);
        }
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((short)32767), ((short)-205))))));
    }
    var_23 |= var_0;
    var_24 = ((/* implicit */long long int) min((max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) (-((~(var_4))))))));
}
