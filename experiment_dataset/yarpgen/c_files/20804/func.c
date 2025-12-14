/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20804
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
    var_12 = ((/* implicit */unsigned int) 1534224019);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 &= ((((/* implicit */int) min((arr_3 [i_1 + 1] [i_1] [i_1 + 1]), (arr_3 [i_1 - 1] [i_1] [i_1 + 1])))) % (((int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_3 [i_1] [i_0] [9LL])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1534224019)) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [6] [i_1 + 1]))))) : ((+(((((/* implicit */int) var_10)) % (((/* implicit */int) arr_4 [i_0]))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_1 + 1] [(signed char)2]);
            }
        } 
    } 
}
