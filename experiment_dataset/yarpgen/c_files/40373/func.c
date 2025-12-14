/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40373
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(-2025485090))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
    var_14 = ((/* implicit */int) ((unsigned short) ((unsigned short) ((_Bool) var_8))));
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) * ((-2147483647 - 1)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((unsigned char) 3568743667U)))) < (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) >= (((unsigned int) var_7)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
