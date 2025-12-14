/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24317
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) 1868132049)), (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0] [i_1]) : (arr_5 [(unsigned char)3] [i_1]))))) % (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1270633287))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) << ((((~(((/* implicit */int) ((_Bool) arr_6 [5ULL] [i_1]))))) + (6)))));
                arr_9 [i_0] = ((((/* implicit */_Bool) (short)24764)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)33)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)61346)) : (((/* implicit */int) var_8))))))), (var_9)));
    var_18 = ((((/* implicit */_Bool) var_9)) ? (13U) : ((~(0U))));
    var_19 = ((/* implicit */signed char) var_6);
}
