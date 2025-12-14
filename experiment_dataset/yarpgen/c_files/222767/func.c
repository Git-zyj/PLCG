/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222767
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((unsigned short) (short)-23394))) ? (var_1) : (var_1))) : (min((((((/* implicit */int) var_0)) + (((/* implicit */int) (short)-23394)))), ((+(((/* implicit */int) var_5))))))));
    var_13 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)43889)) : (((/* implicit */int) (short)-23385))));
        arr_3 [i_0] = (((~(var_3))) & (((/* implicit */long long int) ((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)0] [(unsigned short)0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (min((var_6), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))))))) ? (-878439654494584793LL) : (((/* implicit */long long int) var_11))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(arr_1 [i_1]))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (signed char)37)), (var_4)))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */short) var_8);
}
