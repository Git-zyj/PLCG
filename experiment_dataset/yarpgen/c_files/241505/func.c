/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241505
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_10))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((/* implicit */unsigned long long int) (unsigned char)43)), (2238093099941679011ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 2238093099941679013ULL))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (unsigned char)255)) : (-71272735)))));
        arr_3 [i_0] [8] = ((/* implicit */long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4203675293486901110LL)), (16208650973767872621ULL)))) || (((/* implicit */_Bool) 9705299759719700844ULL))))), ((+(((/* implicit */int) (unsigned char)36))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((~(min((((/* implicit */long long int) var_12)), (4391411551510293840LL))))))))));
}
