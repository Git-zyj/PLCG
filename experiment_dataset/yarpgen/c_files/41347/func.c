/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41347
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 &= ((/* implicit */int) (-(var_12)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_8 [i_3] [i_3] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) (~(arr_5 [i_2] [i_2] [i_3])));
                        var_20 = ((/* implicit */_Bool) ((unsigned int) arr_5 [i_2] [i_1] [i_0]));
                        var_21 = ((/* implicit */short) (!(var_5)));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (13480878272822924802ULL))));
    }
    var_23 = ((/* implicit */unsigned int) ((long long int) min((((unsigned int) var_6)), (var_3))));
}
