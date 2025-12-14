/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193214
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
    var_17 = ((/* implicit */short) 2474407369U);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_10 [i_1] [i_0] = (_Bool)1;
                }
            } 
        } 
    } 
}
