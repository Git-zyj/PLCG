/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226112
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
    var_14 = ((/* implicit */int) ((((/* implicit */int) ((signed char) (+(var_12))))) < (((((var_12) % (((/* implicit */int) var_9)))) + (((((/* implicit */_Bool) -336430862)) ? (var_12) : (((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((signed char) ((signed char) var_2)));
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    arr_6 [i_1 + 1] = ((/* implicit */unsigned char) (~((~((~(-1752030654)))))));
                }
            } 
        } 
    } 
}
