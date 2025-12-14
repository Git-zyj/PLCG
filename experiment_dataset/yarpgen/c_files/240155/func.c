/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240155
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))) ? ((-(max((14250250946969262861ULL), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2])) >= (var_1))))) >= (var_2)))), ((~(((/* implicit */int) arr_0 [i_0 - 3]))))));
                    var_20 *= ((/* implicit */unsigned short) var_11);
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 287180481U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-27667)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4194272U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) == ((-(var_17))))))));
                    var_22 = ((/* implicit */short) (-(((unsigned int) min((var_13), (((/* implicit */signed char) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22474)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) ((short) var_6))))))));
}
