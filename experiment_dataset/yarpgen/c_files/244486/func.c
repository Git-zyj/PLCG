/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244486
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = 1660233338249953253ULL;
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) var_9))));
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), (min((1660233338249953277ULL), (((/* implicit */unsigned long long int) (unsigned char)75)))))), ((-(min((16786510735459598311ULL), (((/* implicit */unsigned long long int) var_12))))))));
            var_18 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)23505)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_0]))))));
            arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_1])), (arr_0 [(short)7] [(short)7])))) : (((((/* implicit */_Bool) 1660233338249953260ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)265))))));
            var_19 += ((/* implicit */unsigned short) ((short) (+(16786510735459598326ULL))));
        }
    }
    var_20 = ((/* implicit */unsigned short) var_4);
}
