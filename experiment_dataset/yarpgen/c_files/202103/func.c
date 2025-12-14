/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202103
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_10 &= ((/* implicit */unsigned long long int) ((short) ((int) arr_2 [i_0] [i_0 - 1])));
        var_11 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))) ? (((/* implicit */long long int) var_3)) : (-4634807372347943494LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [12LL])))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0])) < (arr_1 [i_0])))))))));
    }
    var_13 = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned short)1))))), (((unsigned int) (-2147483647 - 1))))));
    var_14 = ((/* implicit */int) min((var_14), ((+(max((min((((/* implicit */int) var_8)), (var_3))), (((/* implicit */int) (signed char)-108))))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (max((min((var_2), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))))));
}
