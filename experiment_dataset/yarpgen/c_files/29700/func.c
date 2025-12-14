/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29700
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
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2300828696U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26187)))))) ? ((+(((/* implicit */int) (short)511)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0]))))), (var_9)));
        var_22 *= ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) arr_10 [i_0]);
                        arr_11 [i_0] [i_1] [i_1] [(unsigned short)10] |= max((max((((/* implicit */unsigned long long int) ((-956229896) / (((/* implicit */int) (unsigned short)65532))))), (((((/* implicit */_Bool) var_0)) ? (8375732076063930041ULL) : (380675740754765951ULL))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18066068332954785641ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((var_15), (((/* implicit */unsigned long long int) 35184363700224LL)))))));
                    }
                } 
            } 
        } 
    }
}
