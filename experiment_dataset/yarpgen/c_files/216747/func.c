/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216747
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (var_9)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 ^= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */_Bool) ((((/* implicit */int) var_19)) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (95655177) : (((/* implicit */int) (short)-8166))));
        var_23 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_2 [7U]))))));
    }
    var_24 -= ((/* implicit */signed char) ((((_Bool) ((unsigned long long int) 3930480303U))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
    var_25 &= ((/* implicit */short) max(((-(((var_14) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */int) var_17)) - (((((/* implicit */int) var_18)) - (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] &= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_5 [i_1]))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */_Bool) (~(((unsigned int) arr_3 [i_1]))));
            var_26 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_2]);
            arr_10 [i_2] = ((/* implicit */signed char) arr_3 [4U]);
        }
        arr_11 [i_1] = ((/* implicit */unsigned int) max((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))), (var_10)));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_27 = ((/* implicit */_Bool) var_10);
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) var_15);
        arr_16 [i_3] = ((_Bool) max((((/* implicit */int) min(((unsigned short)7466), (((/* implicit */unsigned short) arr_14 [(short)7]))))), (((var_4) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_15))))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9))));
        var_28 = ((/* implicit */signed char) ((((_Bool) arr_19 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) var_2))));
    }
}
