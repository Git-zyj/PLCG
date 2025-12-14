/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246888
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) max((arr_5 [i_0] [i_0] [(short)5]), (arr_5 [i_0] [i_0] [i_1])));
                arr_8 [i_0] [(unsigned char)5] = ((/* implicit */signed char) ((arr_3 [i_0]) > (((/* implicit */unsigned long long int) (-(arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [0LL] [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) 10U))))));
                                arr_19 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4])))))));
                                arr_20 [i_1] [i_2] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) arr_4 [i_0] [i_0])))))) * (var_5)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-(var_11))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */unsigned long long int) var_3);
}
