/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35244
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
    var_17 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)15)), ((unsigned short)1))))) : (((((/* implicit */_Bool) 2019634331U)) ? (2019634323U) : (var_16))))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 2019634331U)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_3 [i_1])))) ? (((((_Bool) (short)-4096)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-16266)) | (((/* implicit */int) arr_0 [i_0]))))) : (2014621080U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) min((((4294967271U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 2] [i_3] [i_3]))))), (((/* implicit */unsigned int) ((signed char) arr_9 [i_3] [i_3 - 2] [i_2] [i_2])))));
                            var_19 = ((/* implicit */_Bool) ((short) var_2));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 - 2] = ((/* implicit */short) max((4294967290U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)60)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((signed char) ((long long int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
