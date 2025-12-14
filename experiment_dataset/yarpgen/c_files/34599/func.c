/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34599
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
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) min((var_15), (((/* implicit */short) var_1))))) * (((/* implicit */int) var_15))))));
    var_20 = ((/* implicit */_Bool) ((((_Bool) ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119)))))) ? (max((max((var_11), (((/* implicit */long long int) (short)-10700)))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_21 &= (_Bool)1;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_22 *= ((/* implicit */unsigned int) var_3);
                arr_4 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [i_1] [i_0])))) ? (((/* implicit */int) min(((signed char)-103), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                var_23 = ((/* implicit */unsigned long long int) var_15);
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ^ ((~(min((var_12), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
            }
        } 
    } 
}
