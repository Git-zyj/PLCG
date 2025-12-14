/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221837
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))) ^ ((~(arr_2 [i_0 - 1]))))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_5))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) var_11);
                    var_19 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
}
