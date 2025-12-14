/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44103
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] [12LL] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)1023))));
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((-1LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((((_Bool) 2147483647U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (max((2147483648U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) ((unsigned char) var_15))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) 2147483647U);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_5)) ? (var_8) : (0U))))), (((/* implicit */unsigned int) var_4)))))));
}
