/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26335
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_15)) / ((+(((/* implicit */int) var_0))))))))));
    var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? ((~(((/* implicit */int) var_18)))) : ((((_Bool)1) ? (1084996210) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [6] [i_1] [i_0] = ((((long long int) arr_3 [i_0 - 1])) <= (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))))));
                var_22 = ((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (max((641343304), (((/* implicit */int) var_17))))))) > (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54833)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (((long long int) arr_2 [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) max((arr_2 [i_0]), (((/* implicit */short) var_9))))))));
                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [8U]))))) + (((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)10700)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_3 [2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)6])) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (unsigned short)65535)))))))));
            }
        } 
    } 
}
