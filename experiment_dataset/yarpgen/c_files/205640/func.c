/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205640
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
    var_19 = var_10;
    var_20 = ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) -971014663))))) > (((int) 536870911))));
    var_21 = -2123999492;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 ^= ((int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_1 - 2]) : (arr_5 [i_1 - 2] [i_0 - 1])));
                    var_23 = max((((int) 536870908)), (min((1186919570), (arr_0 [i_0]))));
                }
            } 
        } 
    } 
}
