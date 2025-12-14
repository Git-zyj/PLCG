/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235395
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-27082)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (short)-27093))), (var_5))))) : ((-(var_8)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_13)) : (var_10))))) + (2147483647))) >> (((((((/* implicit */_Bool) 15457751637098867960ULL)) ? (((/* implicit */int) (short)-27082)) : (((/* implicit */int) (short)-27075)))) + (27082))))))));
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)27074)), (var_12)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? ((-(var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27075)) ? (279265756U) : (279265745U)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 18138482770034632097ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((4294967295U), (124751779U)))))) / (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(signed char)21] [i_2]))) : (((long long int) -1LL))))));
                    arr_8 [i_0] [(short)1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2 - 1]), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [(signed char)2])))))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0 + 1])))));
                    var_18 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_2]);
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 3245315432U)))));
                }
            } 
        } 
    } 
}
