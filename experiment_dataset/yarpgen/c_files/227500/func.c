/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227500
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)57))))))) ? (max((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (min((((/* implicit */unsigned int) var_4)), (arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55477)) && (((/* implicit */_Bool) -8482973398911894LL))))))));
                var_16 = ((/* implicit */unsigned int) max((-7292310378075371407LL), (((/* implicit */long long int) (_Bool)0))));
                arr_5 [16] [16] = ((/* implicit */int) arr_0 [i_0]);
                var_17 &= ((/* implicit */_Bool) (~(max((((/* implicit */long long int) -493779765)), (((((/* implicit */_Bool) (unsigned short)10058)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10059)))))))));
                arr_6 [20] = ((/* implicit */unsigned char) arr_1 [11LL] [i_1 + 2]);
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) var_0);
    var_19 &= ((/* implicit */unsigned int) var_9);
}
