/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3368
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
    var_11 = ((/* implicit */short) var_9);
    var_12 = ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18375767323497636315ULL), (((/* implicit */unsigned long long int) (unsigned short)3))))) ? (max((((/* implicit */unsigned long long int) ((short) var_6))), (((var_0) ^ (((/* implicit */unsigned long long int) var_4)))))) : (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11996427037478636581ULL)) && (((/* implicit */_Bool) (unsigned short)53283))));
            arr_5 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                        var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11620)) / (((/* implicit */int) (unsigned char)173)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(70976750211915313ULL)))) ? (((long long int) arr_11 [(short)4] [(unsigned char)14] [i_0] [(_Bool)1])) : (((/* implicit */long long int) ((unsigned int) var_8)))));
    }
}
