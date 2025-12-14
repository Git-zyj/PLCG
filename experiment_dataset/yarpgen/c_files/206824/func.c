/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206824
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
    var_19 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) arr_0 [i_0 + 4]))))))));
                var_21 ^= ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) << (((17155327845429942156ULL) - (17155327845429942134ULL))))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65523))))));
                arr_4 [i_0 + 3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23)) ? ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (min((arr_2 [(unsigned char)19] [i_1]), (((/* implicit */unsigned long long int) -9223372036854775785LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)91)), ((unsigned char)242))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)19] [(signed char)4])) ? (((/* implicit */unsigned long long int) 815238937165723656LL)) : (18384489836532258666ULL))))))))));
            }
        } 
    } 
}
