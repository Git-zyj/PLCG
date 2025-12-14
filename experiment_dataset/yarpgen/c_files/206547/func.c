/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206547
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
    var_15 = max((((/* implicit */unsigned int) var_2)), (((min((((/* implicit */unsigned int) (_Bool)1)), (var_12))) >> (((((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))))) - (20473740U))))));
    var_16 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), ((((((+(((/* implicit */int) (signed char)-64)))) + (2147483647))) << (((((var_3) + (1881287743))) - (3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 2] [i_1] [i_2] = ((/* implicit */_Bool) 9519551667254672657ULL);
                    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_0)) + (31848)))))) : (7327585177327288826ULL)));
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 2])) ^ (((/* implicit */int) ((unsigned char) var_0)))));
                }
            } 
        } 
    }
}
