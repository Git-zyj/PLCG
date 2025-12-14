/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244191
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) > (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) (short)126)) ? (13447556344587159052ULL) : (((/* implicit */unsigned long long int) 4294967291U))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_11))) < (((/* implicit */unsigned long long int) -772911878)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 2994135600U)) > (4999187729122392564ULL)))), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (772911879))))));
        var_20 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) 536346624)))) ? (max((4294967295U), (((/* implicit */unsigned int) -772911878)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4999187729122392564ULL))))))));
    }
}
