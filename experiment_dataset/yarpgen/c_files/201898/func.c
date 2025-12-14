/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201898
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
    var_18 = var_15;
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_4)))) : ((+(1756891805)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) min((arr_4 [i_1]), (((/* implicit */short) var_7))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)27298)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)-27289)))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_17))))))) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]))))) : ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) (short)27298)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((signed char) var_13))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_2] [i_3])))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) min(((short)27298), (var_10)))) != (((int) arr_2 [i_0]))))) << (((-1756891833) + (1756891846)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) arr_0 [i_2])), (((/* implicit */unsigned int) arr_5 [i_0]))))) ? (min((min((var_5), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_0])))), (((/* implicit */long long int) ((_Bool) (unsigned char)114))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (2261939923U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27298))))))))))));
                                var_25 = ((/* implicit */signed char) ((_Bool) 9223372036854775807LL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
