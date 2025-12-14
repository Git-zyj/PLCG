/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227331
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1]);
                    var_15 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)1664))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_12);
    var_17 = ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_12))))));
    var_18 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)205)) - (175)))))), ((~(8700405671533525801LL)))))));
}
