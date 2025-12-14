/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32756
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)14)) << (((((/* implicit */int) arr_2 [i_1])) - (31341)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 2] [(signed char)11]))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (var_7) : (((/* implicit */int) (short)5321)))) : (((/* implicit */int) (short)-24188)))) / (min((var_7), (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                var_10 = ((/* implicit */_Bool) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) | (-159946234)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)33), (((/* implicit */unsigned char) var_6))))) <= (((((/* implicit */_Bool) arr_2 [(signed char)7])) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))), (max((((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])), (-17)))));
            }
        } 
    } 
    var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_3)) : (((((((/* implicit */long long int) -159946218)) - (-1015042914012090051LL))) - (((/* implicit */long long int) (+(((/* implicit */int) (short)2699)))))))));
}
