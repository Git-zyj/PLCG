/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35627
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
    var_16 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) ((short) 8595822332386952258LL)))) + (var_13))) + (9223372036854775807LL))) << (min(((+(var_6))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((signed char) ((_Bool) 0)));
                    arr_7 [i_0] [0U] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)78))))) <= (max(((+(16749170403971986424ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -11)) | (1048575U))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (min((max((((/* implicit */unsigned int) 10)), (3742331008U))), (var_12)))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((unsigned char) arr_9 [i_3])))) * (((/* implicit */int) min((var_10), (((/* implicit */short) var_1))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(unsigned char)7] [(_Bool)1] [(short)19] = ((/* implicit */_Bool) arr_11 [21U] [i_0]);
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((131071), (-11)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
    var_21 = ((/* implicit */_Bool) ((3277662107U) >> (((-5) + (7)))));
}
