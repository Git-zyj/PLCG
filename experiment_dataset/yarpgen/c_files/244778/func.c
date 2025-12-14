/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244778
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_19))))) : ((+(var_7))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (short)-16752)), (arr_5 [i_0 - 1] [i_0 - 1]))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_5 [i_0 - 1] [i_0 - 1])))));
                var_21 *= ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_17 [10ULL] [(_Bool)1] [(_Bool)1] [i_3] [4LL] = ((/* implicit */_Bool) 780232634U);
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-((~(1485094298U))))))));
                                var_23 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_19)), ((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3])))))));
                                var_24 ^= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_10 [i_0] [(short)2] [i_2] [i_3] [i_4])) ? (arr_14 [i_0] [i_0] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) arr_16 [(_Bool)1] [i_1] [5U] [i_3 + 1] [i_4] [i_2])))))) ^ (((long long int) var_9))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((arr_8 [i_0 - 1] [(unsigned short)2] [10ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_4);
}
