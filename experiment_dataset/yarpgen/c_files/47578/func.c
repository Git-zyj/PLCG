/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47578
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (var_0)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_5)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((unsigned char) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [9ULL] [i_2] &= ((/* implicit */_Bool) (+(((long long int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_5 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_0] [i_2] [(unsigned char)1] [i_4 + 1])))))));
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_1] [(_Bool)1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-6690))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_14 [i_4 + 1] [i_1] [2ULL])) <= (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((unsigned char) ((long long int) (signed char)-68))))));
                                arr_17 [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_15 [i_4] [i_1] [i_2] [i_1] [i_0])) >= (((/* implicit */int) (unsigned char)236)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_1])))) : ((+(((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (0LL)))))));
                                var_12 = ((((/* implicit */_Bool) max((((long long int) arr_0 [8ULL])), (((/* implicit */long long int) arr_1 [i_1]))))) ? ((~(((long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_6 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (-3137049804875382658LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
