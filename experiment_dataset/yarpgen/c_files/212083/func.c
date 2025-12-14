/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212083
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)11)))) * (min((((unsigned int) (signed char)-11)), (((/* implicit */unsigned int) (unsigned short)23110))))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) -3534365875861348824LL))), ((+(((int) (short)-1))))));
                var_20 = ((/* implicit */unsigned short) ((short) ((int) 4294967295U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (signed char)60)))));
    }
}
