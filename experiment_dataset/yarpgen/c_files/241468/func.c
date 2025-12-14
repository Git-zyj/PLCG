/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241468
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
    var_14 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)54)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (short)-12895))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12890))) & (17710465963935182707ULL))))) & (((/* implicit */unsigned long long int) 3586387972521257616LL))));
        var_16 = ((/* implicit */short) arr_0 [i_0]);
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((arr_4 [i_1]) || (((/* implicit */_Bool) (((~(arr_5 [i_1]))) << (((6775902095396901733ULL) - (6775902095396901733ULL))))))));
        var_18 = (!(((/* implicit */_Bool) min((736278109774368908ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 2]))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 2])) / (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3]))))) : ((-(-5211221294733352504LL)))));
    }
    var_20 = ((((/* implicit */int) var_0)) << (((/* implicit */int) var_12)));
}
