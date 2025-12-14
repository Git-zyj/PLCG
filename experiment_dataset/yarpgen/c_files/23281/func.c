/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23281
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
    var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned int) var_3)), (var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) ((unsigned char) var_6)))));
        var_14 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
        var_15 = ((arr_0 [i_0 + 1] [i_0 + 1]) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)9288)))));
    }
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            {
                var_17 = var_1;
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), ((signed char)-116)))), (var_10)));
            }
        } 
    } 
}
