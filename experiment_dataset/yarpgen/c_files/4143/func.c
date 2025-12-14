/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4143
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
    var_19 = ((/* implicit */unsigned int) (unsigned char)193);
    var_20 = ((/* implicit */unsigned char) min((8), (((/* implicit */int) min((((/* implicit */unsigned short) ((-1211440603) >= (((/* implicit */int) var_6))))), (var_18))))));
    var_21 = ((/* implicit */int) max((var_5), (var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [7U] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [(signed char)5] [i_1]))))), (arr_3 [i_0 - 1] [i_0 + 1]))))) + (389790541U)));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((+((+(389790541U))))) % (arr_1 [i_0]))))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_16)))) ? (((6755399441055744ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
}
