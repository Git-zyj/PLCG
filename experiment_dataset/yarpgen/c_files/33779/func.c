/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33779
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 += ((unsigned int) arr_1 [i_0]);
        var_12 = ((/* implicit */_Bool) var_2);
        var_13 += ((/* implicit */long long int) (signed char)101);
        var_14 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) var_3);
        var_16 = 17182040503429641933ULL;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 += ((((((/* implicit */int) (signed char)101)) != (((/* implicit */int) (signed char)-124)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned short)65116))))) || (((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (signed char)75)))))))))) : (var_8));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)-9)))))));
        arr_6 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) max((arr_1 [(unsigned short)20]), (arr_0 [i_2] [i_2])))) : (((/* implicit */int) max(((signed char)125), (((/* implicit */signed char) (_Bool)0))))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)-123))))));
    }
    var_19 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) != (4224589442510544335ULL)))) : (min((var_0), (((/* implicit */int) var_3)))))), (((/* implicit */int) ((_Bool) var_9)))));
}
