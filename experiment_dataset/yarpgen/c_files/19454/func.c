/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19454
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned char)217)) << (((((/* implicit */int) var_0)) - (226))))));
                    arr_6 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) arr_1 [i_0])), (arr_5 [i_0] [i_1] [(signed char)10]))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-4), (((/* implicit */signed char) var_2)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
    var_21 = var_11;
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_17))))))))));
}
