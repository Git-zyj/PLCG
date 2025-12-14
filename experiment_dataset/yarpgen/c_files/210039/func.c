/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210039
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
    var_17 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) 761161058U)) ? (761161058U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (3533806238U)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (3533806237U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)22]))))))) ? (((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) ((_Bool) 1365030689)))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2 - 1])))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_16);
                    arr_10 [i_1] = ((/* implicit */short) (~(-5332263977782952692LL)));
                    arr_11 [i_1] = ((max((((/* implicit */long long int) var_9)), (((long long int) 18446744073709551615ULL)))) + (((/* implicit */long long int) var_2)));
                }
            } 
        } 
    } 
}
