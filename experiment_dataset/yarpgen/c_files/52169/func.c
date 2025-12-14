/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52169
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15)))))))) + (max((var_12), (((/* implicit */unsigned long long int) max((1282648115U), (3012319179U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) 1282648115U);
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_3])) : (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) (short)-26157)))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2]))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)-32765)) | (-1415695586)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) arr_1 [7ULL]))))) : ((-(arr_1 [i_1]))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((911659874281622403ULL), (((/* implicit */unsigned long long int) -7905665091992781260LL)))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_9))))))))));
}
