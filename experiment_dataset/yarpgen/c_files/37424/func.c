/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37424
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
    var_15 = (!(((/* implicit */_Bool) var_4)));
    var_16 *= ((/* implicit */unsigned char) ((_Bool) max((var_0), (((/* implicit */unsigned long long int) var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((var_4) / (((/* implicit */int) arr_1 [0] [(short)9])));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((414006125), (((/* implicit */int) ((unsigned short) 7667002044063477101ULL)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24983)) ? (-13) : (var_9)))) ^ (((((/* implicit */unsigned long long int) -1496156383)) | (var_12))))) : (((((((/* implicit */_Bool) var_1)) ? (10779742029646074491ULL) : (((/* implicit */unsigned long long int) var_8)))) << (((/* implicit */int) (_Bool)1))))));
                var_19 ^= ((/* implicit */short) var_10);
            }
        } 
    } 
}
