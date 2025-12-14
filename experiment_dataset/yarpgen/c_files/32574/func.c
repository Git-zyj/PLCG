/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32574
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
    var_12 -= ((/* implicit */long long int) ((var_10) ? (((/* implicit */int) ((255LL) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3131769142970922194LL))))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (min((var_9), ((unsigned char)0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)243)) ? (min((((/* implicit */unsigned long long int) -3061314004239451344LL)), (18446744073709551604ULL))) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_10)))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [13LL] = ((/* implicit */signed char) 711833291U);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1 - 1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))));
        var_14 *= ((/* implicit */unsigned int) 18341797711731015206ULL);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))));
    }
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_6) == (min((var_8), (var_8)))))), (((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
}
