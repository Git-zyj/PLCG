/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23960
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
    var_16 = ((/* implicit */unsigned long long int) max(((unsigned short)18498), (min((((/* implicit */unsigned short) var_5)), (var_15)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -6367362635301488029LL)) * ((+(max((((/* implicit */unsigned long long int) -6367362635301488029LL)), (11224585042228287979ULL))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (signed char)3);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) == (((/* implicit */int) (unsigned char)16)))))) : (-6367362635301488012LL)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62718)) == (((/* implicit */int) (signed char)32))))), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_14)))))) <= (((18ULL) << (((((/* implicit */int) arr_7 [i_0])) - (15176))))))))))))));
                        arr_14 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0)))))));
                        arr_15 [i_3] = ((/* implicit */unsigned char) 17ULL);
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6367362635301488014LL)) ^ (var_9))))))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) (+((~(9223372036854775807LL)))));
}
