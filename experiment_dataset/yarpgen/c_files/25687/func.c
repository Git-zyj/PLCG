/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25687
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
    var_14 = var_9;
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(2096055319U))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (5U)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */unsigned long long int) 2255004453U)) <= (3821053421983147691ULL))), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_2 [i_0] [i_0])))))))) < (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1])))));
            var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [7U] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)23246)) ? (18446744073709551615ULL) : (18446744073709551615ULL))) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (-(861143863U))))));
            arr_6 [i_0] [i_1] [i_1 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (unsigned char)72)))));
        }
    }
    for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) == (var_11)))), ((-(arr_8 [i_2 + 2] [(unsigned short)1])))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_2 + 2])), ((+(18446744073709551598ULL)))))) ? ((+(0))) : (((/* implicit */int) ((signed char) arr_7 [i_2 + 3]))))))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_10))))));
    }
}
