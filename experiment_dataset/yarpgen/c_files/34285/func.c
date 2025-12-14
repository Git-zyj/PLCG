/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34285
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)37810)), (min((var_11), (((/* implicit */long long int) (signed char)124)))))))));
    var_17 = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) ^ ((-(((/* implicit */int) var_6)))))) == (((/* implicit */int) max((var_2), (var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (signed char)106);
                arr_5 [18] [i_1] [18] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) (unsigned short)0))))), (((short) var_10))))) | ((+(((((/* implicit */int) (signed char)82)) << (((((/* implicit */int) (signed char)124)) - (103)))))))));
                arr_6 [(short)8] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (var_11));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 2] [i_1] [(short)19]), (arr_2 [i_0 + 3] [i_0 + 1] [i_0]))))) + (max((((/* implicit */long long int) (unsigned char)160)), (-5636555794220730850LL)))))));
            }
        } 
    } 
}
