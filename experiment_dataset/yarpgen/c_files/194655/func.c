/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194655
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) max((1413005533U), (2538239455U))));
        var_11 = max((((((arr_1 [i_0 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_3))))), (((long long int) (-(((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) < (var_8))))));
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) (-(max((max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_0))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_0) < (var_3)))), (var_8)))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-5)), (67108863U)))), (((long long int) arr_0 [i_0 + 1])))) : (max(((-(arr_4 [i_0 + 1]))), (((/* implicit */long long int) arr_0 [i_0 - 1])))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(short)6] [i_1])) & (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 215435357U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 67108873U))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2])) & (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2]))))) : (var_9)));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) < (((/* implicit */int) arr_0 [i_0 + 2]))))) : (((/* implicit */int) ((short) var_10)))));
        }
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_6 [(unsigned short)3] [(unsigned short)3]) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (max((var_0), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) arr_7 [i_2])) : (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_7))))))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) >> (((arr_7 [i_2]) - (2116749916))))) & ((~(((/* implicit */int) var_4)))))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3720904364U)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-30285)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_6))))) : ((~(var_8))))) : (((/* implicit */unsigned long long int) (~(max((var_0), (var_0))))))));
    var_19 = ((/* implicit */long long int) var_7);
}
