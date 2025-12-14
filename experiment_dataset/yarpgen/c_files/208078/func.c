/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208078
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
    var_17 = ((/* implicit */unsigned long long int) -618219165);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((long long int) var_5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(arr_1 [i_0] [i_1])));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_3 [i_0] [i_0] [i_0]) + (9223372036854775807LL))) << (((618219165) - (618219165)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_3] [i_3] [i_2] [i_3] &= ((/* implicit */long long int) min((arr_6 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */int) arr_10 [i_0] [8U] [i_0] [i_0] [i_0] [i_0]))));
                                var_18 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) 15185818028543791419ULL)) ? (((int) var_9)) : (((-618219165) / (arr_12 [i_2] [i_4])))))));
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                var_20 = ((/* implicit */short) arr_7 [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((7858727627038705301LL), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)10), (((/* implicit */short) (signed char)119))))))))));
                    arr_19 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)5]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_21 ^= ((/* implicit */_Bool) ((1047477548801625878LL) << (((((-3129886632031255541LL) + (3129886632031255572LL))) - (28LL)))));
        arr_22 [i_5] = ((/* implicit */long long int) (+(((((/* implicit */int) (short)10)) - (((/* implicit */int) var_5))))));
    }
    var_22 = ((/* implicit */short) ((long long int) var_8));
    var_23 = ((/* implicit */unsigned int) var_12);
}
