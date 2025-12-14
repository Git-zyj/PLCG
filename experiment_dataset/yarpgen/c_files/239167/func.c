/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239167
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
    var_12 = min((((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))), (((/* implicit */int) ((_Bool) ((unsigned int) var_2)))));
    var_13 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132)))))) || (((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
    var_14 = ((/* implicit */unsigned char) ((signed char) 208733233));
    var_15 = ((/* implicit */long long int) 1598551259U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_3 [i_1] [i_0])))) ? (((int) 2696416036U)) : (((/* implicit */int) ((short) arr_1 [i_1] [i_0])))));
                arr_5 [12ULL] [(unsigned char)5] [(unsigned short)14] = ((/* implicit */long long int) arr_2 [i_0] [3ULL]);
                var_16 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
}
