/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236525
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_8))))));
    var_21 = ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((-(-2147483641)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6ULL)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(var_13)))) : (var_14))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_10))))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_13)) ^ (arr_6 [i_0] [i_1] [i_2] [i_1]))), ((~(arr_6 [i_2] [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
