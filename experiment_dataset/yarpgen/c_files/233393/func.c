/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233393
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
    var_15 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) 3011164140U)) ? (3011164140U) : (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) 3011164125U)) ? (var_1) : (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) var_10))));
    var_16 ^= ((/* implicit */_Bool) 8629735458232894229LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1]))))) : (min(((~(((/* implicit */int) (signed char)4)))), (((/* implicit */int) arr_6 [(_Bool)0] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_0 - 1]))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)44038))))) ? (18) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_4])) != (((/* implicit */int) (short)-15105)))))))), (max((3011164140U), (((/* implicit */unsigned int) (!((_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)87);
}
