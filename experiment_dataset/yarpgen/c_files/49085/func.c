/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49085
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [(short)12] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_19 += ((/* implicit */int) ((short) 2226091147U));
            var_20 -= ((/* implicit */int) 0ULL);
            var_21 += ((/* implicit */short) ((_Bool) arr_1 [i_0 + 3] [i_0 + 3]));
        }
    }
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_2] [i_2])), (((arr_7 [i_2] [i_2 + 1]) * (((arr_7 [i_2] [i_2 + 2]) * (arr_7 [i_2] [i_2]))))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_1))));
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_2] [i_3 + 4])))) * (((14875958143421759485ULL) - (((/* implicit */unsigned long long int) arr_7 [20LL] [i_3 + 4]))))));
            arr_10 [i_2] [i_2] |= min((((/* implicit */unsigned long long int) (signed char)75)), (3570785930287792131ULL));
            arr_11 [i_2] [i_2 + 2] [(signed char)4] = ((/* implicit */signed char) (-(((((14875958143421759483ULL) * (3570785930287792132ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (2068876148U) : (2068876144U))))))));
            var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((arr_7 [i_3 - 1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((-(18446744073709551615ULL)))));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) (unsigned short)65535);
}
