/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243365
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
    var_10 = ((/* implicit */long long int) min((var_10), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (-6536735959952248304LL)))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((var_6), (((int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) 2147483633)) : (-6536735959952248304LL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) ((258048) - (((/* implicit */int) (unsigned char)190))))), (6536735959952248304LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)32)) >> (((-6536735959952248304LL) + (6536735959952248309LL))))))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (unsigned char)159))))))));
        arr_5 [i_0] = ((/* implicit */int) max((var_7), (((/* implicit */long long int) max((min((((/* implicit */unsigned char) var_8)), (var_4))), (((/* implicit */unsigned char) min((arr_1 [i_0]), ((signed char)6)))))))));
        var_13 = ((/* implicit */signed char) ((int) (-(6536735959952248307LL))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) min((459426134380516242LL), (-3873466316873776597LL)));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8151947082169920624LL)) ? (6536735959952248307LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190)))))))));
    }
    var_14 = var_7;
}
