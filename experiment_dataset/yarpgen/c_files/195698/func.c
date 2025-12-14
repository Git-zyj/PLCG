/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195698
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
    var_16 -= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) | (((((/* implicit */_Bool) (signed char)103)) ? (min((-1262969778), (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) (unsigned short)14336)))))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (unsigned char)133))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_3 [i_0])))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
}
