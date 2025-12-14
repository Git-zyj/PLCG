/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229959
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(short)4] [i_1] |= ((/* implicit */_Bool) min((arr_4 [i_0]), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (min((29987079U), (((/* implicit */unsigned int) arr_2 [(unsigned short)5])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4264980216U)) || (((/* implicit */_Bool) var_2))))))))));
                var_14 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) min((29987079U), (4264980212U))))));
                arr_7 [i_1] [i_1] [i_1] = ((unsigned char) (!(((/* implicit */_Bool) ((short) arr_0 [i_0])))));
                arr_8 [i_1] = ((/* implicit */unsigned char) 29987067U);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_10);
    var_16 = ((/* implicit */unsigned short) (-(29987063U)));
}
