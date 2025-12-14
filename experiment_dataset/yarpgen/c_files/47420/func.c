/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47420
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)8)) >> (0LL)));
                var_12 -= ((/* implicit */int) ((long long int) (unsigned char)63));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    var_14 &= ((/* implicit */unsigned int) (~((-(3186123009671985648LL)))));
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        arr_8 [i_2] = ((long long int) arr_6 [i_2]);
        arr_9 [i_2] = ((/* implicit */int) (~((+(arr_1 [i_2] [i_2])))));
    }
}
