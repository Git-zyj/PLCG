/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35586
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
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((long long int) ((unsigned int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */int) (((~(2930763543U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) % (-195956930200555040LL))) << (((((var_7) % (((/* implicit */unsigned long long int) 5944340848874561529LL)))) - (4464610658722267094ULL))))))));
            var_22 = ((/* implicit */unsigned int) (~(((7619903096157603721ULL) << (((((/* implicit */int) arr_2 [i_0])) - (47000)))))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((var_5) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_7)))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0 - 2]))));
    }
    var_24 = ((/* implicit */long long int) var_0);
}
