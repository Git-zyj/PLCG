/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202988
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)46706)) : (((/* implicit */int) (signed char)-110)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) var_8);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_1 [i_0])))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) var_16);
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) ((unsigned char) arr_2 [i_4]))) : (((arr_1 [i_0]) / (((/* implicit */int) (unsigned short)49385))))));
                            }
                            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_3])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_3) << (((((/* implicit */int) var_17)) - (88)))))) + (arr_0 [i_0])));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-5680059762462457108LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)18829))))) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42)))))) : ((-(((/* implicit */int) var_17)))))))));
}
