/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20250
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
    var_16 = ((/* implicit */short) var_11);
    var_17 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7ULL))) == (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_5 [i_0] [i_0])))), (max((-319521536), (((/* implicit */int) (unsigned char)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_0] [i_1] [i_3] [i_4])), (min((var_2), (((/* implicit */short) var_7))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(77476437)))) ? (((arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_2] [(unsigned char)4] [i_0]), (arr_2 [i_4] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_9))));
}
