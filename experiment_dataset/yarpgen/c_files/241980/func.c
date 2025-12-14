/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241980
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
    var_17 = min((min((((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_3))))))), (min((((int) (-2147483647 - 1))), (((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = var_12;
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) -1625764383)) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))))) : (((((/* implicit */int) min((arr_0 [i_0 + 1]), (var_9)))) & (((((/* implicit */int) var_5)) | (((/* implicit */int) (_Bool)1))))))));
        arr_4 [(signed char)7] = ((/* implicit */int) ((((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_3)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))), (var_1))))));
        var_19 = ((/* implicit */int) min((((/* implicit */long long int) ((int) arr_0 [i_1]))), (min((((long long int) var_12)), (((/* implicit */long long int) var_5))))));
        var_20 = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) ((var_11) ? (arr_8 [(signed char)9] [i_2]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (249072033)))));
        arr_11 [i_2] = ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (signed char)15))))) + (32LL))))))));
        var_23 = ((/* implicit */_Bool) arr_13 [i_3]);
        var_24 = ((((/* implicit */_Bool) ((((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))) * (((arr_12 [i_3]) % (((/* implicit */int) var_2))))))) ? (((/* implicit */int) arr_13 [i_3])) : ((-(((((/* implicit */_Bool) var_0)) ? (var_7) : (var_13))))));
    }
    var_25 = ((/* implicit */_Bool) ((var_11) ? (var_1) : ((-(((/* implicit */int) var_15))))));
}
