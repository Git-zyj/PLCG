/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40425
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned char) ((4186206229U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 14652996000955487554ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((3161799147U) == (((/* implicit */unsigned int) 2147483634)))))) + (var_4))))));
                    arr_13 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) / (((/* implicit */int) arr_4 [i_0] [i_1 + 1])))) == (((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */int) (signed char)125)) << (((var_14) - (1468494808))))) - (((((((/* implicit */_Bool) arr_16 [i_3] [i_4 + 1] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)228)))) * (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)21612))))))));
                    arr_21 [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    arr_22 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) - (((((/* implicit */_Bool) (short)-10982)) ? (((((/* implicit */_Bool) 962047401)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (140737488338944ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned char)245))))), (3268641283U))))));
                }
            } 
        } 
    } 
}
