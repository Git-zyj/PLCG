/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192977
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)23355)), (0ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) != (arr_6 [i_1] [i_1] [i_2]))), (max((arr_0 [i_0]), (var_8))))))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */signed char) (((_Bool)1) ? (4ULL) : (18446744073709551615ULL)));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-1))))) <= (((/* implicit */int) (unsigned char)64)))))));
    var_19 += var_3;
}
