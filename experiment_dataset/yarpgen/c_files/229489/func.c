/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229489
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) max((9093123521621661289LL), (((/* implicit */long long int) arr_1 [i_2]))))))));
                    arr_10 [i_2] [i_0] [i_2] = ((/* implicit */signed char) arr_1 [i_1 - 2]);
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-120)) && (arr_6 [i_2 - 3] [i_2 - 3] [i_1 - 4]))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_5))));
}
