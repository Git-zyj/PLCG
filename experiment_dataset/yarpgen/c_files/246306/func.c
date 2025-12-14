/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246306
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) max((max(((unsigned short)59222), (max(((unsigned short)6335), ((unsigned short)6335))))), (min((min(((unsigned short)6335), ((unsigned short)6335))), (((/* implicit */unsigned short) (unsigned char)128))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)59200)), (var_15)))), (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_18))))), (((/* implicit */unsigned long long int) max((min((4294967295U), (arr_1 [i_0]))), (max((16380U), (((/* implicit */unsigned int) arr_3 [i_1])))))))))));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)190)), ((unsigned short)6345)))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_2))))))), (min((max((var_4), (((/* implicit */long long int) arr_3 [i_1])))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)128)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)190), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */int) min(((unsigned short)59224), (((/* implicit */unsigned short) var_0))))), (max((((/* implicit */int) arr_2 [i_0])), (var_7)))))));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)127)), (arr_0 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)145)))), (min((3224621506U), (3224621506U))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)6312)))), (min((var_11), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((unsigned char)127), ((unsigned char)127)))), (max((((/* implicit */unsigned short) (unsigned char)4)), (var_10))))))));
}
