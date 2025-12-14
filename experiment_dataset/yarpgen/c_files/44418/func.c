/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44418
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_7 [2U] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2 + 1]))))));
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) min(((short)20606), (((/* implicit */short) (unsigned char)114))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)54295)) < (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) (unsigned char)141)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min(((((!(var_9))) ? (((/* implicit */int) (unsigned char)114)) : ((~(((/* implicit */int) (unsigned char)132)))))), (((/* implicit */int) (_Bool)1))));
    var_21 &= ((/* implicit */long long int) var_6);
}
