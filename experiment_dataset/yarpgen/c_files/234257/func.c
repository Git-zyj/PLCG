/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234257
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned short)19616);
        arr_4 [i_0] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) >> ((((+(4294967295U))) - (4294967282U)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_14);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19616)) ? (62644462U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
        var_18 = (+(((/* implicit */int) (unsigned char)255)));
        var_19 = ((/* implicit */unsigned int) ((1923200861839205716ULL) >> (((((/* implicit */int) var_15)) - (3062)))));
    }
}
