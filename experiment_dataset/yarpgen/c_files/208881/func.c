/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208881
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
    var_19 = ((/* implicit */short) var_13);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 570961090322919287ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (max((max((((/* implicit */unsigned long long int) (signed char)-29)), (7589789962995936692ULL))), (((/* implicit */unsigned long long int) var_18))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-29)), (max((((/* implicit */unsigned short) (unsigned char)67)), ((unsigned short)18451)))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)21] [(unsigned short)21])), (min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)87)) || (arr_6 [i_1] [i_1]))))))));
                            arr_15 [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) : (((arr_14 [9U] [i_0] [i_1 - 3] [i_2]) + (2571156232U))));
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11))))), (max((var_13), (((/* implicit */unsigned long long int) ((var_2) && ((_Bool)1))))))));
            }
        } 
    } 
}
