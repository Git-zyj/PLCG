/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226922
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
    var_18 = ((/* implicit */long long int) var_16);
    var_19 = ((/* implicit */_Bool) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) -1702395621)) : (3084968130U)))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (~(((/* implicit */int) arr_6 [i_0])));
                    arr_10 [i_0] [i_0] [2] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) arr_0 [(signed char)24] [i_1])) ? (var_9) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((signed char) var_6))))) + (2147483647))) << (((arr_1 [i_0] [i_0]) - (316169622)))))) : (((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) arr_0 [(signed char)24] [i_1])) ? (var_9) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((signed char) var_6))))) + (2147483647))) << (((((((arr_1 [i_0] [i_0]) - (316169622))) + (449922380))) - (25))))));
                }
            } 
        } 
    } 
}
