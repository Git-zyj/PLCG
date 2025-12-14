/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196675
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0 - 1])));
        var_17 = ((/* implicit */long long int) ((short) arr_0 [i_0 + 3] [i_0 + 2]));
        var_18 = ((/* implicit */int) (short)8378);
        var_19 = ((/* implicit */unsigned short) var_12);
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned int) (-((~(var_6))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14)))))) ? (((int) (~(var_6)))) : (-1444182257)));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_1]);
        var_22 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 3])) ? (-1450200500955621747LL) : (((/* implicit */long long int) var_7)))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1)) && ((_Bool)1))))) / (-9007011800987783373LL))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (9007011800987783373LL)))));
}
