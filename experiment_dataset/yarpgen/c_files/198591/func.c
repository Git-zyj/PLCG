/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198591
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) && (((/* implicit */_Bool) arr_6 [(unsigned short)22] [i_1] [i_1])))) ? (((var_7) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_7 [(short)16] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_1] [i_0])))));
                    var_14 = ((/* implicit */long long int) max((var_14), (max((((/* implicit */long long int) (short)18956)), (-6387121499879524239LL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (short)26);
    var_16 = ((/* implicit */short) (~(((/* implicit */int) min((min(((short)-18957), ((short)18956))), (((/* implicit */short) (!((_Bool)0)))))))));
}
