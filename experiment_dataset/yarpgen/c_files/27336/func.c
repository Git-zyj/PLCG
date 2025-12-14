/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27336
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) var_5);
                        var_14 |= ((/* implicit */_Bool) var_0);
                        arr_11 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) 1243879012))))) <= ((-(((/* implicit */int) (unsigned char)244))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_9 [i_0] [i_0 - 1] [i_0])), ((signed char)-107)))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_0 - 3] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)58257)) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)0))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_0 + 2] [i_0] [i_0 - 2] [i_0]) - (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0 - 2] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 764146946U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)4095)))) : (((/* implicit */int) ((((/* implicit */_Bool) -3LL)) && (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3]))))))))));
    }
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
}
