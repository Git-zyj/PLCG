/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198972
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) 2498164612U);
                    var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65138))) - (5U)));
                    var_21 = ((/* implicit */int) (short)-18569);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)7])) ? (397819444894086243ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18570)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-92))));
                                arr_14 [i_0] [i_0] [(short)9] [(unsigned char)4] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)400)) + (-419307433))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */unsigned long long int) ((short) (short)-22492));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            {
                arr_19 [i_5] = ((/* implicit */long long int) 1376178442);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((((/* implicit */long long int) max((3926273808U), (((/* implicit */unsigned int) 522286689))))) / (min((arr_17 [(_Bool)0]), (((/* implicit */long long int) (short)-18568)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_7 [i_5] [i_6 + 2])))))));
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -419307433)) - (((((/* implicit */_Bool) (short)-22492)) ? (arr_5 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? ((~(arr_7 [i_6] [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5 + 1] [i_5 - 1])) ^ (((/* implicit */int) (unsigned char)41)))))));
                            var_26 += ((/* implicit */long long int) (-(((/* implicit */int) (short)6))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) 522286685))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) (unsigned short)62040);
                var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-114))));
                arr_25 [(_Bool)1] [i_6] |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_15)) << (((((((((/* implicit */long long int) ((/* implicit */int) var_6))) * (-5988233865881103651LL))) + (5988233865881103673LL))) - (16LL)))))));
}
