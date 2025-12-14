/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192379
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_15 -= ((/* implicit */_Bool) ((var_9) ? (((((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0])) - (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (_Bool)0))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        }
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((4294967285U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
            arr_9 [i_2] [i_2 - 2] [i_2] = ((arr_8 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967283U)) && (((/* implicit */_Bool) -36566663)))))));
            arr_10 [i_0] = ((/* implicit */signed char) ((((arr_0 [i_0 - 1]) + (9223372036854775807LL))) << (((((arr_0 [i_0 - 1]) + (4653863070687986638LL))) - (26LL)))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((((/* implicit */int) var_10)) / (((/* implicit */int) var_6)))))))));
                var_19 |= ((/* implicit */int) (+(var_12)));
            }
        }
        arr_14 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))));
    }
    for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        arr_18 [i_4] [i_4 - 1] = ((/* implicit */_Bool) var_6);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
    }
    var_21 = var_14;
}
