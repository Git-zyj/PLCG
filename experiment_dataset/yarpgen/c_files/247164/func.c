/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247164
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
    var_19 = ((/* implicit */unsigned int) min((16630582382572831694ULL), (((/* implicit */unsigned long long int) (unsigned short)25140))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) var_8)) : (arr_0 [i_1 - 2] [i_1 + 2]))))));
                var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_2)))))))) - (max((-898551032), (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_1 [i_1 + 1]))))))));
            }
        } 
    } 
}
