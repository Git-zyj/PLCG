/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219926
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
    var_10 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (-4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (-19)))) : (var_2))), (min((min((((/* implicit */unsigned long long int) -19)), (var_2))), (((/* implicit */unsigned long long int) var_8)))));
    var_11 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 |= ((/* implicit */unsigned int) var_8);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))), ((~(arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -7)) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 18)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 16ULL)))) : (min((((/* implicit */unsigned long long int) 32)), (0ULL)))))));
    }
}
