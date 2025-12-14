/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213422
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-(((/* implicit */int) (short)-32764))));
                                var_18 = ((/* implicit */unsigned short) max(((-(0LL))), (((((/* implicit */_Bool) max((arr_10 [(_Bool)1]), (((/* implicit */unsigned int) var_2))))) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned char) arr_11 [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_13 [(unsigned short)9] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) 4294967291U);
                    var_19 += ((/* implicit */short) (~(((arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2] [i_1]) - (arr_12 [i_0] [i_2] [i_0] [i_1 - 2] [i_1 - 4])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((-7LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((unsigned int) 4294967295U))))), (((/* implicit */long long int) var_7)))))));
}
