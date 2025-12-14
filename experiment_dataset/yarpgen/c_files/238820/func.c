/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238820
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */short) (~(((long long int) arr_7 [i_0] [i_1]))));
                    var_12 = ((/* implicit */_Bool) (unsigned short)26485);
                    arr_10 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((17575006175232ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_1))))))));
                    var_13 = ((/* implicit */unsigned char) (signed char)25);
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */_Bool) ((unsigned long long int) var_6));
    var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_1)))));
}
