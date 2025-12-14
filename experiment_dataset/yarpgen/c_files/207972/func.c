/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207972
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-86)) - (((/* implicit */int) (unsigned char)131))))));
                                arr_12 [(unsigned short)11] [(short)0] [i_1] [i_3 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57592)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) ((((/* implicit */int) (signed char)63)) >= (((/* implicit */int) (signed char)64)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)125)) ? (((((/* implicit */_Bool) arr_9 [1] [i_1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_0 [(unsigned short)8])) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (var_17) : (((/* implicit */int) var_1)))))) : ((+(((/* implicit */int) (unsigned char)125))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (((-(max((((/* implicit */unsigned long long int) (unsigned char)131)), (3794429978483173094ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22258)))));
}
