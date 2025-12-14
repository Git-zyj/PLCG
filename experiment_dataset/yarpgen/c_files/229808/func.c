/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229808
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), (((signed char) var_0))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_0])))) ? (((/* implicit */int) max((var_2), (arr_0 [i_0])))) : ((+(((/* implicit */int) var_2)))))), ((-(((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_3 [(signed char)9] [i_0] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63986)))))))));
            arr_5 [i_1] = ((/* implicit */short) var_2);
            var_12 = ((/* implicit */int) arr_0 [i_0 - 1]);
            var_13 = ((/* implicit */int) (unsigned short)1550);
            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 6190916632473919727ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)39408)))))))));
        }
    }
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) var_3))));
}
