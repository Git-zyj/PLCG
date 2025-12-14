/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239160
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
    var_11 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) ((int) max((0), (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [0ULL] [0ULL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(1508876343)))) ? (max((((/* implicit */int) var_10)), (564241711))) : ((-(((/* implicit */int) arr_1 [(unsigned short)5])))))), (-500275606)));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) -1598908019);
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]);
                var_12 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1550800532)) > (arr_2 [i_0]))))) * (min((((/* implicit */long long int) arr_5 [(signed char)14])), (var_3))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
}
