/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19043
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
    var_13 = ((/* implicit */signed char) ((var_9) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((var_1) >> (((var_3) - (9018560138540534555LL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4294967294U)))))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned short)45703), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)46)))))))) : (((/* implicit */int) (signed char)-55))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_7 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) ((int) (~(var_1))));
                    var_16 ^= ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_9))) % (((var_3) >> (((((/* implicit */int) var_0)) - (32288)))))));
                }
                var_17 = ((long long int) ((((/* implicit */_Bool) (unsigned short)45703)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_1] [i_1] [i_1] [i_1])));
            }
        } 
    } 
}
