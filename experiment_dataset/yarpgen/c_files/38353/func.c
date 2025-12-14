/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38353
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_10 -= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */long long int) arr_0 [i_0])), (9223372036854775798LL))))), (((((/* implicit */_Bool) (signed char)-21)) ? ((+(4058846634530384831LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (135644370U))))))));
        var_11 = max((max((max((((/* implicit */long long int) 323588692U)), (-6895021303806673297LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)21))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0]))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (max((((((/* implicit */_Bool) (signed char)116)) ? (4081361639471830854LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))), (((/* implicit */long long int) min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0 + 1])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) min((((/* implicit */signed char) arr_1 [i_0])), ((signed char)-7)))), ((+(arr_5 [i_0]))))), (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (4159322940U)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (-6794512162535262663LL)));
                }
            } 
        } 
        var_15 &= ((/* implicit */long long int) arr_3 [i_0 + 3] [1LL]);
    }
    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_7 [i_3]))));
        arr_9 [(signed char)14] |= ((/* implicit */unsigned int) -8LL);
    }
    var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 678337254207671923LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((var_6) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)24))))))) : (var_5)));
    var_18 = min((max((((((/* implicit */_Bool) (signed char)6)) ? (-2639746748866447678LL) : (-6182704056724116083LL))), (((/* implicit */long long int) var_5)))), (((var_6) ? (min((((/* implicit */long long int) (signed char)-116)), (var_2))) : (min((var_1), (((/* implicit */long long int) (signed char)124)))))));
}
