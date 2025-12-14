/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200750
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */_Bool) max((max((((/* implicit */signed char) var_1)), ((signed char)-18))), (var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (signed char)-45);
                arr_6 [i_0] = arr_5 [i_0] [i_0];
                var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2])) : (((/* implicit */int) var_7))))))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                var_14 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (min((1077907958U), (((/* implicit */unsigned int) (signed char)3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1]))));
                var_16 |= arr_4 [(signed char)6] [i_2 - 1];
            }
        } 
    } 
}
