/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34171
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
    var_15 += ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (((var_6) * (((/* implicit */unsigned long long int) 0U))))));
                        arr_10 [i_0] [i_0 - 1] [3ULL] [i_2] [(_Bool)1] [i_0] = ((unsigned int) arr_6 [i_1] [i_2] [i_0]);
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9650034798601594583ULL))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) var_11)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_4 [i_0] [i_0 - 2])));
        arr_13 [i_0] = ((/* implicit */short) var_10);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_5 [(_Bool)1]))));
    }
    var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((unsigned long long int) var_4)))) ? (((unsigned int) ((((/* implicit */unsigned int) var_0)) + (32767U)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_20 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((var_4), (1403018237U)))))) % (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_10))), (var_6)))));
}
