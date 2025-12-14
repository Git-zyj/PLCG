/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203427
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
    var_10 = ((/* implicit */unsigned short) (~(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) (~(arr_1 [i_1 - 1])));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((1581261252), (-1223630382)));
                var_12 = ((/* implicit */short) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 3]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
    var_14 = ((/* implicit */int) max((var_5), (min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)11)))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))))));
    var_15 = ((/* implicit */signed char) var_6);
}
