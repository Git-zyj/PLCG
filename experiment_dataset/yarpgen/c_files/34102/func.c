/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34102
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-1314056822)))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) (_Bool)0))))) >> (((-92879597) + (92879614)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (1314056814))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                var_18 |= ((/* implicit */unsigned short) arr_4 [i_0]);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(arr_5 [i_2 + 1] [i_2 + 1] [i_1]))))));
            }
        }
    }
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((6334602775281302473LL), (((/* implicit */long long int) var_7))))))))) : (var_1)));
    var_21 = ((/* implicit */unsigned char) var_13);
}
