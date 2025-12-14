/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29096
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2126539162U), (2126539162U)))) ? (min((2126539162U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [2U]))) : (5821764400441431304LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)32752)))) : (((((/* implicit */int) arr_1 [2U])) >> (((-5821764400441431291LL) + (5821764400441431310LL)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (1132214144193500060LL)));
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) << (((((/* implicit */int) arr_3 [i_0] [i_1 - 2] [(short)7])) - (6325)))))));
                arr_7 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (5821764400441431291LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1 - 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43793)) && (((/* implicit */_Bool) (unsigned char)9))))))))) : ((-(max((9141035447795307313LL), (((/* implicit */long long int) 268435455))))))));
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [8ULL])), (arr_2 [(unsigned short)6])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5626))) : (5821764400441431291LL)));
            }
        } 
    } 
}
