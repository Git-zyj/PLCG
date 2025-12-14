/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227171
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
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) arr_6 [i_1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [(unsigned char)12] [i_1])) : (((/* implicit */int) var_15))))))));
                arr_7 [i_0 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) && (((/* implicit */_Bool) arr_5 [i_0]))))) << ((+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
                arr_8 [i_0 - 1] [i_0 + 3] [i_0 + 1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) >= (((/* implicit */int) arr_3 [i_0] [i_0])))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 2])))));
            }
        } 
    } 
}
