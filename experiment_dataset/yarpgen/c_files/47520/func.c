/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47520
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
    var_10 = ((/* implicit */int) var_2);
    var_11 = ((/* implicit */unsigned long long int) min(((~(var_5))), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-9881)))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204)))))) : (((unsigned long long int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (short)-9885)) < (((/* implicit */int) (unsigned char)162))))), ((short)9885))))));
                var_14 = ((/* implicit */int) ((min((arr_3 [i_0 + 4]), (((/* implicit */unsigned long long int) var_7)))) + (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))), (((unsigned long long int) (signed char)-112))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) -2027427267)) ? (-1747356037130232008LL) : (18014261070528512LL))))), (((/* implicit */long long int) 2233834589U))));
}
