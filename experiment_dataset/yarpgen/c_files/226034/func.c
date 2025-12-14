/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226034
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned short) (unsigned short)38624));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_7)))))) : (max((((/* implicit */long long int) 3774917U)), (-2048083627536669086LL)))));
    }
    for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned int) arr_3 [(unsigned char)5] [i_1 - 3]));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_4 [i_1] [i_1]))));
    }
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 2048083627536669085LL)) ? (min((506930702513504315LL), (((/* implicit */long long int) -1213940252)))) : (((/* implicit */long long int) (~(var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_16 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) (unsigned short)15539);
                var_18 = ((/* implicit */unsigned int) (!(arr_9 [i_2] [i_3] [i_3])));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (signed char)49))));
}
