/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220481
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    var_17 = ((/* implicit */unsigned long long int) var_7);
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1608124935745261942LL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-85))))) : (max((var_15), (((/* implicit */unsigned long long int) var_9)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-22))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (short)32756)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_1)))) | (((/* implicit */int) ((unsigned short) var_7))))) != (((/* implicit */int) arr_1 [i_0])));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((-720928749), (((/* implicit */int) var_1)))) * (((/* implicit */int) var_13))))) & (((3025644547449675046ULL) ^ (((/* implicit */unsigned long long int) ((long long int) var_7)))))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (var_11)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)88)) ? (var_9) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)3))))))), ((+(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) arr_4 [i_1]);
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            var_24 = ((/* implicit */unsigned short) (_Bool)1);
        }
    }
}
