/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238537
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
    var_12 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_4)), (var_6))), (((/* implicit */unsigned int) max((var_10), (arr_0 [i_0 - 1] [i_0 - 2]))))));
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)81)), (3985028858U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (1044480) : (-1366133782)))) : (max((721953928854868197LL), (-721953928854868197LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [(signed char)11])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_0 [i_0] [i_0 - 2])))), (((/* implicit */int) var_11)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) arr_5 [0U])), (arr_3 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3803106700U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) min(((unsigned char)21), (arr_2 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_0))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), (var_5))))));
            arr_8 [i_1] [0LL] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_5 [0])))) ? (((/* implicit */unsigned int) max((arr_5 [(unsigned char)10]), (arr_5 [10U])))) : (((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
    }
}
