/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21342
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
    var_10 = var_0;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)18553)) & (((/* implicit */int) arr_2 [i_2])))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */long long int) var_2)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32452)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : ((-(var_1))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53064)), (var_2))))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (_Bool)1)))))))));
}
