/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45437
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
    var_17 = ((int) -107732116);
    var_18 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(arr_4 [i_1] [i_0] [i_0])))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [6U] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (min((((arr_4 [i_0] [i_0] [2]) - (arr_4 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) max((arr_3 [0U]), (107732122))))))));
                var_20 ^= ((/* implicit */unsigned int) arr_3 [i_0]);
            }
        } 
    } 
}
