/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198923
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_10 = max((((arr_0 [i_0 + 1] [i_0 + 1]) << ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0] [i_0 + 1]))))), (((/* implicit */long long int) (((_Bool)1) && ((_Bool)1)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) max((((_Bool) (signed char)126)), (((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (arr_0 [i_0] [i_1 + 1]))))));
            var_12 = ((/* implicit */_Bool) min((arr_0 [i_1 - 1] [i_1 + 2]), (((arr_2 [i_1 - 1]) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min(((+(((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) ((signed char) arr_0 [i_1 + 1] [11LL]))))))));
        }
        for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_14 = ((_Bool) max(((_Bool)1), (((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1))))));
            var_15 = ((max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_2 + 1] [i_2 - 2]))) >> (((((arr_0 [i_2 + 1] [i_2 - 2]) | (arr_0 [i_2 + 1] [i_2 + 1]))) - (2876807195641445357LL))));
            var_16 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (signed char)-92)), (arr_4 [i_0 - 4]))), (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (9223372036854775807LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)120)))))))));
        }
    }
    var_17 = ((/* implicit */long long int) ((_Bool) ((long long int) max((7394363706589642794LL), (var_6)))));
}
