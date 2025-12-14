/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49180
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) (((~(((5527196194985383243ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) >> ((((~(((/* implicit */int) arr_5 [i_1])))) + (33948)))))) : (((/* implicit */unsigned int) (((~(((5527196194985383243ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) >> ((((((~(((/* implicit */int) arr_5 [i_1])))) + (33948))) + (22139))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-12) : (var_1))))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [8] [i_1 + 1] [i_1])), (arr_12 [i_0] [i_0] [(signed char)6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    var_21 |= ((/* implicit */unsigned short) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) -15)) != (arr_18 [i_5])))) & (((-12) / (((/* implicit */int) (short)-27050))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) (short)29247)))));
                    var_25 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7692779850128208044LL))))), ((~(arr_12 [i_6] [i_6] [i_6]))));
                }
            } 
        } 
    } 
}
