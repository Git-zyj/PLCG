/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34597
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((_Bool) max((var_10), (((long long int) -9223372036854775801LL))))))));
                    var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) var_15)))));
                    var_20 ^= ((/* implicit */long long int) var_2);
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))))))));
                }
                var_22 &= ((/* implicit */unsigned int) (signed char)127);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_9)))))));
}
