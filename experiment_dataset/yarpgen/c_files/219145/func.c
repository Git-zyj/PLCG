/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219145
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_14);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((short) ((signed char) ((unsigned char) (unsigned short)3468))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0 - 3]))) ? (((int) -5709618423715911033LL)) : (((((/* implicit */int) arr_0 [(_Bool)1])) >> (((((/* implicit */int) var_0)) - (82))))))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = max((((/* implicit */unsigned long long int) ((int) var_3))), (((unsigned long long int) max((((/* implicit */long long int) arr_5 [i_1])), (var_11)))));
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1 - 3]);
        var_18 -= ((/* implicit */unsigned short) max((min((2439118639U), (((/* implicit */unsigned int) arr_4 [i_1 - 2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3527681021897359797LL)) || (((/* implicit */_Bool) arr_5 [i_1 - 3])))))));
        arr_9 [i_1 - 2] [6LL] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_1 - 2]));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((arr_6 [i_1 - 2]), (((/* implicit */unsigned short) arr_5 [i_1 - 1])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                arr_16 [i_2] [i_3] = ((/* implicit */long long int) max((((((/* implicit */int) arr_15 [i_3] [i_3])) ^ (var_2))), (((/* implicit */int) (unsigned char)210))));
                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_10)))) < (((/* implicit */int) ((unsigned short) var_6))))))) * (((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) var_10)))));
}
