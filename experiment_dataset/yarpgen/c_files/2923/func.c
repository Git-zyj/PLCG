/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2923
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
    var_18 = ((/* implicit */unsigned char) ((int) var_4));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (max((((/* implicit */int) var_11)), (arr_1 [i_0] [(unsigned short)11]))) : ((-(((/* implicit */int) arr_2 [i_1] [i_0]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_11)))))));
                var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 2135707586)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)9] [i_1])) : (((/* implicit */int) var_8)))) | (((((var_4) + (2147483647))) << (((981192398) - (981192398))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [3LL] [i_1])), (arr_0 [i_0])))) && (((((/* implicit */long long int) var_0)) >= (3372604220526674521LL))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_1]))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_1 [i_1] [i_0]))))))) : (max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))), (((/* implicit */long long int) ((signed char) arr_3 [i_0] [i_0] [i_1]))))))))));
                var_22 ^= ((/* implicit */int) var_14);
            }
        } 
    } 
}
