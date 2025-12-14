/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229953
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (var_1)))))) * (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_5)))))));
    var_12 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-46))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4]))));
                var_15 = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_4]));
            }
        } 
    } 
}
