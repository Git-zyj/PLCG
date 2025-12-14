/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35638
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_1))))))));
    var_17 ^= ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (-1019689253)));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)24);
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 268435456)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1019689253) : (((/* implicit */int) var_12)))))) < (max((((/* implicit */int) var_4)), (((arr_2 [12] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))));
    }
    for (signed char i_1 = 4; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [7ULL]);
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((signed char) ((_Bool) var_9)));
        arr_10 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [(signed char)14]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_0 [i_1 + 4])))))))));
    }
}
