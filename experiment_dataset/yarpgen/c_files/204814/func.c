/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204814
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
    var_19 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */short) ((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */short) ((arr_8 [i_2 - 2] [i_2 + 3] [i_2 - 3] [i_2 - 3]) < (var_17)));
                    arr_9 [i_0] [(unsigned short)8] [i_2] = ((/* implicit */unsigned long long int) arr_8 [5LL] [i_1] [i_2 - 3] [(short)0]);
                    var_21 = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (var_13)))));
    }
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_13))))))), (max(((+(var_4))), (max((((/* implicit */unsigned int) var_18)), (var_17)))))));
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_12));
}
