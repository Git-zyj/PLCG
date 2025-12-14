/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194378
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
    var_17 &= (+(((((int) 16190121810236790238ULL)) / (((/* implicit */int) var_16)))));
    var_18 = ((/* implicit */long long int) (~((-(var_8)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] |= ((/* implicit */long long int) max((arr_3 [i_0]), (((/* implicit */unsigned int) ((short) ((arr_2 [i_1]) > (((/* implicit */unsigned int) var_8))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0]))))) == (((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [(signed char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58194))))) : (((/* implicit */unsigned int) max((-791345362), (-791345362))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 1462354780U);
            }
        } 
    } 
}
