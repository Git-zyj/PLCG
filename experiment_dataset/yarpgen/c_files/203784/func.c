/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203784
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)30993)) : ((-(((/* implicit */int) ((_Bool) var_10)))))));
                arr_7 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_0] [i_1])) && (((/* implicit */_Bool) 679419261)))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) var_14);
                arr_9 [(_Bool)1] [i_0] = ((/* implicit */long long int) -679419261);
                arr_10 [i_0] [i_0] = ((/* implicit */long long int) min((arr_4 [i_0]), (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_7) : (var_11))), (((/* implicit */long long int) ((max((((/* implicit */int) (short)10160)), (var_0))) ^ (((((/* implicit */int) var_2)) | (((/* implicit */int) (short)-8759)))))))));
}
