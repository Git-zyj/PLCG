/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237932
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
    var_13 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_10)), (var_9)))), (min((var_6), (((/* implicit */long long int) var_12)))))), ((((~(var_6))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)25587)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) max((((/* implicit */long long int) arr_3 [(signed char)8] [i_1])), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)63)), ((unsigned short)10767)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)120))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : ((-9223372036854775807LL - 1LL))))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((max((1099510579200ULL), (((/* implicit */unsigned long long int) var_5)))) << (((max((((/* implicit */int) (unsigned short)16128)), (arr_0 [i_1]))) - (16090))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(4294967295LL))))))));
                var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)128)), (((((/* implicit */unsigned long long int) ((-423835887293401940LL) - (var_6)))) / ((-(1099510579190ULL)))))));
            }
        } 
    } 
}
