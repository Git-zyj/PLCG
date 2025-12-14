/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192791
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
    var_13 = ((/* implicit */int) var_2);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-1)) : ((-(((/* implicit */int) ((unsigned char) (signed char)14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)0);
                arr_8 [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) max((min((((/* implicit */short) arr_5 [i_0 - 1] [i_1])), (var_10))), (((/* implicit */short) arr_4 [i_0 + 1])))))));
                var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) min(((short)16383), (((/* implicit */short) var_8))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) : (var_11)))));
                var_16 = ((/* implicit */unsigned char) ((111368592) >= ((+(((((/* implicit */int) var_10)) + (((/* implicit */int) (signed char)-30))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
}
