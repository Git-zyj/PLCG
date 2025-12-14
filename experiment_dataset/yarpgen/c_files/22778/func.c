/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22778
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)75))) & (((/* implicit */int) (signed char)74))));
                var_17 = ((((int) var_13)) - ((+(((/* implicit */int) (signed char)75)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */signed char) arr_9 [i_2]);
        var_18 = ((/* implicit */int) max((var_18), (((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (signed char)-80)) : (arr_8 [i_2])))) ? (arr_8 [17]) : (((arr_6 [i_2]) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_7 [i_2] [10])))))) | (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) == (((/* implicit */int) var_2)))))))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)112)), (-5)));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
        var_21 = ((int) var_4);
    }
}
