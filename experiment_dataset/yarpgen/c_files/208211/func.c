/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208211
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)203)))) < (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) ((signed char) 8053101381094924688LL))) : (((/* implicit */int) arr_4 [i_0] [(short)8] [i_0]))))));
                arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (signed char)-113));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26876)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (signed char)-113))));
    var_22 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_2))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned short)62300)) : (((/* implicit */int) (signed char)-117)))))));
}
