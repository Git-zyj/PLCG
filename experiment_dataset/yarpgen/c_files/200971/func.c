/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200971
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_12 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [8])))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_13 *= ((/* implicit */signed char) arr_6 [12] [12] [(unsigned short)9] [i_2] [12] [i_3 + 1]);
                        var_14 = ((/* implicit */signed char) (+(var_6)));
                    }
                } 
            } 
        } 
    }
}
