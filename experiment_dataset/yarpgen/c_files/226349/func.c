/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_12);
        var_21 = (+(((arr_7 [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))));
        arr_8 [i_2] = (+(((/* implicit */int) var_13)));
    }
}
