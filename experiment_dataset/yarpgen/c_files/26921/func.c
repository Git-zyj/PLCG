/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26921
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) | (((/* implicit */int) var_7))))))) < (var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((unsigned char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) min((387289945U), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)))));
                arr_6 [i_0] [i_0] = var_6;
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((arr_2 [i_0]) == (min((min((((/* implicit */long long int) var_1)), (var_6))), (((/* implicit */long long int) var_7)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_0);
}
