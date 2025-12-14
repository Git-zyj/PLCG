/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201678
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (0ULL))))));
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_2 [18] [i_0]))))) & ((~(arr_4 [i_0] [i_0])))))) ? ((~(((long long int) arr_4 [6U] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0 - 3] [i_0]))))));
                arr_6 [(unsigned short)8] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (~((~(((/* implicit */int) arr_0 [(unsigned char)13])))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((unsigned long long int) arr_3 [i_0] [i_0 - 2])))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) (unsigned char)254);
    var_24 = ((/* implicit */long long int) ((((((((/* implicit */long long int) var_5)) == (var_8))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) 1818162095)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
