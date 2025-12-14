/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221547
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) 4294967295U)), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_0 [i_0] [(unsigned char)9])))))), (((/* implicit */long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((var_4) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_15)))))));
        var_16 = ((arr_1 [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7803))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - ((-(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_10)))) ? ((+(var_7))) : (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))))))));
        arr_4 [i_0] [5LL] = ((/* implicit */_Bool) var_12);
    }
    var_18 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) != (7151515264279566755LL));
    var_19 = ((var_5) > (((/* implicit */long long int) (((+(((/* implicit */int) var_12)))) * (((((/* implicit */int) var_14)) & (((/* implicit */int) var_4))))))));
    var_20 = ((/* implicit */unsigned int) max((((5803746345933363989LL) << (((((/* implicit */int) (_Bool)1)) - (1))))), (min((((/* implicit */long long int) ((_Bool) var_13))), (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
}
