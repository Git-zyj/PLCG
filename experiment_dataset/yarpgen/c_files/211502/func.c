/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211502
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) << (((arr_0 [i_0]) - (5606804281708894919ULL)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_2 - 1])))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) << (((((arr_0 [i_0]) - (5606804281708894919ULL))) - (16722972995607517550ULL)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_2 - 1]))))));
                    arr_8 [i_0] [2LL] [2LL] = arr_6 [7LL] [i_0] [i_2];
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)110))));
                    var_16 = ((/* implicit */_Bool) max((18446744073709551615ULL), (3431833118851220680ULL)));
                }
            } 
        } 
    } 
    var_17 -= ((((/* implicit */_Bool) 285880351352228756LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (var_13));
    var_18 = ((/* implicit */int) (signed char)-14);
}
