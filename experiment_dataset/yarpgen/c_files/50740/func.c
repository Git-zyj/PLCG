/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50740
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12673615054019878831ULL))));
        arr_3 [i_0] [(signed char)3] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) 1380340565U)), (12673615054019878817ULL))) <= (((((/* implicit */_Bool) var_5)) ? ((-(5773129019689672778ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_2 - 2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)137))));
                    var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) 3957338789U)))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (short)-29608))))))));
}
