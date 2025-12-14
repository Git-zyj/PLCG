/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40773
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((int) arr_0 [(unsigned short)17]))))) / (2487985828U)));
                var_11 = ((/* implicit */unsigned char) var_0);
                var_12 = ((/* implicit */int) 0U);
                var_13 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 1806981468U)), (min((arr_4 [8U] [i_1] [8U]), (5352626919498423400ULL))))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) 2487985835U);
    var_15 = ((/* implicit */signed char) ((unsigned int) min(((+(2487985805U))), (((/* implicit */unsigned int) var_9)))));
}
