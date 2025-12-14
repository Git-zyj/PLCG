/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51771
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))) ? (min((var_5), (((/* implicit */unsigned int) (short)32765)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32736)) <= (((/* implicit */int) (short)32728))))))))) ? ((((-(((/* implicit */int) (short)32745)))) * (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) : ((-((-(((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(max((2130706432U), (((/* implicit */unsigned int) (_Bool)1))))));
        var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)32414)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32738))) : (7138833008867821298LL))) : (((long long int) 5988492038440845221ULL))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(5988492038440845220ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (_Bool)0))))))));
    }
}
