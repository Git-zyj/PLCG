/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242286
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
    var_16 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-10907))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) + (arr_4 [i_0] [i_0] [i_0]))))) * (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))), ((+(var_1))))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) << (((((/* implicit */int) arr_3 [i_1 - 1])) - (150))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (short)-10908);
                                arr_13 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (max((((/* implicit */long long int) arr_6 [i_4] [i_0] [(_Bool)1] [i_0])), (arr_0 [i_0]))))), (((/* implicit */long long int) (signed char)-1))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_1)) - (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [7ULL] [7ULL] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_12);
    var_22 = ((/* implicit */short) max((var_5), (((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) < (((/* implicit */int) var_14)))), ((!(((/* implicit */_Bool) var_8)))))))));
}
