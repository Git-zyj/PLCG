/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218067
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-30)), (var_13))))))) ? (((/* implicit */int) ((unsigned char) min((4194303U), (((/* implicit */unsigned int) (signed char)-30)))))) : ((~(((/* implicit */int) (short)9479))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (min((var_3), (((/* implicit */long long int) var_10))))))) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) max((var_13), (((/* implicit */unsigned short) (signed char)-3))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned char)16)), (2870602730U)))))) ? (3944164772U) : (3515067602U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (arr_8 [i_0] [i_0] [i_0] [i_2 + 4])))), (arr_10 [i_0] [i_1] [i_0]))), (((((((/* implicit */int) var_0)) != (((/* implicit */int) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (min((((/* implicit */long long int) var_5)), (arr_2 [i_0])))))));
                    var_18 = arr_1 [i_0];
                    var_19 |= ((/* implicit */short) ((((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_10))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(262080))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_7))))))) : (((max((17029621138179020644ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) / (((/* implicit */unsigned long long int) var_3))))));
                }
            } 
        } 
    } 
}
