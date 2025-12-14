/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51405
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 1733343372779631315LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32663))) : (9223372036854775802LL))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (((short) arr_1 [i_0] [i_0])))))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)32688))) : (9223372036854775802LL))) != (((((/* implicit */_Bool) (short)480)) ? (4011145835493271600LL) : (5577828278429561404LL)))))) < (((/* implicit */int) (short)8873)))))));
        var_17 = ((/* implicit */_Bool) max((var_17), ((_Bool)0)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */int) min((((/* implicit */long long int) arr_3 [i_1])), (arr_0 [i_1])));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) (-(((/* implicit */int) (short)-6433)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) 33553408))))), (((long long int) arr_2 [i_1])))))))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_20 ^= ((((((/* implicit */_Bool) 5577828278429561396LL)) ? (5577828278429561389LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))) < (((((/* implicit */_Bool) (short)21268)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (-1LL))));
            var_21 = ((/* implicit */int) 9223372036854775802LL);
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_7 [12LL]))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3])) && (((/* implicit */_Bool) 9223372036854775787LL))))), (max(((short)-18662), (((/* implicit */short) (_Bool)0))))))) ? (((arr_9 [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) var_13)))))));
        var_24 ^= ((/* implicit */int) ((min((((/* implicit */long long int) var_11)), (-1LL))) & (min((arr_0 [i_3]), (((/* implicit */long long int) arr_9 [0LL] [i_3]))))));
    }
    var_25 *= ((/* implicit */short) ((((/* implicit */int) var_12)) != (var_7)));
    var_26 *= ((/* implicit */int) var_10);
}
