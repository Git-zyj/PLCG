/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201571
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_12))));
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))), (var_9)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 -= min((max((arr_6 [i_0]), (arr_6 [i_0]))), (max((arr_2 [i_0]), (((/* implicit */signed char) var_8)))));
            arr_7 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) ((_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)143)))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)28784)), (9223372036854775807LL))), (((/* implicit */long long int) min((((((/* implicit */int) var_8)) | (arr_0 [i_0]))), (arr_0 [i_0])))))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) ((signed char) var_11))))), (((/* implicit */int) (unsigned short)28791))));
        var_22 = ((/* implicit */int) arr_1 [i_2]);
        arr_10 [i_2] &= ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2]))))) : (7735625457646105030LL))), (((long long int) (~(var_6))))));
    }
    var_23 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), ((-(var_5)))));
}
