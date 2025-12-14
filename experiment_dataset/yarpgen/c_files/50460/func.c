/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50460
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (min((((/* implicit */long long int) (short)16)), (arr_3 [i_0] [i_0])))))), (var_13)));
                var_20 = ((/* implicit */unsigned char) min(((((+(((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1])))), ((+(((((/* implicit */_Bool) var_8)) ? (-454400622) : (((/* implicit */int) (short)-29541))))))));
                var_21 = ((/* implicit */unsigned char) (((-(67553994410557440ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2])))));
                var_22 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) -454400631)))));
                var_23 = ((/* implicit */unsigned char) min((-454400622), (((((/* implicit */_Bool) var_11)) ? (max((arr_4 [i_0] [i_0 - 1]), (((/* implicit */int) (unsigned char)208)))) : (-1805194334)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_25 = var_11;
                var_26 = ((/* implicit */short) min((min((var_15), (arr_2 [i_3] [i_3] [(_Bool)1]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)169)), ((~(454400616))))))));
            }
        } 
    } 
}
