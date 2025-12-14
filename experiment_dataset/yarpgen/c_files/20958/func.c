/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20958
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((2101556972) * (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 += ((/* implicit */long long int) ((arr_3 [i_0 + 1]) ? ((+(((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) arr_3 [i_0 + 1]))));
        arr_4 [i_0 - 1] &= ((/* implicit */unsigned char) (((+(arr_0 [i_0 - 1] [i_0 + 1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1195122162)) ? (6916268662679794842LL) : (6916268662679794849LL))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (6916268662679794842LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_3 [i_0 - 1]))));
                }
            } 
        } 
        arr_9 [i_0 + 1] &= ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) -346270785)));
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_11))));
    var_21 &= ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */long long int) 2101556952)))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))));
    var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) -2101556953)) ^ (445359718U)));
}
