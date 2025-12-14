/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205865
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)45)) - (18))))))));
    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29490)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((((/* implicit */_Bool) 5356870653854650074ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((((/* implicit */long long int) ((/* implicit */int) var_0))) & ((~(var_13)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)195))))), (1686358312427349199LL)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_12 [4U] [3LL] [i_2] [i_0] [i_0])) <= (((int) arr_11 [i_0] [i_1] [(signed char)4] [(short)3])))))));
                                arr_14 [i_0] [i_4] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((799405268346169907ULL) != (((/* implicit */unsigned long long int) 1233891794))));
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] [(unsigned char)2] &= ((/* implicit */int) arr_2 [(unsigned char)3] [(unsigned char)3]);
                                arr_16 [i_1] [i_4] [3U] = -1233891795;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((signed char) var_12));
}
