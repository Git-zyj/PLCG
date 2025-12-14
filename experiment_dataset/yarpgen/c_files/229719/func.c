/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229719
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_10), (((/* implicit */int) var_7))))), (min((var_5), (((/* implicit */long long int) -349479608))))))), (max((min((((/* implicit */unsigned long long int) 349479608)), (var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) min((1594825888), (349479617)));
                var_13 = ((/* implicit */_Bool) max((max((arr_2 [i_0] [i_0]), (3151812111U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-118)))))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-1313091501)))), (min((((/* implicit */long long int) (unsigned char)107)), (var_5))))), (max((-7637257150813134483LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (var_2)))))))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) var_6)))), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) -349479618))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (signed char)43)), (985620267)))))), (min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max(((+(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (max((((/* implicit */long long int) (short)-1)), (-8864239925182342752LL))))))));
    var_17 = max((min((min((349479607), (((/* implicit */int) var_2)))), (min((((/* implicit */int) var_7)), (var_10))))), ((-(max((((/* implicit */int) var_6)), (-985620267))))));
}
