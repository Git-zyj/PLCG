/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30916
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_4 - 1] [i_2] [i_4 - 1])) < (((/* implicit */int) arr_7 [i_4 + 1] [i_2] [i_4 + 1]))))))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_2]) << (((((arr_1 [i_1]) + (8235460689568822365LL))) - (23LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [i_3] [i_3] [13ULL] [i_3] [i_4 - 1] [i_4] [i_4 - 1])));
                                arr_13 [i_0] [13] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_12 [i_3] [i_3] [i_4] [i_3] [i_4 - 1] [(_Bool)1] [i_4]) << (((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_9 [i_1] [i_1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) != (((/* implicit */int) var_2)))))) : (arr_2 [i_4 - 1])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65527))))), (((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
    var_17 = ((/* implicit */unsigned int) var_6);
}
