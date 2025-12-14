/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200949
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) min(((~(2143289344U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))) ? (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))) : (max((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) (_Bool)0)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32403))) | (((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0]) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (var_17))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3] [i_3])), (-488533635))))))));
                        var_21 = ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))) ? (((((/* implicit */long long int) var_4)) + (arr_0 [i_0 - 2]))) : (arr_0 [i_0 - 1]));
                        var_22 = ((((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_7 [i_1])) / (var_6)))))) && (((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 - 2] [i_0]))) < (arr_0 [i_0 - 1])))) | ((+(((/* implicit */int) (signed char)-117)))))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)116))))))));
    var_25 = ((/* implicit */_Bool) var_15);
}
