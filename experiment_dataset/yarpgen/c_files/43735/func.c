/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43735
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) 2814369528U)), (var_4)))))) ? (((/* implicit */long long int) max((var_11), (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)76))))))) : (((((/* implicit */_Bool) ((long long int) 15780088383949849706ULL))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : (var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) ((signed char) arr_5 [i_0] [i_0]))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */int) 4294967295U);
                                var_16 *= ((/* implicit */unsigned short) arr_5 [i_0] [1]);
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) 0U)), (-15LL))))), (0U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_9))) | (((/* implicit */int) (short)17091))));
    var_18 += ((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) var_3)), (var_5))));
}
