/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194795
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
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))) - ((-(15089737496609967367ULL)))));
                    var_11 = ((/* implicit */int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */short) (~(((unsigned int) ((((/* implicit */int) (unsigned short)15)) != (((/* implicit */int) var_8)))))));
    var_13 = ((/* implicit */unsigned int) var_5);
}
