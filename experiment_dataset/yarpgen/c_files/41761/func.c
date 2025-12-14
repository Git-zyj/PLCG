/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41761
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_9)))))), (((long long int) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4571601651192895622ULL)) ? (5772082877550630983ULL) : (((/* implicit */unsigned long long int) 1006632960U))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12674661196158920632ULL)) && (((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0])))));
        var_15 -= ((signed char) var_7);
        var_16 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))), (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (+(((((11671903571907854342ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))))) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (5772082877550630976ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_5))));
    }
    var_17 = ((/* implicit */signed char) max((var_17), (var_4)));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) ((var_6) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) - (var_5)))))))));
}
