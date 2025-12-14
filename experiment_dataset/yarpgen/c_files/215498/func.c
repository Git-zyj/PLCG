/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215498
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6))))) << (((((/* implicit */int) (unsigned short)25981)) - (25961))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [3ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))) || (((var_12) && (((/* implicit */_Bool) var_0))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_9)), (1944155098))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [(_Bool)0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((1023754190) >> (((var_3) - (14153103903377981160ULL)))))) < (var_2)))) | (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) / (var_14)))))));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_9)) - (63294))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (var_5)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_12);
}
