/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221752
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))))) || ((!(((/* implicit */_Bool) ((unsigned int) arr_4 [i_0])))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) <= ((((_Bool)1) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_0 [i_0]))))))), (min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_15))))));
                    var_20 &= ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_16)))))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)0))));
}
