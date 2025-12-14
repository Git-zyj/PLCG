/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37846
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
    var_10 = ((/* implicit */unsigned short) (((~(max((var_8), (((/* implicit */long long int) 67108863)))))) / (((/* implicit */long long int) ((((/* implicit */int) ((var_7) != (((/* implicit */long long int) -67108863))))) << (((((13868215361025307178ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2062))))) - (13868215361025307162ULL))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_2), ((signed char)3)))), (min((var_0), (var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((var_3), (((((var_5) ^ (var_5))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (unsigned short)65535))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_13 = (-(-67108871));
        var_14 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [1LL])) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) arr_1 [(short)15])))), (((((/* implicit */_Bool) (short)2052)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [8LL]))))));
        var_15 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) var_1)), (var_3))))), (((/* implicit */unsigned int) (_Bool)0))));
    }
}
