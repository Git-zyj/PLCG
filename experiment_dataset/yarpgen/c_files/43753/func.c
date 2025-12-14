/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43753
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
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)176))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = min(((!(((/* implicit */_Bool) ((unsigned long long int) 4294967291U))))), (((((/* implicit */_Bool) (signed char)122)) && ((_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 1099511627775LL))));
        var_15 = ((/* implicit */long long int) max((max((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0])))));
        var_16 *= ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (12543464304711839878ULL))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) (signed char)122);
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) min((min((min((arr_1 [i_1]), (((/* implicit */unsigned int) (short)-13005)))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned char) (signed char)-122))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)31)), (4182801791683374176LL)))))))));
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) max((524287U), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */long long int) var_2)), (var_8)))))));
        var_19 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) var_2)))) + (((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */signed char) var_6)))))))));
    }
    var_20 = ((/* implicit */int) (~(var_0)));
}
