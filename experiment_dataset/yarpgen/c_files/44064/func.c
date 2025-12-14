/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44064
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_1);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (arr_0 [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(signed char)8] [i_3 - 2])) + (((/* implicit */int) arr_9 [(_Bool)1] [i_3 - 2]))))) ? (((/* implicit */int) arr_9 [(_Bool)0] [i_3 - 2])) : (((/* implicit */int) var_14))));
        var_20 |= ((/* implicit */signed char) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)-382))));
    }
}
