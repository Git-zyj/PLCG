/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242861
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((unsigned long long int) (unsigned char)9)) & (((/* implicit */unsigned long long int) var_7))))));
                var_20 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_4 [i_0] [(unsigned char)1])))), (((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [(short)2]))))));
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (short)1024)) ? (((/* implicit */unsigned int) ((int) (signed char)65))) : (388932561U));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_11)), (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (min((1708831894618579979LL), (((/* implicit */long long int) var_12)))))));
}
