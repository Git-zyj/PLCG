/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4922
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
    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((+(var_4))) >= (max((var_4), (((/* implicit */long long int) var_11))))))), ((+(var_12)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((unsigned char) 4876125723148412146ULL);
                arr_6 [i_0] = ((/* implicit */unsigned int) max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) : (1031821696U))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (max((0U), (((/* implicit */unsigned int) var_1))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((arr_1 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)31), (arr_2 [10ULL] [i_1])))) ? ((+(((/* implicit */int) (signed char)121)))) : (((/* implicit */int) (unsigned char)48)))))));
            }
        } 
    } 
}
