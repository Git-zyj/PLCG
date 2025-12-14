/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22194
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(3079605647906295242LL))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_0] [(unsigned char)1]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) max((((arr_1 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (min((((/* implicit */long long int) var_2)), ((+(587808337771028592LL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_19 += ((/* implicit */unsigned int) var_16);
        arr_12 [i_2] [i_2 - 2] = (-(((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 2])) ? (-184669796) : (((/* implicit */int) (short)12829)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (unsigned char)246))))) ? (((/* implicit */int) min((var_8), ((unsigned char)163)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1055137981U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)40149))))) ? (((((((/* implicit */int) arr_3 [i_2])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_2])) - (110))))) : (((/* implicit */int) ((short) (short)-24404))))))))));
        var_21 = ((/* implicit */_Bool) var_9);
    }
}
