/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24122
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((int) arr_4 [i_0] [i_1] [i_1]))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27102))) : (arr_0 [i_0] [i_1]))))))))));
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (short)-8819)) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)53)) && (((/* implicit */_Bool) 16054701447978333305ULL))))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((max((var_8), (((/* implicit */unsigned int) (short)27102)))), (((/* implicit */unsigned int) max(((short)-27103), (((/* implicit */short) var_10)))))))) : (var_5)));
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) -7050047647447171190LL));
}
