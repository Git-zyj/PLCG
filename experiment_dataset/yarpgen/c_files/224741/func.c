/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224741
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
    var_14 = ((/* implicit */unsigned char) (-(min((((int) var_3)), (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1])))))))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) | (((/* implicit */int) max((arr_1 [i_0 + 1]), (var_10)))))) : ((-((~(((/* implicit */int) var_2))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned short) var_4);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1])))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-(((((var_1) << (((var_8) - (88121402U))))) >> (((((/* implicit */int) var_7)) + (56)))))));
}
