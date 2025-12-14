/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212533
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_18))) % (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)4096))))));
        var_22 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) | (max((((/* implicit */int) (short)-10144)), (arr_0 [i_0]))))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7307622491081381847ULL)) ? (((/* implicit */int) arr_3 [(unsigned short)19])) : (arr_0 [i_0])))) < (((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (67092480ULL))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = (+(max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (67092480ULL))))));
        var_24 = ((/* implicit */unsigned short) ((((67092480ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5944903464687947281LL)))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)12138))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) ((12199303379172822250ULL) == (((/* implicit */unsigned long long int) arr_0 [i_1]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(1848187341U))))));
        var_26 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)9] [i_2]))) : (7307622491081381838ULL)));
    }
}
