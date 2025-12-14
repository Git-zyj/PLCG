/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236334
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) var_3);
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!((_Bool)1))))));
        arr_5 [i_1] = ((/* implicit */_Bool) (unsigned short)10);
        arr_6 [i_1] [(unsigned short)16] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) max(((short)9870), ((short)11)))))));
    }
    var_19 = ((/* implicit */unsigned short) ((short) ((unsigned int) (_Bool)1)));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13852)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))), (var_14)))) ? (max((max((((/* implicit */unsigned long long int) var_13)), (16660506828693701118ULL))), (((((/* implicit */_Bool) 16660506828693701118ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (var_11)));
                    var_21 = (short)-7342;
                }
            } 
        } 
    } 
}
