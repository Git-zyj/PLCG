/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228596
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
    var_20 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((9U) != (((/* implicit */unsigned int) 1433368717))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) 556153925U);
                arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) | (((((/* implicit */_Bool) var_12)) ? (2199023254528LL) : (((/* implicit */long long int) var_0)))))))));
                arr_8 [i_0] [6U] = ((/* implicit */long long int) 9144082267091061207ULL);
                arr_9 [i_0] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_18);
    var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) && (((/* implicit */_Bool) ((var_9) / (var_9)))))));
}
