/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215527
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
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)112), (var_10))))))) : ((+(((int) (short)-14274))))));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-16)))))))));
        var_20 = ((/* implicit */int) ((_Bool) (((-2147483647 - 1)) & (((/* implicit */int) arr_2 [i_0 + 1])))));
        var_21 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (8191) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32767))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) 18446744073709551601ULL)))));
        var_23 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) (unsigned char)0)))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((144737044) < (((/* implicit */int) var_0)))))));
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)25)) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_13)))))));
        arr_11 [i_2] = ((/* implicit */_Bool) min(((~(arr_9 [i_2]))), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
        var_25 = ((/* implicit */long long int) (-2147483647 - 1));
    }
}
