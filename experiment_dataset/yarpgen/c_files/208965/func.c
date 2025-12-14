/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208965
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
    var_17 = ((/* implicit */int) ((unsigned char) max(((+(((/* implicit */int) var_6)))), (((-1231117539) / (((/* implicit */int) var_3)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) ((unsigned char) var_7))), (max((1231117538), (-1231117539))))) : (((((/* implicit */int) var_9)) & (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_10))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (arr_1 [i_1] [i_0])))) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) var_10)), (arr_1 [i_0] [i_1]))))), (arr_1 [i_1] [i_0])));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) var_13);
            }
        } 
    } 
}
