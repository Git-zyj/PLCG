/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203660
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
    var_10 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned short) 1978906954U))) ? (var_7) : (((int) -938352159)));
                var_11 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (var_7) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_0] [i_0]) : (var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [11LL] [i_1] [i_0]))))))), (((-1148333026984397776LL) + (((/* implicit */long long int) -2102717480))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_12 = ((/* implicit */signed char) var_2);
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) (short)25568)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2]))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
    }
}
