/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21543
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
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_11)))) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                var_18 = arr_1 [i_0] [i_1];
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_20 *= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
