/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40316
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
    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */int) max((var_2), (var_9)))) / (((/* implicit */int) var_1))))));
    var_18 = ((/* implicit */unsigned int) max((max((var_6), (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) (signed char)(-127 - 1))))))), ((~(max((((/* implicit */int) var_2)), ((-2147483647 - 1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_14)) % (var_8))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (var_16)));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 33554431)), (var_7)))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_1))))) ? (((var_15) ? (((/* implicit */int) var_1)) : (var_16))) : (((/* implicit */int) ((_Bool) 2147483647)))))));
        var_21 = (((~(max((((/* implicit */int) (short)-19183)), (1081329684))))) ^ (((/* implicit */int) var_2)));
    }
    var_22 = var_5;
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_23 ^= ((/* implicit */unsigned short) var_13);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */int) arr_6 [i_2 - 1])) / (((var_13) & (((/* implicit */int) (unsigned char)7)))))) : (max((((/* implicit */int) ((_Bool) var_4))), (max((var_13), (var_13)))))));
        arr_9 [i_2] = arr_1 [i_2] [i_2];
    }
}
