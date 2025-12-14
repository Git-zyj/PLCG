/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33914
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) var_14);
        arr_4 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((short) (signed char)-62))) / (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 3946839448071053146ULL))));
                var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_2])), (14133967191642751280ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_11);
    var_20 = var_1;
}
