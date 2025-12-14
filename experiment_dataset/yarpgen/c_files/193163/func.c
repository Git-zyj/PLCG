/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193163
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
    var_11 += ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_3)))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_0 - 1])) < (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_0 - 1]))))) : ((-(((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_0 - 1]))))));
                        var_13 = ((/* implicit */_Bool) (~(3214955314125423201ULL)));
                        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
                    }
                }
            } 
        } 
    } 
}
