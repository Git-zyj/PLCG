/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249149
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
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 = ((/* implicit */_Bool) ((var_5) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_12))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_0 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [8ULL])))));
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), ((+(var_11)))))) ? ((-(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (((/* implicit */int) arr_1 [7ULL] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_23 = (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_1] [i_1]))))));
                var_24 ^= ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
}
