/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233386
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
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((short) (+(((/* implicit */int) (short)-16673))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_1 [i_0] [i_0])))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_8))) - (37LL)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [16U] [i_4] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [(unsigned short)7] [11])), (arr_10 [i_0] [i_1] [i_0] [i_3] [(_Bool)1])));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (short)16673)) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned char)78))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
