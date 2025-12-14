/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40774
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
    var_11 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned char) (signed char)-3))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max(((unsigned short)1013), ((unsigned short)22337)));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned short)26719))))), (max((((/* implicit */unsigned int) arr_2 [i_0])), (3560698039U)))));
        arr_5 [i_0] &= ((/* implicit */short) (((_Bool)1) ? (549755812864ULL) : (((/* implicit */unsigned long long int) -32166943))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) (unsigned short)38817);
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_14 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_6 [i_1])) / (arr_10 [9ULL])))));
            var_15 = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_1] [i_2] [i_2]));
        }
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_5)), (-606141046192550315LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (2113495800) : (var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1])))))));
        var_17 = (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_1])))));
    }
    var_18 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) (unsigned char)38))));
}
