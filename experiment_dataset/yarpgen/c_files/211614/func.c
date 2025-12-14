/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211614
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
    var_17 = ((unsigned int) (-(16383U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = arr_3 [i_1];
                var_19 = ((/* implicit */unsigned int) min((var_19), (arr_0 [i_1])));
                var_20 -= ((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (max((((unsigned int) var_11)), (((unsigned int) arr_1 [i_1] [i_1])))) : ((((!(((/* implicit */_Bool) 1062246009U)))) ? (arr_1 [i_0] [i_1]) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (var_7))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_3] [13U] [i_3] = ((((/* implicit */_Bool) max((((arr_1 [i_0] [i_0]) * (4294967295U))), (min((var_16), (arr_4 [i_0])))))) ? (var_16) : (((((/* implicit */_Bool) 4294967295U)) ? (max((var_7), (32767U))) : (972020094U))));
                            var_21 = arr_3 [i_0];
                        }
                    } 
                } 
            }
        } 
    } 
}
