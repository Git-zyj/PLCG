/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32849
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
    var_14 = ((/* implicit */int) var_3);
    var_15 &= ((/* implicit */int) var_12);
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) - (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_18 += ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_0])) << (((4308840839972284850ULL) - (4308840839972284849ULL))))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (arr_4 [i_0] [i_0] [i_2]))))));
                    var_20 = ((/* implicit */int) var_2);
                    var_21 = ((/* implicit */short) 14137903233737266765ULL);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) 14137903233737266765ULL)))))) < (var_13))))));
}
