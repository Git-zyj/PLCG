/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27715
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((unsigned char) var_5)), (max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)0)))))), (466986848507205951LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 63);
        var_12 |= ((/* implicit */signed char) arr_1 [4]);
    }
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) min((var_9), (var_8)))), (((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)2)))))) : (((((/* implicit */_Bool) -1027232293)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned char)255))))));
}
