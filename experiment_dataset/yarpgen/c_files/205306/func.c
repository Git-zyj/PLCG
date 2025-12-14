/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205306
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */short) ((int) (+(((/* implicit */int) (_Bool)1)))));
                        arr_12 [i_0] [i_0] [i_1] [1] [i_2 - 1] [i_1] = ((/* implicit */int) min((0U), (((/* implicit */unsigned int) max(((unsigned short)49940), (((/* implicit */unsigned short) (short)16383)))))));
                        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)4)) : (-354803124)))) && (((/* implicit */_Bool) (signed char)24))));
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) 1274252221U))));
                    }
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */signed char) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_1] [(signed char)1])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_5 [i_0] [i_1]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)32252)), (var_4)))))))));
                    arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (unsigned short)7250)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (((((((/* implicit */_Bool) -13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_2] [i_0] [i_0]))) : (var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_1);
}
