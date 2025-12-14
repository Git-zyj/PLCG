/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237063
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) : (0U))) : (0U)))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_6))))), (max((var_5), (((/* implicit */unsigned long long int) var_9))))))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */int) (~(((((2148436275U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) 0)), (8519517975314292277ULL)))))));
            var_17 = (((~(((/* implicit */int) ((short) arr_3 [i_0] [i_1]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) -2935861659072752605LL)) == (max((((/* implicit */unsigned long long int) var_6)), (6792928676968258390ULL)))))));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) (((~(-7773515787792214191LL))) | (((/* implicit */long long int) ((arr_0 [i_0]) << (((((/* implicit */int) arr_4 [i_0] [i_0])) + (30653))))))));
            var_19 = ((/* implicit */signed char) max(((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_5 [i_0] [i_2]))))))), (((/* implicit */int) arr_3 [i_0] [i_2]))));
            var_20 *= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_6)))));
            var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (max((var_5), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2)))), (5998687483066228618LL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_22 -= (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_5 [i_2] [i_3]))))));
                var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_12)))) / (((((/* implicit */int) (unsigned short)8184)) + (((/* implicit */int) (unsigned short)32768)))))), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [(signed char)12]))) > (var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
            }
        }
    }
}
