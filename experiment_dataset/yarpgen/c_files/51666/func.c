/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51666
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) -4088063787367850981LL))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2044), (((/* implicit */int) (unsigned char)192))))) ? (max((var_4), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) 7158850228481792841ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16263935289243632653ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)104))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) ? (max((((((/* implicit */_Bool) -5359587804163253615LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (11LL))), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
                var_14 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
            }
        } 
    } 
}
