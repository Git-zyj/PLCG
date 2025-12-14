/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19004
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
    var_18 = (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)223)) >= (((/* implicit */int) (unsigned char)242))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)23)))) : (((/* implicit */int) (unsigned char)15)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_3 [i_2 + 1] [i_2])))) - (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2])) ? (var_3) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
