/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218221
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_1 [i_0]);
                var_19 += ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])) > ((-(var_5))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((_Bool) arr_3 [5ULL] [(_Bool)1] [i_1]))))) == (arr_3 [i_0] [18] [i_0])));
                arr_4 [i_0] [i_1] = ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) ((_Bool) min((var_10), (((/* implicit */long long int) var_9)))))));
                arr_5 [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) var_15);
    var_22 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_10)));
    var_23 = ((min((var_17), (var_7))) >= (var_11));
}
