/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22043
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
    var_15 |= ((/* implicit */unsigned int) ((((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1] [i_1 - 1]))) : (66060288U))));
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_3))) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_0] [i_0]))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_1])))))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */short) ((((min((((((/* implicit */int) (signed char)-98)) | (((/* implicit */int) var_5)))), (((/* implicit */int) var_8)))) + (2147483647))) << ((((~(var_14))) - (4741868246826223525ULL)))));
}
